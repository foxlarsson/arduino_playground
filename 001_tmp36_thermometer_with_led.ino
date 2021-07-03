// the tutorial that helped me figure out the tmp36 stuff can be found here http://arduinolearning.com/amp/code/arduino-tmp36-example.php - and that's the code I'm using for converting the sensor readings


const int sensorPin = 0;
const int LED = 9;

 
void setup()
{
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
  digitalWrite(LED, LOW);

}
 
void loop()
{
 
 int reading = analogRead(sensorPin);  
 // measure the 5v with a meter for an accurate value
 //In particular if your Arduino is USB powered
 float voltage = reading * 4.68; 
 voltage /= 1024.0; 
 
 // now print out the temperature
 float temperatureC = (voltage - 0.5) * 100;
 Serial.print(temperatureC); 
 Serial.println(" degrees C");

 if(temperatureC >= 20.0)
 {
    digitalWrite(LED, HIGH);
 }
 else
 {
    digitalWrite(LED, LOW);
 }
 
 delay(1000);
}
