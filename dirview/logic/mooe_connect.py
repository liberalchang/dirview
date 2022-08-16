# -*- coding: utf-8 -*-
import socket

import paramiko
from time import sleep


class Server(object):

    def __init__(self, ip='', port=22, username='', password='', timeout=30):
        """
        通过IP, 端口，用户名，密码，超时时间，初始化一个远程主机
        :param str ip:
        :param int port: default value is 22
        :param str username:
        :param str password:
        :param int timeout: default value is 30.
        """
        # 连接信息
        self._ip = ip
        self._port = port
        self._username = username
        self._password = password
        self._timeout = timeout
        # transport, channel, ssh, sftp, prompt
        self._transport = None
        self._channel = None
        self._ssh = None
        self._sftp = None
        self._prompt = None
        # 连接失败的重试次数（总计3次尝试）
        self._try_times = 2

    # 调用connect方法连接远程主机
    def connect(self):
        """
        :return: result
        """
        _result = ''
        while True:
            # 尝试连接
            try:
                self._transport = paramiko.Transport((self._ip, self._port))
                self._transport.connect(username=self._username, password=self._password)
                # 如果没有抛出异常说明连接成功，直接返回
                _result += '%s 创建成功' % self._ip
                break
            # 这里对可能的异常如网络不通、链接超时、socket.error, socket.timeout直接输出
            except Exception as _e:
                if self._try_times != 0:
                    _result += '第%i次连接 %s 异常，原因：%s\n' % (3 - self._try_times, self._ip, _e)
                    _result += '进行重试\n'
                    self._try_times -= 1
                else:
                    _result += '第%i次连接 %s 异常，原因：%s\n' % (3 - self._try_times, self._ip, _e)
                    _result += '连接远程主机 %s 失败，结束重试' % self._ip
                    break
        return _result

    # 开启ssh
    def open_ssh(self):
        # 连接ssh
        try:
            self._ssh = paramiko.SSHClient()
            # self._ssh.set_missing_host_key_policy(paramiko.AutoAddPolicy())
            self._ssh._transport = self._transport
            return '%s ssh连接成功' % self._ip
        except Exception as _e:
            return '%s ssh连接失败：%s' % (self._ip, _e)

    # ssh发送无需交互的单条命令
    def ssh_send_cmd(self, cmd):
        """
        仅支持无需交互的指令
        :param str cmd:
        :return: str stdout、str stderr
        """
        try:
            _stdin, _stdout, _stderr = self._ssh.exec_command(cmd)
            for outmessage in self.line_buffered(_stdout):
                print(outmessage)
            # 返回decode的指令stdout和stderr信息
            # return _stdout.read().decode(), _stderr.read().decode()
        except Exception as _e:
            return 'ssh指令执行失败：%s' % _e

    def line_buffered(self, f):
        line_buf = ""
        # print("start")
        # print(f.channel.exit_status_ready())
        while not f.channel.exit_status_ready():
            # print("ok")
            line_buf += f.read(size=1).decode("utf-8", 'ignore')
            if line_buf.endswith('\n'):
                yield line_buf
                line_buf = ''

    # 开启sftp
    def open_sftp(self):
        # 连接sftp
        try:
            self._sftp = paramiko.SFTPClient.from_transport(self._transport)
            return '%s sftp连接成功' % self._ip
        except Exception as _e:
            return '%s sftp连接失败：%s' % (self._ip, _e)

    # sftp get单个文件
    def sftp_get(self, remotefile='', localfile=''):
        """
        :param str remotefile: 远端的绝对路径+文件名
        :param str localfile: 本地的绝对路径+文件名
        :return: 下载结果
        """
        try:
            self._sftp.get(remotefile, localfile)
            return '%s下载成功' % remotefile
        except Exception as e:
            mes = list(('{}下载失败'.format(remotefile),e))
            return mes
    # sftp put单个文件
    def sftp_put(self, localfile='', remotefile=''):
        """
        :param str localfile: 本地的绝对路径+文件名
        :param str remotefile: 远端的绝对路径+文件名
        :return: 上传结果
        """
        try:
            self._sftp.put(localfile, remotefile)
            return '%s上传成功' % localfile
        except Exception as e:
            return '%s上传失败：%s' % (localfile, e)

    # 开启channel
    def open_channel(self):
        """
        :return: result
        """
        _result = ''
        try:
            self._channel = self._transport.open_session()
            self._channel.settimeout(self._timeout)
            self._channel.get_pty()
            self._channel.invoke_shell()
            # 如果没有抛出异常说明连接成功
            _result += '%s channel建立成功' % self._ip
            sleep(1)  # 等待1秒，接收SSH banner信息
            _Banner = self._channel.recv(65535)  # 接收ssh banner信息
        except Exception as _e:
            _result += '%s channel建立失败：%s' % (self._ip, _e)
        return _result

    # 获取channel提示符
    def get_prompt(self, expect_symbol=''):
        """
        设置默认提示符
        :param str expect_symbol: The prompt's symbol,like '>','# ','$ ',etc.
        :return: result
        """
        _result = ''
        try:
            # 发送"Enter"获取提示符
            n = 0
            while n < 3:
                self._channel.send("\r")
                # 暂停0.5~1秒接收输入回车后的返回结果
                sleep(0.5)
                _Prompt_vendor = self._channel.recv(64)
                # 获取提示符的两种方式：
                # 1. 按\r\n进行字符串分割，后边的就是完整的提示符
                # self._prompt = _Prompt_vendor.decode('utf-8').split('\r\n')[-1]
                # 2. 提示符取输出的后x位，即_Prompt_vendor[-x:]
                self._prompt = _Prompt_vendor[-2:].decode('utf-8')
                # 如果获取的提示符由期待的提示符末尾标识符结尾，判断为获取成功
                if self._prompt.endswith(expect_symbol):
                    _result += '提示符获取成功(%s)' % self._prompt
                    break
                n += 1
            else:
                _result += '提示符获取异常(%s)' % self._prompt
        except Exception as _e:
            _result += '提示符获取失败：%s' % _e
        return _result

    # 通过channel发送指令，返回执行结果。如果指令是交互指令，则需要给出交互的断点提示符
    def channel_send_cmd(self, cmd='', break_prompt='', long=False):
        """
        通过channel发送指令。
        如果是交互式指令，必须要给出break_prompt！用来判断断点，结束while循环，返回结果
        无需交互的指令，break_prompt空着就行
        :param str cmd: 执行的指令，支持交互指令
        :param str break_prompt: 判断指令结束/断点的提示符。默认为channel的提示符
        :return: result
        """
        _stream = ''
        if not break_prompt:
            break_prompt = self._prompt
        try:
            # print("提示符是", break_prompt)
            cmd += '\r'
            # 通过提示符来判断命令是否执行完成
            # 发送要执行的命令
            self._channel.send(cmd)
            # 回显很长的命令可能执行较久，通过循环分批次取回回显
            if long:
                _stream += self._channel.recv(1024)
                for line in self.line_buffered(_stream):
                    print(line)
            while True:
                sleep(0.5)
                _stream += self._channel.recv(1024).decode('utf-8')
                if _stream.endswith(break_prompt):
                    return _stream

        except Exception as _e:
            return 'channel执行指令异常：%s' % _e

    def close(self):
        # 断开连接
        if self._ssh:
            self._ssh.close()
        if self._channel:
            self._channel.close()
        if self._transport:
            self._transport.close()
        return '%s 连接已关闭' % self._ip

    def __del__(self):
        return
