int SensorPin = 11; // Changed from 2
int OutputPin = 13;

void setup() {
  pinMode(OutputPin, OUTPUT);
  pinMode(SensorPin, INPUT); // SensorPin detects IR Sensor
  Serial.begin(9600); // Initialized for pretty much every Arduino sensor
}

void loop() {
  int SensorValue = digitalRead(SensorPin); // Reads HIGH-LOW
  
  Serial.print("SensorPin Value: "); // Serial allows the sensor to enact a function, in this case print
  Serial.println(SensorValue);
  delay(1000);
   if (SensorValue==LOW){ // LOW MEANS Object Detected
    digitalWrite(OutputPin, HIGH);
  }
  else
  {
    digitalWrite(OutputPin, LOW); 
  }
}