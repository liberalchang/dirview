import ctypes
import os
import sys

def is_admin():
    try:
        return ctypes.windll.shell32.IsUserAnAdmin()
    except:
        return False

def set_env():
    cmd = 'wmic ENVIRONMENT where name="PATH" get username,VariableValue'
    yet = os.popen(cmd).read().split('\n')
    # yet = iter(i.strip() for i in yet)
    yet = iter(i.strip() for i in yet)
    for i in yet:
        if i[:8] == '<SYSTEM>':
            yet = i
            break
    yet = yet.split(';')[1:]
    path_env = os.path.abspath(__file__)
    path_env = os.path.join(path_env.split('dirview')[0], 'snzip-1.0.5-win64\\')
    print(path_env)
    print(yet)
    if path_env not in yet:
        cmd2 = "wmic ENVIRONMENT where \"name='PATH' and username='<system>'\" set VariableValue=\"%PATH%;{}\"".format(
            path_env)
        if is_admin():
            print("以管理员权限运行")
            os.system(cmd2)
        else:
            if sys.version_info[0] == 3:
                # print("无管理员权限")
                ctypes.windll.shell32.ShellExecuteW(None, "runas", sys.executable, __file__, None, 1)
            # else:  # in python2.x
                # ctypes.windll.shell32.ShellExecuteW(None, u"runas", unicode(sys.executable), unicode(__file__), None, 1)

if __name__ == "__main__":
    set_env()

