#include "devicemouse.h"

DeviceMouse::DeviceMouse()
{

}

void DeviceMouse::setPrimaryButton()
{

    cout<<"1: Left"<<endl;
    cout<<"2: Right"<<endl;
    cin>>primaryButton;

    while (cin.fail() || primaryButton < 1 || primaryButton > 2)
    {
        cout<<"Invalid input. Please enter valid Primary Button: 1: Left OR 2: Right"<<endl;

        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cin>>primaryButton;
    }
}

short DeviceMouse::getPrimaryButton()
{
    return primaryButton;
}
