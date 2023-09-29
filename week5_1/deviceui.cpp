#include "deviceui.h"

DeviceUI::DeviceUI()
{
    ptrDeviceMouse = new DeviceMouse;
}

DeviceUI::~DeviceUI()
{
    delete ptrDeviceMouse;
    ptrDeviceMouse = nullptr;
}

void DeviceUI::uiShowMenu ()
{
    short valinta;
    cout<<"DEVICE MENU"<<endl;
    cout<<"============="<<endl;
    cout<<"1: Set mouse information"<<endl;
    cout<<"2: Set touch pad information"<<endl;
    cout<<"3: Set display information"<<endl;
    cout<<"4: Show devices information"<<endl;
    cout<<"5: Finish"<<endl;
    cout<<"Choose"<<endl;
}
