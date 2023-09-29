#ifndef DEVICEDISPLAY_H
#define DEVICEDISPLAY_H
#include "devicebaseclass.h"

class deviceDisplay:public DeviceBaseClass
{
public:
    deviceDisplay();
    void setDisplayResolution();
    short getDisplayResolution();
private:
    short displayResolution;
};

#endif // DEVICEDISPLAY_H
