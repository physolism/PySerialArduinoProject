
int bitReadFromFile;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  Serial.begin() // input your port
  pinMode(x, OUTPUT); // change x to your pin used
}

// the loop function runs over and over again forever
void loop() {
  if(Serial.available()){
    bitReadFromFile = Serial.read();
    if(bitReadFromFile = '1')
    {
      digitalWrite(x, HIGH);   // turn the LED on (HIGH is the voltage level)
      delay(1000);              // wait for a second
    }
    if(bitReadFromFile = '0')
    {
      digitalWrite(x, LOW);    // turn the LED off by making the voltage LOW
      delay(1000);              // wait for a second
    }
  }
}
