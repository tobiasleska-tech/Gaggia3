#include <Arduino.h>
#include "control/BrewController.h"
#include "web/WebServer.h"
#include "system/Wifi.h"
#include "storage/Settings.h"

void setup() {
    Serial.begin(115200);
    // Netzwerk starten
    Wifi::begin();
    // Einstellungen laden
    Settings::load();
    // Webserver starten
    WebServer::begin();
    // Regelung starten
    BrewController::begin();
}

void loop() {
    BrewController::loop();
    WebServer::loop();
    delay(5);
}
