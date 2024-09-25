#define RESOLUTION 2048

int interruptPin = 3; // example interrupt pin


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
    pinMode(interruptPin, INPUT);
    attachInterrupt(digitalPinToInterrupt(interruptPin), interruptFunction1, FALLING);
    pinMode(2, OUTPUT);
    Timer1Init();
    Serial.begin(9600); // Start serial communication at 9600 baud rate
}

void loop() {
    //digitalWrite(2, state);
}

ISR(TIMER1_COMPA_vect) {
    // Timer1 compare match A interrupt service routine    

    /*
    timer_counter++;
    if (timer_counter >= 1000) {
        timer_counter = 0;
        rotations = 0;
        Serial.println(float(rotations)/(4*RESOLUTION)); 
    }
    */
}

void interruptFunction1() {
  //delay(30);
  rotations++;
  Serial.println(int(rotations));
  //Serial.println(float(rotations) / RESOLUTION );


}
