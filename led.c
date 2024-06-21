/*
    Project name : ESP8266 External LED 
    Modified Date: 20-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp8266-External LED 
*/

// Define External LED  pin
const int External LED Pin = D1; // GPIO pin D1 on NodeMCU

void setup() {
  pinMode(External LED Pin, OUTPUT); // Set the External LED  pin as an output
}

void loop() 
{
  digitalWrite(External LED Pin, HIGH); // Turn the External LED  on
  delay(1000); // Wait for 1 second (1000 milliseconds)
 
}
