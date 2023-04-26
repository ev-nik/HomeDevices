#ifndef DEVICE_H
#define DEVICE_H

#include <iostream>
#include <string>

class Device
{
public:
    Device();

    std::string name;
    std::string address;
    bool isConnect;
    int  chargeBattery;

    virtual void deviced();
    virtual void infoDetector() = 0;
};
#endif // DEVICE_H
