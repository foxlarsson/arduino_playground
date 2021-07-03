const int tempSensor = 0;
const int RLED = 11;
const int GLED = 10;
const int BLED = 9;

 
void setup()
{
  pinMode(RLED, OUTPUT);
  pinMode(GLED, OUTPUT);
  pinMode(BLED, OUTPUT);
  Serial.begin(9600);
}
 
void loop()
{
 
int reading = analogRead(tempSensor);  
// measure the 5v with a meter for an accurate value
//In particular if your Arduino is USB powered
float voltage = reading * 4.68; 
voltage /= 1024.0; 

// now print out the temperature
float temperatureC = (voltage - 0.5) * 100;
Serial.print(temperatureC); 
Serial.println(" degrees C");

if(temperatureC >= 25.0)
{
  digitalWrite(RLED, HIGH);
  digitalWrite(GLED, LOW);
  digitalWrite(BLED, LOW);
}
else if(temperatureC <= 24.0)
{
  digitalWrite(RLED, LOW);
  digitalWrite(GLED, LOW);
  digitalWrite(BLED, HIGH);
}
else
{
  digitalWrite(RLED, LOW);
  digitalWrite(GLED, HIGH);
  digitalWrite(BLED, LOW);
}
 
 delay(1000);
}
