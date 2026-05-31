#include "FlowSensor.h"
#include "Filtering.h"
#include <Arduino.h>
#define FLOW_PIN 39
static volatile uint32_t pulse_count = 0;
void IRAM_ATTR flowISR() { pulse_count++; }
void FlowSensor::begin() {
    pinMode(FLOW_PIN, INPUT_PULLUP);
    attachInterrupt(FLOW_PIN, flowISR, RISING);
}
float FlowSensor::read() {
    noInterrupts();
    uint32_t c = pulse_count;
    pulse_count = 0;
    interrupts();
    // Annahme: x Impulse = y ml
    return c * 0.01f; // TODO: Korrekturfaktor
}
float FlowSensor::getFiltered() { return Filtering::lowpass(read()); }
void FlowSensor::calibrate() {/* Faktor anpassen */}
