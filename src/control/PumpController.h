#pragma once
#include <stdint.h>

class PumpController {
public:
    static void begin();
    static void loop();
    static void setPower(float percent); // 0-100%
    static float getPower();
};
