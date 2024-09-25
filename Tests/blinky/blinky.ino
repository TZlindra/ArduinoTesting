// Pin connected to LED
const int LED_PIN = 5;

// Interval at which to blink (milliseconds)
const long BLINK_INTERVAL = 1000; // 1 second

// Variable to store the last time LED was updated
unsigned long previousMillis = 0;

// Variable to track the current state of the LED
int ledState = LOW;

void setup() {
  // Initialize the digital pin as an output
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // Get the current time
  unsigned long currentMillis = millis();

  // Check if it's time to blink the LED
  if (currentMillis - previousMillis >= BLINK_INTERVAL) {
    // Save the last time the LED was blinked
    previousMillis = currentMillis;

    // If the LED is off, turn it on; if it's on, turn it off
    if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }

    // Update the LED state
    digitalWrite(LED_PIN, ledState);
  }
}
