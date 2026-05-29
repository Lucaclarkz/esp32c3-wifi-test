#include <WiFi.h>

const char *ssid = "ESP32-C3-Cloud-AP";
const char *password = "12345678";

void setup() {
  Serial.begin(115200);
  delay(2000);
  Serial.println("\n--- ESP32-C3 Cloud Compiled AP Test ---");

  WiFi.mode(WIFI_AP);
  if (WiFi.softAP(ssid, password)) {
    Serial.println("AP Successfully Started!");
    Serial.print("IP Address: ");
    Serial.println(WiFi.softAPIP());
  } else {
    Serial.println("AP Failed to Start!");
  }
}

void loop() {
  Serial.print("Connected devices: ");
  Serial.println(WiFi.softAPgetStationNum());
  delay(1000);
}
