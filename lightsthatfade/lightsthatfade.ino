// initiate the state of button with integer 0
int buttonState = 0;

void setup() {
  //set pin 11 to be an output
  pinMode(11, OUTPUT);

}

void loop() {
  // read the digital state of pin two, whether the button is on
  buttonState = digitalRead(2);
  // if the button is on (pushed)
  if (buttonState == HIGH) {
    // the LED light from pin 11 turn on
    digitalWrite(11, HIGH);
    // the LED light will stay on for 0.1 second
    delay(100);
    // the LED light will turn off
    digitalWrite(11, LOW);
    // the LED light will be switched off for 0.1 second
    delay(100);
  } else {
    // loop through the code, each time decreasing the brightness of the light
    for (int i = 0; i < 256; i++) {
      analogWrite(11, i);
      // wait for 10 seconds
      delay(10);
    }
  }
}
