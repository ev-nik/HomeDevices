#include <iostream>
#include <string>

#include "leakDetector.h"

LeakDetector::LeakDetector()
{
    leak = false;
}

void LeakDetector::deviced()
{
    Device::deviced();

    std::cout << "leak -> " << leak << '\n';
}

void LeakDetector::infoDetector()
{
    std::cout << "leak == " << leak << '\n';
}
