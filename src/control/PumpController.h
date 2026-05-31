#pragma once
class PumpController {
public:
    static void begin();
    static void loop();
    static void setPower(float percent);
};
