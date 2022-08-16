import os
import socket
import time
from functools import partial

from PyQt5.QtCore import QThread, pyqtSignal, QMutex, QTimer
from PyQt5.QtWidgets import QApplication, QListWidgetItem, QFileDialog
import operator
from dirview.example.my_widgets import Title
from dirview.example.my_list import ItemWidget
from dirview.logic.mooe_connect import Server
from dirview.example.my_bubble import BubbleLabel

from dirview.logic.read_inifile import read_config, set_config
from dirview.logic.welt_window import Welt_Window

# from dirview.logic import setsnzip_env
ini_config = read_config()
# 线程生命参数
alive = True


class Win():
    def __init__(self, parent=None):
        global ini_config
        self.ui = Title()
        self.ui2 = Welt_Window()
        self.initUi()
        self.pwd = ini_config[0][0][1]
        self.local_load = ini_config[0][1][1]

    def initUi(self):
        self.ui.switch.checkedChanged.connect(self.switch_click)
        self.ui.get_file = self.get_file
        self.ui.pushButton.clicked.connect(self.un_sz)

    def switch_click(self):
        self.ip = self.ui.lineEdit.text()
        print(self.ip)
        if len(self.ip) <= 10:
            self.ui.switch.checked = False
        elif self.ui.switch.checked and self.ui.listWidget.isHidden():
            # 显示listwidget
            self.ui.listWidget.show()
            self.my_shell = my_shell(self.ip)
            self.my_shell.shell.connect(self.view_file)
            self.my_shell.start()
            self.heartbeat = heartbeat(self.ip)
            self.heartbeat.heart.connect(self.closs_shell)
            self.heartbeat.start()

        elif self.ui.switch.checked is False and self.ui.listWidget.isHidden() is False:
            self.closs_shell()
        print("listWidget", self.ui.listWidget.isHidden())
        print("switch", self.ui.switch.checked)

    def view_file(self, bool):
        print("bool", bool)
        if bool:
            self.del_listWidget()
            print("执行的命令是", self.pwd)
            self.file_shell = file_shell(cmd="cd {}".format(self.pwd))
            self.file_shell.load.connect(self.dir_head)
            self.file_shell.mes.connect(self.dir_view)
            self.file_shell.start()
        else:
            self.closs_shell()
            print("连接失败")

    def dir_head(self, pwd):
        self.pwd = pwd[0]
        # test添加列表
        item = QListWidgetItem(self.ui.listWidget)
        # item = QtWidgets.QListWidgetItem(QtGui.QIcon(':/icon/返回.png'), '新建项目')
        # self.listWidget.addItem(item)
        widget = ItemWidget(self.pwd, 'size', self.ui.listWidget)
        # print(self.ui.listWidget.count())
        self.ui.listWidget.insertItem(0, item)
        self.ui.listWidget.setItemWidget(item, widget)
        widget.cls_double_click.connect(self.double_click)

    def dir_view(self, test_dir):
        self.test_dir = test_dir
        for key, value in self.test_dir.items():
            item_2 = QListWidgetItem(self.ui.listWidget)
            widget_2 = ItemWidget(key, value, self.ui.listWidget)
            self.ui.listWidget.insertItem(self.ui.listWidget.count(), item_2)
            self.ui.listWidget.setItemWidget(item_2, widget_2)
            widget_2.cls_double_click.connect(self.double_click)

    def get_file(self):
        mes = ItemWidget.cls_dir_load
        if mes == self.pwd:
            return
        if self.ui.getfile_Clicked(mes):
            print("下载", ItemWidget.cls_dir_load)
            print("mes", mes)
            openfile_name = QFileDialog.getExistingDirectory(None, "选择存储文件夹", os.getcwd())
            if openfile_name == '':
                # self.frequency -= 1
                return
            if operator.eq(self.test_dir[mes][-1], '-'):
                size = self.test_dir[mes][0]
                self.get_file_shell = get_file_shell(ItemWidget.cls_dir_load, self.pwd, openfile_name, size)
                self.get_file_shell.mes_size.connect(self.begin_get)
                self.get_file_shell.mes_err.connect(self.onMsgShow)
                self.get_file_shell.start()

    def double_click(self, load):
        global qmut_2
        print("qmut_2", qmut_2)
        self.load = load
        # print("路径", self.load)
        if self.load == self.pwd and qmut_2 == True:
            self.pwd = '..'
            # print(self.pwd)
            self.view_file(True)
            qmut_2 = False
        elif qmut_2 == True:
            i = self.test_dir[self.load]
            if i[1] == 'd':
                self.pwd = self.load
                # print(self.pwd)
                self.view_file(True)
                qmut_2 = False

    def show(self):
        self.ui.show()
        # self.ui2.show()
        # self.welt_move()

    def welt_move(self):
        # pos = self.ui.pos()
        size = self.ui.geometry()
        print(size)
        # print(pos)
        self.ui2.move(size.x() + size.width() - 11, size.y() + 11)

    def del_listWidget(self):
        # 清空所有Item
        for _ in range(self.ui.listWidget.count()):
            # 删除item
            # 一直是0的原因是一直从第一行删,删掉第一行后第二行变成了第一行
            # 这个和删除list [] 里的数据是一个道理
            item = self.ui.listWidget.takeItem(0)
            # 删除widget
            self.ui.listWidget.removeItemWidget(item)
            del item

    def begin_get(self, mes_size):
        mes_size = mes_size
        # print(mes_size)
        self.timer = QTimer()
        self.timer.timeout.connect(partial(self.set_degress, mes_size))
        self.timer.start(1000)

    def set_degress(self, mes_size):
        if os.path.exists(mes_size[1]):
            value = int(os.path.getsize(mes_size[1])) * 100 // (int(mes_size[0]) + 1)
            print(mes_size, value)
            if value >= 99:
                self.ui.progressBar.setValue(100)
                self.timer.stop()
                self.ui.progressBar.reset()
                self.onMsgShow("下载完成")
            elif operator.gt(int(mes_size[0]), 0):
                self.ui.progressBar.setValue(value)
            else:
                self.timer.stop()
                self.onMsgShow("下载完成")

    def onMsgShow(self, mes):
        if hasattr(self, "_blabel"):
            self._blabel.stop()
            self._blabel.deleteLater()
            del self._blabel
        self._blabel = BubbleLabel()
        self._blabel.setText(mes)
        self._blabel.show()

    def closs_shell(self):
        self.ui.switch.checked = False
        self.ui.switch.pressevent()
        self.ui.listWidget.hide()
        # 清空listwidget
        self.ui.listWidget.clear()
        if hasattr(my_shell, 'line') and my_shell.line != None:
            my_shell.line.close()
            self.my_shell.quit()
            my_shell.line = None
        global alive
        alive = False
        self.heartbeat.quit()
        print("连接已关闭")

    def un_sz(self):
        try:
            if not os.path.exists(self.local_load):
                self.local_load = './'
            openfile_name = QFileDialog.getOpenFileName(None, '选择文件', self.local_load, 'All types (*.*)')
            if openfile_name[0] == '':
                return
            else:
                openfile_name = openfile_name[0]
                openfile_name_dir = openfile_name[:openfile_name.rfind('/')]
                set_config(openfile_name_dir)
                self.un_szfile = un_szfile(openfile_name)
                self.un_szfile.un_szmes.connect(self.onMsgShow)
                self.un_szfile.run()
                print(openfile_name)
        except:
            pass


