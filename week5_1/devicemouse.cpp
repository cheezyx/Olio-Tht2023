#include "devicemouse.h"

DeviceMouse::DeviceMouse()
{

}

void DeviceMouse::setPrimaryButton()
{
    cout<<"Anna ensisijainen nappi"<<endl;
    cin>>primaryButton;
}

short DeviceMouse::getPrimaryButton()
{
    return primaryButton;
}
