#pragma once

class PumpController {
public:
    static void begin();
    static void loop();
    // weitere Methoden für PWM, DutyCycle, Regelung etc.
    static void setPower(float percent);
};
