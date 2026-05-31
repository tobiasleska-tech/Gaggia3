#include "PumpController.h"
#include <Arduino.h>

static float current_power = 0;

void PumpController::begin() {
    // PWM-Initialisierung für ESP32-S3, Pin z.B. 18
    ledcAttachPin(18, 0); // Pin, Channel
    ledcSetup(0, 2000, 10); // Ch, Freq, Resolution
    setPower(0);
}
void PumpController::loop() {
    // Evtl. schnelle Tasks, Feedback oder failsafe
}
void PumpController::setPower(float percent) {
    if(percent < 0) percent = 0;
    if(percent > 100) percent = 100;
    current_power = percent;
    int duty = (int)(percent * 10.23); // 0-1023
    ledcWrite(0, duty);
}
float PumpController::getPower() {
    return current_power;
}
