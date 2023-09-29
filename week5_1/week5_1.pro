TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        devicebaseclass.cpp \
        devicedisplay.cpp \
        devicemouse.cpp \
        devicetouchpad.cpp \
        deviceui.cpp \
        main.cpp

HEADERS += \
    devicebaseclass.h \
    devicedisplay.h \
    devicemouse.h \
    devicetouchpad.h \
    deviceui.h
