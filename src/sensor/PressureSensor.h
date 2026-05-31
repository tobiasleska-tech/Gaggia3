#pragma once
class PressureSensor {
public:
    static void begin();
    static float read();
    static float getFiltered();
    static void calibrate();
};
