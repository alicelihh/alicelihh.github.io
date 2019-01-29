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
  outputValue = map(sensorValue, 0, 1023, 0, 255); // mao it to the range of the analog out
  analogWrite(analogOutPin, outputValue); // change the analog out value

  // print the results to the Serial Monitor:
  Serial.print("sensor = ");
  Serial.print(sensorValue);
  Serial.print("\t output = ");
  Serial.println(outputValue);

  // wait 2 milliseconds before the next loop for the analog-to-digital
  // converter to settle after the last reading:
  delay(2);
}
