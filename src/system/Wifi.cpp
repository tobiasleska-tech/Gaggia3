#include "Wifi.h"
#include <WiFi.h>
#include <ArduinoJson.h>
#include <FS.h>

void Wifi::begin() {
    // Dummy: Produktionscode lädt Konfig, initiiert WiFi
    WiFi.mode(WIFI_STA);
    WiFi.begin("dein_ssid", "dein_passwort");
    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
    }
}
