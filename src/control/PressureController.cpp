#include "PressureController.h"
#include "sensor/PressureSensor.h"
#include "control/PumpController.h"
// PID/Regler hier einbinden
static float target_pressure = 0;
void PressureController::begin() { }
void PressureController::loop() {
    float current = PressureSensor::getFiltered();
    // TODO: Regler → PumpController::setPower(x)
}
void PressureController::setTarget(float bar) { target_pressure = bar; }
float PressureController::getTarget() { return target_pressure; }
