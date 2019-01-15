/*
  HCDE 439 Assignment #1
  Alice Li
  Jan.14th, 2019
*/

// the setup function runs once when you press reset or power the board
void setup() {
  //Initialize LED_BULTIN as an output
  pinMode(LED_BUILTIN, OUTPUT); 
  //Initialize digit pin 8 as an output
  pinMode(8, OUTPUT); 
  //Initialize digit pin 12 as an output
  pinMode(12, OUTPUT); 
}

// the loop function runs over and over again forever
void loop() {
  // turn the LED on (HIGH is the voltage level)
  digitalWrite(LED_BUILTIN, HIGH); 
  // wait for a second  
  delay(1000);  
  // turn the LED off by making the voltage LOW                     
  digitalWrite(LED_BUILTIN, LOW); 

  // turn the LED on (HIGH is the voltage level)
  digitalWrite(8, HIGH);   
  // wait for 0.5 seconds
  delay(2000);    
  // turn the LED off by making the voltage LOW                     
  digitalWrite(8, LOW);                       

  // turn the LED on (HIGH is the voltage level)
  digitalWrite(12, HIGH);  
  // wait for 0.2 seconds 
  delay(3000);      
  // turn the LED off by making the voltage LOW                
  digitalWrite(12, LOW); 
  // wait for 0.2 seconds                         
}
