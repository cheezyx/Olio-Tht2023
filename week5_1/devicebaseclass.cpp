#include "devicebaseclass.h"


DeviceBaseClass::DeviceBaseClass()
{

}

void DeviceBaseClass::setDeviceID()
{
    cout<<"Anna device ID"<<endl;
    cin>>deviceID;
}

short DeviceBaseClass::getDeviceID()
{
    return deviceID;
}
