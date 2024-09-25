#include <Servo.h>

Servo ESC;
int speed;
/*
void setup() {
  ESC.attach(9, 1000, 2000);
  digitalWrite(12, HIGH);

}



void loop() {
  digitalWrite(12, LOW);
  speed = analogRead(A0);
  speed = map(speed, 0, 1023, 0, 180);
  ESC.write(speed);

}
*/

/*
volatile int rotations = 0;
volatile int timer_counter = 0;

void Timer1Init()
{
  // Configure Timer1 to trigger interrupt every 1ms (1kHz)
    cli(); // Disable interrupts
    TCCR1A = 0; // Set entire TCCR1A register to 0
    TCCR1B = 0; // Same for TCCR1B
    TCNT1  = 0; // Initialize counter value to 0
    OCR1A = 15999; // Set compare match register for 1ms intervals
    TCCR1B |= (1 << WGM12); // Turn on CTC mode
    TCCR1B |= (1 << CS10); // Set CS10 bit for 1 prescaler
    TIMSK1 |= (1 << OCIE1A); // Enable timer compare interrupt
    sei(); // Enable interrupts
}

void setup() {
    Timer1Init();
    pinMode(9, OUTPUT);
}

void loop() {
    
}

ISR(TIMER1_COMPA_vect) {
    // Timer1 compare match A interrupt service routine
    timer_counter++;
    if (timer_counter >=15)
        digitalWrite(9, LOW);
    if (timer_counter >= 20) {
        timer_counter = 0;
        digitalWrite(9, HIGH);
        
    }
}
*/
void setup() {
// Attach the ESC on pin 9
ESC.attach(9);
}
void loop() {
ESC.write(100); // Send the signal to the ESC
}



