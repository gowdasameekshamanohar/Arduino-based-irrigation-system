## Arduino-based-irrigation-system
#Overview:
This project is a basic smart irrigation system using Arduino that automates watering based on soil moisture levels.
It helps in efficient water usage and reduces the need for manual intervention

#Components Used:
-Arduino UNO
-Soil Moisture Sensor
-Relay Module
-Water Pump
-Jumper Wires

#Working Principle:
-The soil moisture sensor continuosly reads the moisture level.
-If the soil is dry (value < 300)
    The relay is activated
    The water pump turns ON
-If the soil is wet (value >=300)
    The relay is disactivated 
    The pump turns OFF

#Code Logic:
-sensorPin (A0) ~ reads analog moisture values
-relayPin (7) ~ controls the pump via relay
-analogRead() ~ fetches moisture data
delay (3000) ~ cheks every 3 seconds

#Sample Output:
-Dry Soil ~ Pump ON
-Wet Soil ~ Pump OFF

#Features:
-Automated irrigation
-Simple logic-based control
-Low cost implementation
-Beginner friendly

##Author: 
Gowda Sameeksha Manohar
