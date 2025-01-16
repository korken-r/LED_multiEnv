#include <Arduino.h>

void setup() {
  Serial.begin(115200);
  delay(3000);
  Serial.println("");
  Serial.println("Setup...");
  pinMode(LED_BUILTIN, OUTPUT); 
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH); 
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
  Serial.println("Loop...");
}
