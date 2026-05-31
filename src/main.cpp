#include <Arduino.h>
#include "control/BrewController.h"
#include "system/Wifi.h"
#include "web/WebServer.h"
#include "storage/Settings.h"

void setup() {
    Serial.begin(115200);
    Wifi::begin();
    Settings::load();
    WebServer::begin();
    BrewController::begin();
}

void loop() {
    BrewController::loop();
    WebServer::loop();
    delay(5);
}
