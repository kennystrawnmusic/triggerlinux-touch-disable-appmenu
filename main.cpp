#include <iostream>
#include <QTouchDevice>

int main()
{
    if (QTouchDevice::devices().count() == 0) {
        std::cout << "org.kde.plasma.appmenu";
    } else {
        std::cout << "\0";
    }
    return 0;
}
