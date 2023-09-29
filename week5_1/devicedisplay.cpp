#include "devicedisplay.h"


deviceDisplay::deviceDisplay()
{

}
void deviceDisplay::setDisplayResolution()
{

    cout<<"Resolution options:"<<endl;
    cout<<"1: SD (Standard Definition)	480p	4:3	640 x 480"<<endl;
    cout<<"2: HD (High Definition)	720p	16:9	1280 x 720"<<endl;
    cout<<"3: Full HD (FHD)	1080p	16:9	1920 x 1080 "<<endl;
    cout<<"4: 2K video (Quad HD)	2k or 1440	16:9	2560 x 1440"<<endl;
    cout<<"5: 4K video or Ultra HD (UHD)	4K or 2160p	1:1.9	3840 x 2160"<<endl;
    cout<<"6: 8K video or Full Ultra HD	8K or 4320p	16∶9	7680 x 4320"<<endl;
    cout<<"7: NO"<<endl;
    cout<<"8: NO"<<endl;
    cout<<"9: NO"<<endl;
    cout<<"10: NO"<<endl;

   cin>>displayResolution;

    while (cin.fail() || displayResolution < 1 || displayResolution > 10)
   {
       cout<<"Invalid input. Please enter a valid resolution choice"<<endl;

        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cin>>displayResolution;

    }

}
short deviceDisplay::getDisplayResolution()
{
    return displayResolution;
}
