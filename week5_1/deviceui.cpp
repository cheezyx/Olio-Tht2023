#include "deviceui.h"

DeviceUI::DeviceUI()
{
    pMouse = new DeviceMouse;
    pPad = new DeviceTouchPad;
    pDisplay = new deviceDisplay;

}

DeviceUI::~DeviceUI()
{
    delete pMouse;
    pMouse = nullptr;
    delete pPad;
    pPad = nullptr;
    delete pDisplay;
    pDisplay = nullptr;
}

void DeviceUI::uiShowMenu ()
{
    cout<<"DEVICE MENU"<<endl;
    cout<<"============="<<endl;
    cout<<"1: Set mouse information"<<endl;
    cout<<"2: Set touch pad information"<<endl;
    cout<<"3: Set display information"<<endl;
    cout<<"4: Show devices information"<<endl;
    cout<<"5: Finish"<<endl;
    cout<<"Choose"<<endl;
}

void DeviceUI::uiSetMouseInformation() {

    pMouse->setPrimaryButton();
    pMouse->getPrimaryButton();
}

void DeviceUI::uiSetTouchPadInfo() {

    pPad->setTouchPadSensitivity();
    pPad->getTouchPadSensitivity();
}

void DeviceUI::uiSetDisplayInfo() {

    pDisplay->setDisplayResolution();
    pDisplay->getDisplayResolution();
}

void DeviceUI::uiShowDeviceInfo() {
    cout<<"---Mouse info---"<<endl;
    cout<<"Primary Button: "<<pMouse->getPrimaryButton()<<endl;
    cout<<"---Touch Pad info---"<<endl;
    cout<<"Sensitivity: "<<pPad->getTouchPadSensitivity()<<endl;
    cout<<"---Display info--- "<<endl;
    cout<<"Resolution: "<<pDisplay->getDisplayResolution()<<endl;

}
