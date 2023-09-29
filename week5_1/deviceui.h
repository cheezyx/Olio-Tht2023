#ifndef DEVICEUI_H
#define DEVICEUI_H
#include "devicemouse.h"
#include "devicetouchpad.h"
#include "devicedisplay.h"


class DeviceUI
{
public:
    DeviceUI();
    ~DeviceUI();
    void uiShowMenu();
    void uiSetMouseInformation();
    void uiSetTouchPadInfo();
    void uiSetDisplayInfo();
    void uiShowDeviceInfo();

private:
    DeviceMouse *pMouse;
    DeviceTouchPad *pPad;
    deviceDisplay *pDisplay;
};

#endif // DEVICEUI_H
