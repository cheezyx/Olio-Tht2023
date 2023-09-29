#include "devicetouchpad.h"

DeviceTouchPad::DeviceTouchPad()
{

}

void DeviceTouchPad::setTouchPadSensitivity()
{
    cout<<"Touch Pad Sensitivity"<<endl;
    cout<<"more sensitivity--1  2  3  4  5--less sensitivity"<<endl;
    cin>>touchPadSensitivity;

    while (cin.fail() || touchPadSensitivity < 1 || touchPadSensitivity > 5)
    {
        cout << "Invalid input. Please enter a valid Touch Pad Sensitivity (1-5): ";

        // Puhdista syötepuskuri, jotta vältetään ikuinen silmukka
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cin >> touchPadSensitivity;
    }

}

short DeviceTouchPad::getTouchPadSensitivity()
{
    return touchPadSensitivity;
}
