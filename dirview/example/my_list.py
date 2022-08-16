import os
from functools import partial
import operator
from PyQt5.QtCore import QSize, pyqtSignal
from PyQt5.QtWidgets import QWidget, QHBoxLayout, QLabel


class ItemWidget(QWidget):
    """自定义列表需要添加的内容"""
    cls_dir_load = None
    cls_double_dir_load = None
    cls_double_click = pyqtSignal(str)

    def __init__(self, dir_load, size_type, item, *args, **kwargs):
        super(ItemWidget, self).__init__(*args, **kwargs)
        self._item = item  # 保留list item的对象引用
        layout = QHBoxLayout(self)
        # setContentsMargins （ left,top,righ,bottom ）, 4个参数顺序是左上右下
        layout.setContentsMargins(2, 1, 2, 1)
        self.lico_label = MyQLabel(self)
        self.lico_label.setMaximumSize(QSize(20, 20))
        from static.qss import title_qss
        self.lico_label.setText("")
        self.load_label = MyQLabel(self)
        self.load_label.setText(dir_load)
        self.size_label = MyQLabel(self)
        self.size_label.setMaximumSize(QSize(80, 30))
        # print("size_type", size_type)
        if size_type == 'size':
            self.size_label.setText(size_type)
            self.lico_label.setStyleSheet("image: url(:/icon/返回.png);")
        else:
            self.size_label.setText(str(size_type[0]))
            if operator.eq(size_type[1], "-"):
                self.lico_label.setStyleSheet("image: url(:/icon/L.png);")
            else:
                self.lico_label.setStyleSheet("image : url(:/icon/dir.png);")

        layout.addWidget(self.lico_label)
        layout.addWidget(self.load_label)
        layout.addWidget(self.size_label)
        self.initUi(dir_load)

    def initUi(self, *args, **kwargs):
        dir_load = args[0]
        # 标签被点击
        self.load_label.button_clicked_signal.connect(partial(self.show_message, dir_load))
        self.lico_label.button_clicked_signal.connect(partial(self.show_message, dir_load))
        self.size_label.button_clicked_signal.connect(partial(self.show_message, dir_load))
        self.load_label.double_button_clicked.connect(partial(self.d_show_message, dir_load))
        self.lico_label.double_button_clicked.connect(partial(self.d_show_message, dir_load))
        self.size_label.double_button_clicked.connect(partial(self.d_show_message, dir_load))

    def show_message(self, dir_load):
        ItemWidget.cls_dir_load = dir_load
        # print(cls.cls_dir_load)

    def d_show_message(self, dir_load):
        ItemWidget.cls_double_dir_load = dir_load
        # print("双击", ItemWidget.cls_double_dir_load)
        self.cls_double_click.emit(ItemWidget.cls_double_dir_load)


class MyQLabel(QLabel):
    # 自定义信号, 注意信号必须为类属性
    button_clicked_signal = pyqtSignal()
    double_button_clicked = pyqtSignal()

    def __init__(self, parent=None):
        super(MyQLabel, self).__init__(parent)

    def mouseReleaseEvent(self, QMouseEvent):
        self.button_clicked_signal.emit()
        # print(QMouseEvent.pos())

    def mouseDoubleClickEvent(self, QMouseEvent):
        # 双击
        self.double_button_clicked.emit()
