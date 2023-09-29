#ifndef DEVICEUI_H
#define DEVICEUI_H
#include "devicemouse.h"


class DeviceUI
{
public:
    DeviceUI();
    ~DeviceUI();
    void uiShowMenu();

private:
    DeviceMouse *ptrDeviceMouse;
};

#endif // DEVICEUI_H
