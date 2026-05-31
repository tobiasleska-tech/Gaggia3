#pragma once
class PressureController {
public:
    static void begin();
    static void loop();
    static void setTarget(float bar);
};
