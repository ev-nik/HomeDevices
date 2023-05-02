#include <iostream>
#include <string>
#include <vector>

#include "device.h"
#include "leakDetector.h"
#include "smokeDetector.h"
#include "temperatureDetector.h"
#include "home.h"

Home::Home()
{
}

Home::~Home()
{
    for(size_t i = 0; i < homeDetector.size(); i++)
    {
        delete homeDetector[i];
    }
}

// Добавляем датчик в дом
void Home::addDeviceLeake()
{
    LeakDetector* leake = new LeakDetector();
    leake->name = "leake";
    leake->leak = false;

    homeDetector.push_back(leake);
}

void Home::addDeviceSmoke()
{
    SmokeDetector* smoke = new SmokeDetector();
    smoke->name = "smoke";
    smoke->smokeLevel = 0;

    homeDetector.push_back(smoke);
}

void Home::addDeviceTemperature()
{
    TemperatureDetector* temperature = new TemperatureDetector();
    temperature->name = "temp";
    temperature->temperature = 0;

    homeDetector.push_back(temperature);
}




