#include <iostream>
#include <string>

#include "smokeDetector.h"

SmokeDetector::SmokeDetector()
{
    smokeLevel = 0;
}

void SmokeDetector::deviced()
{
    Device::deviced();

    std::cout << "smoke level ->" << smokeLevel << '\n';
}

void SmokeDetector::infoDetector()
{
    std::cout << "Smoke level == " << smokeLevel << " %" << '\n';
}
