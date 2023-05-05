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

// Добавляем датчик протечки в дом.
void Home::addDeviceLeake()
{
    LeakDetector* leake = new LeakDetector();
    leake->name = "leake";
    leake->leak = false;

    homeDetector.push_back(leake);
}

// Удаляем датчик протечки из дома.
void Home::deleteLeakeDetector()
{
    for(size_t i = 0; i < homeDetector.size(); i++)
    {
        Device* d = homeDetector[i];
        LeakDetector* l = dynamic_cast<LeakDetector*>(d);

        if(l != nullptr)
        {
            delete l;
            std::vector<Device*>::iterator it = homeDetector.begin() + i;
            homeDetector.erase(it);
            i--;
        }
    }
}

// Добавляем датчик дыма в дом.
void Home::addDeviceSmoke()
{
    SmokeDetector* smoke = new SmokeDetector();
    smoke->name = "smoke";
    smoke->smokeLevel = 0;

    homeDetector.push_back(smoke);
}

// Удаляем датчик дыма из дома.
void Home::deleteSmokeDetector()
{
    for(size_t i = 0; i < homeDetector.size(); i++)
    {
        Device* d = homeDetector[i];
        SmokeDetector* s = dynamic_cast<SmokeDetector*>(d);

        if(s != nullptr)
        {
            delete s;
            std::vector<Device*>::iterator it = homeDetector.begin() + i;
            homeDetector.erase(it);
            i--;
        }
    }
}

// Добавляем датчик температуры в дом.
void Home::addDeviceTemperature()
{
    TemperatureDetector* temperature = new TemperatureDetector();
    temperature->name = "temp";
    temperature->temperature = 0;

    homeDetector.push_back(temperature);
}

// Удаляем датчик температуры из дома.
void Home::deleteTemperatureDetector()
{
    for(size_t i = 0; i < homeDetector.size(); i++)
    {
        Device* d = homeDetector[i];
        TemperatureDetector* t = dynamic_cast<TemperatureDetector*>(d);

        if(t != nullptr)
        {
            delete t;
            std::vector<Device*>::iterator it = homeDetector.begin() + i;
            homeDetector.erase(it);
            i--;
        }
    }
}

void Home::printHomeDetector()
{
    for(size_t i = 0; i < homeDetector.size(); i++)
    {
        Device* d = homeDetector[i];
        d->deviced();
        d->infoDetector();
        std::cout << "\n";
    }
}
