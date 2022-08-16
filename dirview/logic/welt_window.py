from PyQt5.QtCore import Qt

from dirview.ui.Ui_weltwindow import Ui_WeltWindow
from PyQt5.QtWidgets import QWidget, QApplication, QGraphicsOpacityEffect


class Welt_Window(QWidget):
    def __init__(self):
        super().__init__()
        self.ui = Ui_WeltWindow()
        # 窗体背景透明
        self.setAttribute(Qt.WA_TranslucentBackground)
        # self.setWindowOpacity(0.5)
        # 窗口置顶，无边框，在任务栏不显示图标
        self.setWindowFlags(Qt.WindowStaysOnTopHint | Qt.FramelessWindowHint | Qt.Tool)
        self.ui.setupUi(self)
        self.initUi()
    def initUi(self):
        self.hide = False
        self.ui.label_hide.connect_customized_slot(self.hide_ip)

    def hide_ip(self):
        op = QGraphicsOpacityEffect()
        if self.hide:
            self.hide = False
            op.setOpacity(1)
            self.ui.scrollArea.setGraphicsEffect(op)
            self.ui.scrollArea.setAutoFillBackground(True)
            self.ui.label_hide.setText('3')
            self.ui.scrollArea.show()
        else:
            self.hide = True
            op.setOpacity(0)
            self.ui.scrollArea.setGraphicsEffect(op)
            self.ui.scrollArea.setAutoFillBackground(True)
            # self.ui.scrollAreaWidgetContents.hide()
            # self.ui.scrollArea.hide()
            self.ui.label_hide.setText('4')
            # self.resize(50,610)



if __name__ == "__main__":
    import sys
    app = QApplication(sys.argv)
    win = Welt_Window()
    win.show()
    sys.exit(app.exec_())