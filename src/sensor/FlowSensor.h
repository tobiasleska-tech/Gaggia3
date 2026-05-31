#pragma once
class FlowSensor {
public:
    static void begin();
    static float read();
    static float getFiltered();
    static void calibrate();
};
