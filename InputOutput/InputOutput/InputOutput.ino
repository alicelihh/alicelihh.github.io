/*
Alice Li
Assignment #3
HCDE 439
Jan 28th, 2019
*/

const int analogInPin = A0;  // Analog input pin that the sensor is attached to
const int analogOutPin = 11; // Analog output pin that the LED is attached to

int sensorValue = 0;        // value read from the sensor
int outputValue = 0;        // value output

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
}

void loop() {
  sensorValue = analogRead(analogInPin); // read in the analog value
  outputValue = map(sensorValue, 0, 1023, 0, 255); // map it to the range of the analog out
  //analogWrite(analogOutPin, outputValue); // change the analog out value

  // print the results to the Serial Monitor:
  Serial.print("sensor = ");
  Serial.print(sensorValue);
  Serial.print("\t output = ");
  Serial.println(outputValue);

  if (sensorValue <= 20) {
    // the LED light from pin 11 turn on
    digitalWrite(11, HIGH);
    // the LED light will stay on for 0.1 second
    delay(100);
    // the LED light will turn off
    digitalWrite(11, LOW);
    // the LED light will be switched off for 0.1 second
    delay(100);
  } else {
    analogWrite(analogOutPin, outputValue); // change the analog out value
  }
}
