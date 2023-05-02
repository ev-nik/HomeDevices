#include <iostream>
#include <string>

#include "device.h"
#include "leakDetector.h"
#include "smokeDetector.h"
#include "temperatureDetector.h"
#include "home.h"

// Опросить датчик
void checkDetector(Device* d)
{
    d->deviced();
    d->infoDetector();
}


int main()
{
    //Нельзя создать объект абстрактного класса
    // (т.к. в нем есть чисто виртуальная функция)
//    Device ris;
//    ris.name = "risik";
//    ris.address = "1st street";
//    ris.isConnect = true;
//    ris.chargeBattery = 15;


//    LeakDetector* leake = new LeakDetector;
//    leake->name = "leake";
//    leake->leak = false;


//    SmokeDetector* smoky = new SmokeDetector;
//    smoky->name = "smoky";
//    smoky->smokeLevel = 32;

//    TemperatureDetector* temp = new TemperatureDetector;
//    temp->name = "temp";

//    std::cout << "-------------------\n";
//    checkDetector(leake);
//    std::cout << "-------------------\n";
//    checkDetector(smoky);
//    std::cout << "-------------------\n";
//    checkDetector(temp);

//    delete leake;
//    delete smoky;
//    delete temp;

    Home* stepnoy11 = new Home();
    stepnoy11->name = "stepnoy11";
    stepnoy11->addDeviceLeake();



    return 0;
}
