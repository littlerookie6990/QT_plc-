QT       += core gui

#QT自带通信模块  -------onestep
QT       += network
QT       += serialbus
QT       += serialport
#

#QT自带机模块   ----onestep
QT       += multimedia
QT       += multimediawidgets
#

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

#lamboda表达式
CONFIG += c++11


#通信模块  ------secondStep
win32:LIBS += -lws2_32
QMAKE_CXXFLAGS += -std=gnu++11
#

#图像处理模块 ----------secondStep------------库都有问题-----主要是线程里面用到
TARGET = PLC_copy
TEMPLATE = app
#

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Camera/camera.cpp \
    Thread/qthead_camera.cpp \
    communication/dialog_modbus_rtu.cpp \
    communication/dialog_modbus_tcp.cpp \
    libmodbus/modbus-data.c \
    libmodbus/modbus-rtu.c \
    libmodbus/modbus-tcp.c \
    libmodbus/modbus.c \
    main.cpp \
    window/Kont_window/kont_operate.cpp \
    window/log_screen.cpp \
    window/mainwindow.cpp

HEADERS += \
    Camera/camera.h \
    Thread/qthead_camera.h \
    communication/dialog_modbus_rtu.h \
    communication/dialog_modbus_tcp.h \
    libmodbus/config.h \
    libmodbus/modbus-private.h \
    libmodbus/modbus-rtu-private.h \
    libmodbus/modbus-rtu.h \
    libmodbus/modbus-tcp-private.h \
    libmodbus/modbus-tcp.h \
    libmodbus/modbus-version.h \
    libmodbus/modbus.h \
    window/Kont_window/kont_operate.h \
    window/log_screen.h \
    window/mainwindow.h \
    system_parameter/system_parameter.h\

FORMS += \
    Camera/camera.ui \
    communication/dialog_modbus_rtu.ui \
    communication/dialog_modbus_tcp.ui \
    window/Kont_window/kont_operate.ui \
    window/log_screen.ui \
    window/mainwindow.ui\

#libmodbusL库
#---------------不知道为什么会失败---------因为必须把bin添加环境变量
INCLUDEPATH += D:\QT_box\try_yi_try\PLC\PLC_copy_v1\libmodbus_include
LIBS += -LD:\QT_box\try_yi_try\PLC\PLC_copy_v1\lib_modbus\ -lmodbus

#opencv 库
#库的头文件路径
INCLUDEPATH += D:\QT_box/try_yi_try\PLC\PLC_copy_v1\opencv_include
#静态库的路径--------------选自己要的-----------------一定要配置系统环境变量bin

LIBS += -LD:\QT_box\try_yi_try\PLC\PLC_copy_v1\lib_opencv\ -llibopencv_ts2413
LIBS += -LD:\QT_box\try_yi_try\PLC\PLC_copy_v1\lib_opencv\ -llibopencv_calib3d2413
LIBS += -LD:\QT_box\try_yi_try\PLC\PLC_copy_v1\lib_opencv\ -llibopencv_contrib2413
LIBS += -LD:\QT_box\try_yi_try\PLC\PLC_copy_v1\lib_opencv\ -llibopencv_nonfree2413
LIBS += -LD:\QT_box\try_yi_try\PLC\PLC_copy_v1\lib_opencv\ -llibopencv_ocl2413
LIBS += -LD:\QT_box\try_yi_try\PLC\PLC_copy_v1\lib_opencv\ -llibopencv_gpu2413
LIBS += -LD:\QT_box\try_yi_try\PLC\PLC_copy_v1\lib_opencv\ -llibopencv_photo2413
LIBS += -LD:\QT_box\try_yi_try\PLC\PLC_copy_v1\lib_opencv\ -llibopencv_objdetect2413
LIBS += -LD:\QT_box\try_yi_try\PLC\PLC_copy_v1\lib_opencv\ -llibopencv_legacy2413
LIBS += -LD:\QT_box\try_yi_try\PLC\PLC_copy_v1\lib_opencv\ -llibopencv_ml2413
LIBS += -LD:\QT_box\try_yi_try\PLC\PLC_copy_v1\lib_opencv\ -llibopencv_video2413
LIBS += -LD:\QT_box\try_yi_try\PLC\PLC_copy_v1\lib_opencv\ -llibopencv_features2d2413
LIBS += -LD:\QT_box\try_yi_try\PLC\PLC_copy_v1\lib_opencv\ -llibopencv_highgui2413
LIBS += -LD:\QT_box\try_yi_try\PLC\PLC_copy_v1\lib_opencv\ -llibopencv_imgproc2413
LIBS += -LD:\QT_box\try_yi_try\PLC\PLC_copy_v1\lib_opencv\ -llibopencv_flann2413
LIBS += -LD:\QT_box\try_yi_try\PLC\PLC_copy_v1\lib_opencv\ -llibopencv_core2413


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    qrc/tupian/zz.qrc














