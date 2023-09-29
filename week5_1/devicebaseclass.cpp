#include "devicebaseclass.h"


DeviceBaseClass::DeviceBaseClass()
{

}

void DeviceBaseClass::setDeviceID()
{
    cout<<"Give device ID"<<endl;
    cin>>deviceID;
}

short DeviceBaseClass::getDeviceID()
{
    return deviceID;
}
