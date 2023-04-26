#ifndef SMOKE_DETECTOR_H
#define SMOKE_DETECTOR_H

#include <iostream>
#include <string>

#include "device.h"

// Датчик дыма
class SmokeDetector : public Device
{
public:
    SmokeDetector();

    int smokeLevel;

    void deviced() override;
    void infoDetector();
};
#endif // SMOKE_DETECTOR_H
