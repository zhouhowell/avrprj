/*
  Pi Pico W WiFi Station Demo
  wifi.ino
  Use WiFi library to connect Pico W to WiFi in Station mode
*/

// Include the WiFi Library
#include <WiFi.h>

// Replace with your network credentials
const char* ssid = "CMCC-kVYt-5G";
const char* password = "15982533325Abc";

void setup() {

  // Start the Serial Monitor
  Serial.begin(115200);

  // Operate in WiFi Station mode
  WiFi.mode(WIFI_STA);

  // Start WiFi with supplied parameters
  WiFi.begin(ssid, password);

  // Print periods on monitor while establishing connection
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
    delay(500);
  }

  // Connection established
  Serial.println("");
  Serial.print("Pico W is connected to WiFi network ");
  Serial.println(WiFi.SSID());

  // Print IP Address
  Serial.print("Assigned IP Address: ");
  Serial.println(WiFi.localIP());

}

void loop() {

  delay(2000);

  // Print IP Address
  Serial.print("Assigned IP Address: ");
  Serial.println(WiFi.localIP());

}
