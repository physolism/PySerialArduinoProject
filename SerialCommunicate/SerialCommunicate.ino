

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  Serial.begin(9600); // input your port
  pinMode(13, OUTPUT); // change x to your pin used
}

// the loop function runs over and over again forever
void loop() {
  if(Serial.available()){
    char bitReadFromFile = Serial.read();
    if(bitReadFromFile == '1')
    {
      Serial.println(bitReadFromFile);
      digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
    }
    if(bitReadFromFile == '0')
    {
      Serial.println(bitReadFromFile);
      digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
    }
  }
}
