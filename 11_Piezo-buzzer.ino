// Define the pin for the piezo buzzer
#define BUZZER_PIN 8

void setup() {
  tone(BUZZER_PIN, 440, 500); // Play A4 (440 Hz) for 500 ms
  delay(1000); // Wait for 1 second
  
  tone(BUZZER_PIN, 523, 500); // Play C5 (523 Hz) for 500 ms
  delay(1000); // Wait for 1 second
}

void loop() {
  // No code needed in loop
}
