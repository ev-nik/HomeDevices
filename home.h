#ifndef HOME_H
#define HOME_H

#include <iostream>
#include <string>
#include <vector>

#include "device.h"
#include "leakDetector.h"
#include "smokeDetector.h"
#include "temperatureDetector.h"
#include "home.h"


class Home
{
public:
    Home();
    ~Home();

    std::string name;

    std::vector<Device*> homeDetector;

    void addDeviceLeake();
    void addDeviceSmoke();
    void addDeviceTemperature();

    void deleteLeakeDetector();
    void deleteSmokeDetector();
    void deleteTemperatureDetector();

    void printHomeDetector();
};

#endif // HOME_H
