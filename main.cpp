#include <iostream>
#include <string>

#include "device.h"
#include "leakDetector.h"
#include "smokeDetector.h"
#include "temperatureDetector.h"

// Опросить датчик
void checkDetector(Device& d)
{
    d.deviced();
}

int main()
{
    Device ris;
    ris.name = "risik";
    ris.address = "1st street";
    ris.isConnect = true;
    ris.chargeBattery = 15;


    LeakDetector leake;
    leake.name = "leake";
    leake.leak = false;


    SmokeDetector smoky;
    smoky.name = "smoky";
    smoky.smokeLevel = 32;

    TemperatureDetector temp;
    temp.name = "temp";

    checkDetector(ris);
    std::cout << "-------------------\n";
    checkDetector(leake);
    std::cout << "-------------------\n";
    checkDetector(smoky);
    std::cout << "-------------------\n";
    checkDetector(temp);

    return 0;
}
