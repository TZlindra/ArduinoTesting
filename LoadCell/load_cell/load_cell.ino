#include "HX711.h"

// HX711 circuit wiring
const int LOADCELL1_DOUT_PIN = 2;
const int LOADCELL1_SCK_PIN = 3;
const int LOADCELL2_DOUT_PIN = 4; // Use different pins for the second HX711
const int LOADCELL2_SCK_PIN = 5; // Use different pins for the second HX711
const int TARE_BUTTON = A0;

HX711 scale1;
HX711 scale2;

void reset_tare()
{
  if (scale1.is_ready()) {
    scale1.set_scale(); 
    scale1.tare();  
    Serial.println("First HX711 Tare done..."); 
  }
  
  if (scale2.is_ready()) {
    scale2.set_scale(); 
    scale2.tare();  
    Serial.println("Second HX711 Tare done..."); 
  }
}

void setup() {
  Serial.begin(115200);
  scale1.begin(LOADCELL1_DOUT_PIN, LOADCELL1_SCK_PIN, 64);
  scale2.begin(LOADCELL2_DOUT_PIN, LOADCELL2_SCK_PIN, 64);
  pinMode(TARE_BUTTON, INPUT);
  reset_tare();
}

void loop() {
  
  if (digitalRead(TARE_BUTTON) == 0)
  {
    reset_tare();
    while (digitalRead(TARE_BUTTON) == 0);
  }
  
  
  if (scale1.is_ready() && scale2.is_ready()) { 
    delay(10); 
    long reading1 = scale1.get_units(10);
    long reading2 = scale2.get_units(10);
    //Serial.print("First HX711 Result: ");
    Serial.print(reading1);
    //Serial.print(", Second HX711 Result: ");
    Serial.print(", ");

    Serial.println(reading2);
  } 
  else {
    Serial.println("One or more HX711s not found.");
  }
  delay(100);
}