qmut_1 = QMutex()


class my_shell(QThread, Server):
    line = None
    shell = pyqtSignal(bool)

    def __init__(self, ip, parent=None):
        super(my_shell, self).__init__(parent)
        self.ip = ip

    def run(self):
        global ini_config
        qmut_1.lock()
        try:
            port, self.user, self.passwd = ini_config[1]
            # my_shell.line = Server(self.ip, 22, "liberalchang", "123456")
            print(int(port[1]), self.user, self.passwd)
            self.port = int(port[1])
            my_shell.line = Server(self.ip, self.port, self.user[1], self.passwd[1])
            # my_shell.line = Server('172.16.1.27', 8103, "muyi", "muyi@123")
            my_shell.line.connect()
            my_shell.line.open_channel()
            self.shell.emit(True)
            print("连接成功")
        except:
            self.shell.emit(False)
        qmut_1.unlock()


qmut_2 = True


class file_shell(QThread, Server):
    mes = pyqtSignal(dict)
    load = pyqtSignal(list)

    def __init__(self, cmd, parent=None):
        super(file_shell, self).__init__(parent)
        self.cmd = cmd

    def run(self):
        global qmut_2
        try:
            # if my_shell.line:
            my_shell.line.get_prompt(expect_symbol='$ ')
            my_shell.line.channel_send_cmd(self.cmd, )
            pwd = my_shell.line.channel_send_cmd("pwd", )
            pwd = pwd.split('\r\n')[1:-1]
            self.load.emit(pwd)
            # print("pwd", pwd)
            print("-------------------------")
            # mesage = my_shell.line.channel_send_cmd('du -h  --max-depth=1 * ', )
            mesage = my_shell.line.channel_send_cmd('ls -lA --color=never', )
            mes = mesage.split("\r\n")[2:-1]
            # print(mes)
            test_dir = {}
            for i in mes:
                # print(i)
                i = i.split()
                # print(i[-5], i[0][0])
                t = list((i[-5], i[0][0]))
                test_dir.setdefault(i[-1], t)
            self.mes.emit(test_dir)
        except:
            print("file_err")
        qmut_2 = True


