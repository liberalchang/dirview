# -*- coding: utf-8 -*-

"""
Module implementing MainWindow.
"""
from PyQt5.QtCore import pyqtSlot, Qt, QPoint
from PyQt5.QtGui import QEnterEvent, QPixmap, QCursor, QIcon
from PyQt5.QtWidgets import QApplication, QWidget, QMenu, QAction, QMessageBox

from dirview.ui.Ui_dirview import Ui_Dir_view_window
from static.image import static_icon_rc


class Title(QWidget, Ui_Dir_view_window):
    """
    自定义标题栏
    """

    def __init__(self, parent=None):
        super(Title, self).__init__(parent)
        self.setWindowFlags(self.windowFlags() | Qt.FramelessWindowHint)
        self.setupUi(self)
        self.initUi()

    def initUi(self):
        self._width = QApplication.desktop().availableGeometry(self).width()
        # 加载样式
        self._init_main_window()
        self._initDrag()  # 设置鼠标跟踪判断扳机默认值
        self.setMouseTracking(True)  # 设置widget鼠标跟踪
        self.my_Qss()  # 设置样式
        self.centralWidget.installEventFilter(self)  # 初始化事件过滤器
        self.head_widget.installEventFilter(self)
        # 添加自定义开关按钮
        self.add_switch()
        # 设置右键菜单
        self.listWidget.setContextMenuPolicy(Qt.CustomContextMenu)
        self.listWidget.customContextMenuRequested.connect(self.create_rightmenu)  # 连接到菜单显示函数
        # 设置lineedit输入格式
        # self.lineEdit.setInputMask('000.000.000.000;_')

    @pyqtSlot()
    def on_moveup_button_clicked(self):
        """
        移出上方隐藏
        """
        self.move(self.pos().x(), 1 - self.height())

    @pyqtSlot()
    def on_moveleft_button_clicked(self):
        """
        移出左边隐藏
        """
        self.move(1 - self.width(), self.pos().y())

    @pyqtSlot()
    def on_moveright_button_clicked(self):
        """
        移出右边隐藏
        """
        self.move(self._width - 1, self.pos().y())

    @pyqtSlot()
    def on_movedown_button_clicked(self):
        """
       关闭窗口
        """
        self.close()

    @pyqtSlot()
    def on_min_window_clicked(self):
        """
        最小化窗口
        """
        self.showMinimized()

    @pyqtSlot()
    def on_max_window_clicked(self):
        """
        最大化窗口
        """
        # 最大化与复原
        if self.isMaximized():
            self.showNormal()
            self.max_window.setText('1')  # 切换放大按钮图标
            self.max_window.setToolTip("<html><head/><body><p>最大化</p></body></html>")
            # print("isMaximized:",self.isMaximized())

        else:
            # print("isMaximized:",self.isMaximized())
            self.showMaximized()
            self.max_window.setText('2')
            self.max_window.setToolTip("<html><head/><body><p>恢复</p></body></html>")

    @pyqtSlot()
    def on_close_window_clicked(self):
        """
        关闭窗口
        """
        self.close()

    def _init_main_window(self):
        self.setWindowIcon(QIcon(":/icon/remote_get.png"))
        # 设置背景透明
        self.setAttribute(Qt.WA_TranslucentBackground)
        # 设置图标
        # w = self.window_icon.width()
        # h = self.window_icon.height()
        self.pix = QPixmap(":/icon/ico.png")
        self.window_icon.setPixmap(self.pix)
        self.window_icon.setScaledContents(True)
        # 设置标题
        self.window_title.setText('日志下载助手')
        # 设置标题字体，大小
        self.window_title.setStyleSheet('''
                                    font-family:"方正胖娃_GBK";
                                   font-size:11px;
                                   ''')
        # 设置head_widget最大高度
        self.head_widget.setMaximumHeight(42)

    def _initDrag(self):
        # 设置鼠标跟踪判断扳机默认值
        self._move_drag = False
        self._corner_drag = False
        self._bottom_drag = False
        self._right_drag = False

    def my_Qss(self):
        from static.qss import title_qss
        qss = title_qss.my_Qss()
        self.setStyleSheet(qss)

    def eventFilter(self, obj, event):
        # 事件过滤器,用于解决鼠标进入其它控件后还原为标准鼠标样式
        if isinstance(event, QEnterEvent):
            self.setCursor(Qt.ArrowCursor)
        return super(Title, self).eventFilter(obj, event)  # 注意 ,MyWindow是所在类的名称
        # return QWidget.eventFilter(self, obj, event)  # 用这个也行，但要注意修改窗口类型

    def resizeEvent(self, QResizeEvent):
        # 自定义窗口调整大小事件
        # 改变窗口大小的三个坐标范围
        self._right_rect = [QPoint(x, y) for x in range(self.width() - 20, self.width() - 5)
                            for y in range(self.centralWidget.height() + 20, self.height() - 5)]
        self._bottom_rect = [QPoint(x, y) for x in range(1, self.width() - 5)
                             for y in range(self.height() - 20, self.height() - 15)]
        self._corner_rect = [QPoint(x, y) for x in range(self.width() - 20, self.width() - 1)
                             for y in range(self.height() - 5, self.height() + 1)]
        # print("bottom_rect",self._bottom_rect)

    def mousePressEvent(self, event):
        # 重写鼠标点击的事件
        if (event.button() == Qt.LeftButton) and (event.pos() in self._corner_rect):
            # 鼠标左键点击右下角边界区域
            self._corner_drag = True
            event.accept()
        elif (event.button() == Qt.LeftButton) and (event.pos() in self._right_rect):
            # 鼠标左键点击右侧边界区域
            self._right_drag = True
            event.accept()
        elif (event.button() == Qt.LeftButton) and (event.pos() in self._bottom_rect):
            # 鼠标左键点击下侧边界区域
            self._bottom_drag = True
            event.accept()
        elif (event.button() == Qt.LeftButton) and (event.y() < self.centralWidget.height()):
            # 鼠标左键点击标题栏区域
            self._move_drag = True
            self.move_DragPosition = event.globalPos() - self.pos()
            event.accept()

    def mouseMoveEvent(self, QMouseEvent):
        # print(QMouseEvent.pos())
        # 判断鼠标位置切换鼠标手势
        if QMouseEvent.pos() in self._corner_rect:  # QMouseEvent.pos()获取相对位置
            self.setCursor(Qt.SizeFDiagCursor)
        elif QMouseEvent.pos() in self._bottom_rect:
            self.setCursor(Qt.SizeVerCursor)
        elif QMouseEvent.pos() in self._right_rect:
            # print("right")
            self.setCursor(Qt.SizeHorCursor)

        # 当鼠标左键点击不放及满足点击区域的要求后，分别实现不同的窗口调整
        # 没有定义左方和上方相关的5个方向，主要是因为实现起来不难，但是效果很差，拖放的时候窗口闪烁，再研究研究是否有更好的实现
        if Qt.LeftButton and self._right_drag:
            # 右侧调整窗口宽度
            # print('右侧调整窗口宽度')
            self.resize(QMouseEvent.pos().x(), self.height())
            QMouseEvent.accept()
        elif Qt.LeftButton and self._bottom_drag:
            # 下侧调整窗口高度
            self.resize(self.width(), QMouseEvent.pos().y())
            QMouseEvent.accept()
        elif Qt.LeftButton and self._corner_drag:
            #  由于我窗口设置了圆角,这个调整大小相当于没有用了
            # 右下角同时调整高度和宽度
            self.resize(QMouseEvent.pos().x(), QMouseEvent.pos().y())
            QMouseEvent.accept()
        elif Qt.LeftButton and self._move_drag:
            # 标题栏拖放窗口位置
            self.move(QMouseEvent.globalPos() - self.move_DragPosition)
            QMouseEvent.accept()

    def mouseReleaseEvent(self, QMouseEvent):
        # 鼠标释放后，各扳机复位
        self._move_drag = False
        self._corner_drag = False
        self._bottom_drag = False
        self._right_drag = False

    def add_switch(self):
        # 继承自定义开关按钮
        from dirview.example.my_switch import SwitchBtn
        self.switch = SwitchBtn(self.centralWidget)
        self.switch.setObjectName("switch")
        self.gridLayout.addWidget(self.switch, 0, 2, 1, 1)
        # 设置栅格的最小宽度
        self.gridLayout.setColumnMinimumWidth(2, 100)
        self.switch.setMaximumWidth(100)
        # 设置按钮控件的最小宽度
        self.pushButton.setMinimumWidth(80)
        self.pushButton.setMaximumWidth(80)
        # # 调整栅格布局元件比例
        # self.gridLayout.setColumnStretch(0, 1)
        # self.gridLayout.setColumnStretch(1, 3)
        # self.gridLayout.setColumnStretch(2, 2)
        # self.gridLayout.setColumnStretch(3, 1)
        # self.gridLayout.setColumnStretch(4, 1)
        # self.gridLayout.setColumnStretch(5, 10)
        # self.progressBar.setMaximumSize(QSize(1000, 13))
        self.progressBar.setMaximumHeight(13)
        # 设置pushbutton最小高度
        self.pushButton.setMinimumHeight(30)
        self.listWidget.hide()

    # 创建右键菜单函数
    def create_rightmenu(self):
        # 菜单对象
        self.item_menu = QMenu(self)
        # self.menu_view = True
        self.actionA = QAction(QIcon(':/icon/down_file.png'), u'下载', self)  # 创建菜单选项对象
        # self.actionA.setShortcut('Ctrl+S')  设置动作A的快捷键
        self.item_menu.addAction(self.actionA)  # 把动作A选项对象添加到菜单self.listwidget上
        # 声明当鼠标在groupBox控件上右击时，在鼠标位置显示右键菜单   ,exec_,popup两个都可以，
        self.item_menu.popup(QCursor.pos())
        # 将动作A触发时连接到槽函数get_file
        self.actionA.triggered.connect(self.get_file)

    def get_file(self):
        pass

    def getfile_Clicked(self, mes):
        """确定是否下载"""
        self.box = QMessageBox(QMessageBox.Question, '退出', '确定下载{}?'.format(mes))
        yes = self.box.addButton('确定', QMessageBox.YesRole)
        no = self.box.addButton('取消', QMessageBox.NoRole)
        # self.box.setIcon(':/icon/down_file.png'))
        self.box.setWindowIcon(QIcon(':/icon/down_file.png'))
        self.box.resize(240, 180)
        self.box.exec()
        if (self.box.clickedButton() == yes):
            return True


if __name__ == '__main__':
    import sys

    app = QApplication(sys.argv)
    win = Title()
    win.show()
    sys.exit(app.exec_())
