#include <iostream>
#include <string>

#include "device.h"

Device::Device()
{
    isConnect = false;
    chargeBattery = 0;
}

void Device::deviced()
{
    std::cout << "name -> "          << name << '\n';
    std::cout << "address -> "       << address << '\n';
    std::cout << "isConnect -> "     << isConnect << '\n';
    std::cout << "chargeBattery -> " << chargeBattery << '\n';
}