qmut_3 = QMutex()


class get_file_shell(QThread, Server):
    mes_size = pyqtSignal(list)
    mes_err = pyqtSignal(str)

    def __init__(self, remote_load, pwd, openfile_name, size, parent=None):
        super(get_file_shell, self).__init__(parent)
        self.remote_load = remote_load
        self.pwd = pwd
        self.openfile_name = openfile_name
        self.size = size

    def run(self):
        qmut_3.lock()
        remotefile = self.pwd + "/" + self.remote_load
        openfile_name = self.openfile_name + '/'
        localfile = os.path.join(openfile_name, self.remote_load)
        # print("localfile", localfile)
        # print("remotefile", remotefile)
        my_shell.line.open_sftp()
        mes_size = list((self.size, localfile))
        self.mes_size.emit(mes_size)
        mes = my_shell.line.sftp_get(remotefile, localfile)
        if isinstance(mes, list):
            mes = ''.join(mes)
            self.mes_err.emit(mes)
        qmut_3.unlock()


class heartbeat(QThread):
    heart = pyqtSignal()

    def __init__(self, ip, parent=None):
        super(heartbeat, self).__init__(parent)
        self.ip = ip
        global alive, ini_config
        alive = True

    def run(self):
        while True:
            time.sleep(3)
            try:
                if not alive:
                    print("退出线程")
                    break
                socket.setdefaulttimeout(5)
                s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
                self.port = int(ini_config[1][0][1])
                s.connect((self.ip, self.port))
                s.send(bytes("INFO\r\n", 'UTF-8'))
                result = s.recv(1024).decode()

            except:
                self.heart.emit()


class un_szfile(QThread):
    un_szmes = pyqtSignal(str)

    def __init__(self, load, parent=None):
        super(un_szfile, self).__init__(parent)
        self.load = load

    def run(self):
        try:
            # setsnzip_env.set_env()
            path_env = os.path.abspath(__file__)
            path_env = os.path.join(path_env.split('dirview')[0], 'snzip-1.0.5-win64\\snzip.exe')
            print('sunzip路径', path_env)
            if self.load[-2:] == 'sz':
                cmd = '{} -d {}'.format(path_env,self.load)
                print(cmd)
                os.system(cmd)
            self.un_szmes.emit("解压完成")
        except:
            pass


if __name__ == '__main__':
    import sys

    app = QApplication(sys.argv)
    win = Win()
    win.show()
    sys.exit(app.exec_())
