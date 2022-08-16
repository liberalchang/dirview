from PyQt5.QtWidgets import QApplication
from dirview.logic.dir_window import Win
import sys
import ctypes


def main():
    #设置任务栏图标
    ctypes.windll.shell32.SetCurrentProcessExplicitAppUserModelID("myappid")
    # 适配2k等高分辨率屏幕,低分辨率屏幕可以缺省
    # QCoreApplication.setAttribute(Qt.AA_EnableHighDpiScaling)
    app = QApplication(sys.argv)
    win = Win()
    win.show()
    sys.exit(app.exec_())
