#include <Arduino.h>

/**
 * @brief Initializes serial communication and configures the built-in LED pin.
 *
 * This function sets up the serial port at 115200 baud, waits for 3 seconds,
 * prints setup messages to the serial monitor, and sets the built-in LED pin
 * as an output for further use.
 */
void setup() {
  Serial.begin(115200);
  delay(5000);
  Serial.println("");
  Serial.println("Setup...");
#if defined(ARDUINO_AVR_UNO)
  Serial.println("Board: Arduino UNO");
#elif defined(ARDUINO_ESP8266_WEMOS_D1MINI)
  Serial.println("Board: Wemos D1 Mini");
#elif defined(ARDUINO_ESP8266_ADAFRUIT_HUZZAH)
  Serial.println("Board: Adafruit Feather HUZZAH");
#elif defined(ARDUINO_LOLIN_D32)
  Serial.println("Board: Lolin D32");
#elif defined(ARDUINO_RASPBERRY_PI_PICO_W)
  Serial.println("Board: Raspberry Pi PicoW");
#else
  Serial.println("Board: Unknown");
#endif

  pinMode(LED_BUILTIN, OUTPUT);
}

/**
 * @brief Main loop function for toggling the built-in LED and printing status.
 *
 * This function alternately turns the built-in LED on and off every second.
 * After each cycle, it prints "Loop..." to the serial monitor.
 * Intended for use in microcontroller environments such as Arduino.
 */
void loop() {
  digitalWrite(LED_BUILTIN, HIGH); 
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
  Serial.println("Loop...");
}
