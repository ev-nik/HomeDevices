#ifndef LEAKDETECTOR_H
#define LEAKDETECTOR_H

#include <iostream>
#include <string>

#include "device.h"

// Датчик протечки
class LeakDetector : public Device
{
public:
    LeakDetector();

    bool leak;

    void deviced() override;
    void infoDetector();
};
#endif // LEAKDETECTOR_H
