#include "FlowController.h"
#include "sensor/FlowSensor.h"
#include "control/PumpController.h"
static float target_flow = 0;
void FlowController::begin() { }
void FlowController::loop() {
    float current = FlowSensor::getFiltered();
    // TODO: Regler → PumpController::setPower(x)
}
void FlowController::setTarget(float ml_per_s) { target_flow = ml_per_s; }
float FlowController::getTarget() { return target_flow; }
