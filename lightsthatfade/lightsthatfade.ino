
int buttonState = 0;

void setup() {
  pinMode(11, OUTPUT);

}

void loop() {
  buttonState = digitalRead(2);
  if (buttonState == HIGH) {
    digitalWrite(11, HIGH);
    delay(100);
    digitalWrite(11, LOW);
    delay(100);
  } else {
    for (int i = 0; i < 256; i++) {
      analogWrite(11, i);
      delay(10);
    }
  }
}
