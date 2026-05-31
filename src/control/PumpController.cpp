#include "PumpController.h"
#include <Arduino.h>

void PumpController::begin() {
    // PWM-Init, Hardware-Setup
}

void PumpController::loop() {
    // Regelmäßige Steuerung, ggf. PID, Profile abarbeiten
}

void PumpController::setPower(float percent) {
    // Setzt Dutycycle 0-100% für die Pumpe
}
