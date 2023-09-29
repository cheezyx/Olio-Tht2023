#include <iostream>
#include "deviceui.h"
using namespace std;

int main()
{
    DeviceUI* polio;
    polio = new DeviceUI;
    DeviceBaseClass binfo;

    polio->uiShowMenu();
    bool kaka = true;
    while (kaka == true) {

        int valinta;
        cin>>valinta;
        if (cin.fail()) {
            cout << "Invalid input. Please enter a valid choice." << endl;
            cin.clear();  // Clear the error state
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Clear the input buffer
            polio->uiShowMenu();
            continue; }

    switch (valinta) {
    case 1:
        cout<<"--Set mouse ID--"<<endl;
        binfo.setDeviceID();
        binfo.getDeviceID();
        polio->uiSetMouseInformation();
        polio->uiShowMenu();
        break;
    case 2:
        cout<<"--Set Touch Pad device ID--"<<endl;
        binfo.setDeviceID();
        binfo.getDeviceID();
        polio->uiSetTouchPadInfo();
        polio->uiShowMenu();
        break;
    case 3:
        cout<<"--Set Display ID--"<<endl;
        binfo.setDeviceID();
        binfo.getDeviceID();
        polio->uiSetDisplayInfo();
        polio->uiShowMenu();
        break;
    case 4:
        polio->uiShowDeviceInfo();
        polio->uiShowMenu();
        break;
    case 5:
        cout<<"You chose 5 = closing the menu"<<endl;
        kaka = false;
        break;
    default:
        polio->uiShowMenu();
    }
    };




    return 0;
}
