#ifndef TEMPERATUREDETECTOR_H
#define TEMPERATUREDETECTOR_H

#include <iostream>
#include <string>

#include "device.h"

class TemperatureDetector : public Device
{
public:

    TemperatureDetector();

    int temperature;

    void deviced() override;
};
#endif // TEMPERATUREDETECTOR_H
