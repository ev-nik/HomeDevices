#include <iostream>
#include <string>

#include "temperatureDetector.h"

TemperatureDetector::TemperatureDetector()
{
    temperature = 0;
}

void TemperatureDetector::deviced()
{
    Device::deviced();

    std::cout << "temperature = " << temperature << '\n';
}
