#define sensorPin A0  //Soil moisture sensor
#define relayPin 7  //Relay module connected to the water pump
void setup() {
  pinMode(relayPin, OUTPUT);
}
void loop()  {
  int moisture =
  analogRead(sensorPin);  // Read soil moisture level
  if (moisture < 300) {  // Adjust threshold based on soil type
  digitalWrite(relayPin, HIGH);  // Turns ON the relay (activates the pump)
  } else 
    digitalWrite(relayPin, LOW);  // Turns OFF the relay (stops pump)
    delay(3000);  
  }
