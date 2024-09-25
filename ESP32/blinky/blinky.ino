// Blinky program for ESP32

// Pin connected to LED
#define LED_PIN 2

// Setup function runs once when you press reset or power the board
void setup() {
  // Initialize LED pin as an output
  pinMode(LED_PIN, OUTPUT);
}

// Loop function runs over and over again forever
void loop() {
  // Turn the LED on
  digitalWrite(LED_PIN, HIGH);
  
  // Wait for 1 second
  delay(1000);
  
  // Turn the LED off
  digitalWrite(LED_PIN, LOW);
  
  // Wait for 1 second
  delay(1000);
}
