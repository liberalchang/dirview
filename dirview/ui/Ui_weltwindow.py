# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'C:\Users\liberal\Desktop\mooetest\pyqt\welt_window.ui'
#
# Created by: PyQt5 UI code generator 5.15.4
#
# WARNING: Any manual changes made to this file will be lost when pyuic5 is
# run again.  Do not edit this file unless you know what you are doing.


from PyQt5 import QtCore, QtGui, QtWidgets
from PyQt5.QtCore import Qt
from static.image import static_icon_rc
from dirview.example.my_weltlabel import MyQLabel

class Ui_WeltWindow(object):
    def setupUi(self, WeltWindow):
        WeltWindow.setObjectName("WeltWindow")
        WeltWindow.resize(195, 492)
        # 窗口设置透明图片
        # WeltWindow.setStyleSheet("border-image: url(:/icon/transparent_photo.png);")
        self.horizontalLayout = QtWidgets.QHBoxLayout(WeltWindow)
        self.horizontalLayout.setContentsMargins(0, 0, 0, 0)
        self.horizontalLayout.setSpacing(0)
        self.horizontalLayout.setObjectName("horizontalLayout")
        self.frame = QtWidgets.QFrame(WeltWindow)
        self.frame.setMinimumSize(QtCore.QSize(16, 0))
        self.frame.setMaximumSize(QtCore.QSize(16777215, 16777215))
        self.frame.setLayoutDirection(QtCore.Qt.LeftToRight)
        self.frame.setStyleSheet("background-color: rgb(234, 234, 234);")
        self.frame.setFrameShape(QtWidgets.QFrame.NoFrame)
        self.frame.setFrameShadow(QtWidgets.QFrame.Plain)
        self.frame.setLineWidth(0)
        self.frame.setObjectName("frame")
        self.verticalLayout_2 = QtWidgets.QVBoxLayout(self.frame)
        self.verticalLayout_2.setContentsMargins(0, 0, 0, 0)
        self.verticalLayout_2.setSpacing(10)
        self.verticalLayout_2.setObjectName("verticalLayout_2")
        spacerItem = QtWidgets.QSpacerItem(20, 40, QtWidgets.QSizePolicy.Minimum, QtWidgets.QSizePolicy.Expanding)
        self.verticalLayout_2.addItem(spacerItem)
        self.label_hide = MyQLabel(self.frame)
        self.label_hide.setMinimumSize(QtCore.QSize(16, 100))
        self.label_hide.setMaximumSize(QtCore.QSize(16, 16777215))
        font = QtGui.QFont()
        font.setFamily("Webdings")
        font.setPointSize(10)
        font.setBold(False)
        font.setWeight(50)
        self.label_hide.setFont(font)
        self.label_hide.setContextMenuPolicy(QtCore.Qt.DefaultContextMenu)
        self.label_hide.setLayoutDirection(QtCore.Qt.LeftToRight)
        self.label_hide.setStyleSheet("border-radius:8px;\n"
"background-color: rgb(204, 204, 204);\n"
"")
        self.label_hide.setLineWidth(0)
        self.label_hide.setObjectName("label_hide")
        self.verticalLayout_2.addWidget(self.label_hide)
        spacerItem1 = QtWidgets.QSpacerItem(20, 40, QtWidgets.QSizePolicy.Minimum, QtWidgets.QSizePolicy.Expanding)
        self.verticalLayout_2.addItem(spacerItem1)
        self.horizontalLayout.addWidget(self.frame)
        self.scrollArea = QtWidgets.QScrollArea(WeltWindow)
        # self.scrollArea.setStyleSheet("background-color: rgb(255, 255, 255);")
        self.scrollArea.setStyleSheet("background-color: rgb(170, 0, 0);")
        self.scrollArea.setFrameShape(QtWidgets.QFrame.NoFrame)
        self.scrollArea.setFrameShadow(QtWidgets.QFrame.Plain)
        self.scrollArea.setLineWidth(1)
        self.scrollArea.setWidgetResizable(True)
        self.scrollArea.setObjectName("scrollArea")
        self.scrollAreaWidgetContents = QtWidgets.QWidget()
        self.scrollAreaWidgetContents.setGeometry(QtCore.QRect(0, 0, 179, 492))
        self.scrollAreaWidgetContents.setObjectName("scrollAreaWidgetContents")
        self.verticalLayout = QtWidgets.QVBoxLayout(self.scrollAreaWidgetContents)
        self.verticalLayout.setObjectName("verticalLayout")
        self.scrollArea.setWidget(self.scrollAreaWidgetContents)
        self.horizontalLayout.addWidget(self.scrollArea)
        self.horizontalLayout.setStretch(0, 1)
        self.horizontalLayout.setStretch(1, 100)

        self.retranslateUi(WeltWindow)
        QtCore.QMetaObject.connectSlotsByName(WeltWindow)

    def retranslateUi(self, WeltWindow):
        _translate = QtCore.QCoreApplication.translate
        WeltWindow.setWindowTitle(_translate("WeltWindow", "Form"))
        self.label_hide.setText(_translate("WeltWindow", "3"))
