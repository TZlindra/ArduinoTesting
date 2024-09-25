//#include <PostNeoSWSerial.h>

//PostNeoSWSerial BTSerial(0, 1);   // RX | TX

void setup() {
  /*
  pinMode(9, OUTPUT);   
  digitalWrite(9, HIGH); 
  
  Serial.begin(38400);
  Serial.println("Enter AT Commands:");
  BTSerial.begin(38400);  // HC-05 default speed in AT command mode
  */
}

void loop() {
/*
//The code below allows for commands and messages to be sent from COMPUTER (serial monitor) -> HC-05
  if (Serial.available())           // Keep reading from Arduino Serial Monitor 
    BTSerial.write(Serial.read());  // and send to HC-05

//The code below allows for commands and messages to be sent from HC-05 -> COMPUTER (serial monitor)    
  if (BTSerial.available())         // Keep reading from HC-05 and send to Arduino 
    Serial.write(BTSerial.read());  // Serial Monitor
    */
}
