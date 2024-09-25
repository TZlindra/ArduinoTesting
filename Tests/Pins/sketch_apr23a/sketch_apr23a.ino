
/* Sensorless brushless DC motor control with Arduino UNO and IR2101 (Arduino DIY ESC).
 * BLDC motor speed is controlled with a potentiometer connected to A0.
 * This is a free software with NO WARRANTY.
 * https://simple-circuit.com/
 */
 
void setup()
{
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);

  digitalWrite(11, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  
  digitalWrite(7, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
}
 


void loop()
{
}