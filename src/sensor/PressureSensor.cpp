#include "PressureSensor.h"
#include "Filtering.h"
#include <Arduino.h>
static float calib_offset = 0;
void PressureSensor::begin() { pinMode(36, INPUT); }
float PressureSensor::read() { return analogRead(36) * 0.00488 - calib_offset; }
float PressureSensor::getFiltered() { return Filtering::lowpass(read()); }
void PressureSensor::calibrate() { calib_offset = analogRead(36) * 0.00488; }
