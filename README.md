# Gaggia3

Moderne, minimalistische ESP32-S3-Firmware für Gaggia-Style Kaffeemaschinen  
- PWM Pumpenregelung
- Druck- und Flussprofilierung
- Web- und API-Interface (REST, WebSocket)
- Headless (kein Display, BLE, Scale etc.)

# Architektur

- Modular (Control, Sensor, Web, Storage, System)
- Erweiterbar um Profile/Regel-Algorithmen
- ESP32-S3, Arduino-Framework, PlatformIO

Bitte beachte:  
Alle Algorithmen und Regelstrukturen werden aus GaggiMate analytisch übernommen und komplett neu integriert — kein Fork/kein direktes Clonen.

## ToDo

- Implementierung der Regelung und State Machines
- WebUI entwickeln und anbinden
- Profile/Settings persistieren
