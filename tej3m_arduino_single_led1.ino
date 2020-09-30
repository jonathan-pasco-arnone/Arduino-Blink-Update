/*
  Created by: Jonathan P-A
  Created on: September 30
  
  Turns an LED on for one second, then off for one second, repeated 
*/

void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(1000); // Wait for 1000 milliseconds
  digitalWrite(13, LOW);
  delay(1000); // Wait for 1000 milliseconds
}