TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        devicebaseclass.cpp \
        devicemouse.cpp \
        devicetouchpad.cpp \
        deviceui.cpp \
        main.cpp

HEADERS += \
    devicebaseclass.h \
    devicemouse.h \
    devicetouchpad.h \
    deviceui.h
