// DHT11 - Version: Latest
#include <DHT11.h>


/*
  Sketch generated by the Arduino IoT Cloud Thing "Untitled"
  https://create.arduino.cc/cloud/things/4ca42723-0c40-4042-af70-5dc91898fd07

  Arduino IoT Cloud Variables description

  The following variables are automatically generated and updated when changes are made to the Thing

  float humidity;
  float luminosity;
  float moisture;
  float smoke;
  float temperature;
  CloudSchedule sprinkle;
  bool lights;
  bool smoke_alert;
  bool trigger;
  bool water_pump;

  Variables which are marked as READ/WRITE in the Cloud Thing will also have functions
  which are called when their values are changed from the Dashboard.
  These functions are generated with the Thing and added at the end of this sketch.
*/

#include "thingProperties.h"

DHT11 dht11(12);
int ldr_pin = 35; 
int moist_pin = 32;
float l_analog;
float luminosity2;
float moistAnalog;
int light_pin=27;
int water_pin=18;
int mq135_pin=33;

void setup() {
  // Initialize serial and wait for port to open:
  Serial.begin(9600);
  pinMode(ldr_pin, INPUT);
  pinMode(moist_pin, INPUT);
  pinMode(light_pin, OUTPUT);
  pinMode(water_pin, OUTPUT);
  pinMode(mq135_pin, INPUT);
  // This delay gives the chance to wait for a Serial Monitor without blocking if none is found
  delay(1500);

  // Defined in thingProperties.h
  initProperties();

  // Connect to Arduino IoT Cloud
  ArduinoCloud.begin(ArduinoIoTPreferredConnection);

  /*
     The following function allows you to obtain more information
     related to the state of network and IoT Cloud connection and errors
     the higher number the more granular information you’ll get.
     The default is 0 (only errors).
     Maximum is 4
  */
  setDebugMessageLevel(4);
  ArduinoCloud.printDebugInfo();


}

void loop() {

  ArduinoCloud.update();
  // Your code here
  if(sprinkle.isActive()){
    digitalWrite(water_pin, HIGH);
    water_pump=true;
  }
  else
  {
    digitalWrite(water_pin, LOW);
    water_pump=false;
  }
  // Attempt to read the humidity value from the DHT11 sensor.
  if(dht11.readTemperature()<100){
    humidity = dht11.readHumidity();
    temperature = dht11.readTemperature();
  }
  if (humidity != DHT11::ERROR_CHECKSUM && humidity != DHT11::ERROR_TIMEOUT) {
    Serial.print("Humidity: ");
    Serial.print(humidity);
    Serial.println(" %");
  }
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" %");
  l_analog = analogRead(ldr_pin);
  Serial.print("l_analog: ");
  Serial.print(l_analog);
  luminosity = (l_analog / 4096) * 100;
  Serial.print("Luminosity: ");
  Serial.print(luminosity);
  Serial.println(" %");
  int tempMoist = 0; /* variable to temporarily store moisture value */
  /* make an average of 10 values to be more accurate */
  for (int a = 0; a < 10; a++) {
    tempMoist += analogRead(moist_pin);
    delay(100);
  }
  moistAnalog = tempMoist / 10;
  moisture = (moistAnalog / 4096) * 100;
  Serial.print("Moisture: ");
  Serial.print(moisture);
  Serial.println(" %");
  if (moisture<=30){
    trigger=true;
    digitalWrite(water_pin, HIGH);
    delay(2000);
    digitalWrite(water_pin, LOW);
    water_pump=false;
    Serial.println("ZAP ENVIADO");
  }
  else{
    trigger=false;
    digitalWrite(water_pin, LOW);
    Serial.println("ZAP NÃO ENVIADO :(");
  }
  float mq135analog_read= analogRead(mq135_pin);
  smoke = mq135analog_read;
  Serial.println(mq135analog_read);
  if(smoke>370){
    smoke_alert=true;
  }
  else
  {
    smoke_alert=false;
  }
}

/*
  Since WaterPump is READ_WRITE variable, onWaterPumpChange() is
  executed every time a new value is received from IoT Cloud.
*/


/*
  Since Lights is READ_WRITE variable, onLightsChange() is
  executed every time a new value is received from IoT Cloud.
*/
void onLightsChange()  {
  // Add your code here to act upon Lights change
  if (lights){
    digitalWrite(light_pin, HIGH);
  }
  else {
    digitalWrite(light_pin, LOW);
  }
}
/*
  Since Trigger is READ_WRITE variable, onTriggerChange() is
  executed every time a new value is received from IoT Cloud.
*/
void onTriggerChange()  {
  // Add your code here to act upon Trigger change
}


















/*
  Since Sprinkle is READ_WRITE variable, onSprinkleChange() is
  executed every time a new value is received from IoT Cloud.
*/
void onSprinkleChange()  {
  // Add your code here to act upon Sprinkle change
}

/*
  Since WaterPump is READ_WRITE variable, onWaterPumpChange() is
  executed every time a new value is received from IoT Cloud.
*/
void onWaterPumpChange()  {
  // Add your code here to act upon WaterPump change
}


/*
  Since Smoke is READ_WRITE variable, onSmokeChange() is
  executed every time a new value is received from IoT Cloud.
*/
void onSmokeChange()  {
  // Add your code here to act upon Smoke change
}


/*
  Since SmokeAlert is READ_WRITE variable, onSmokeAlertChange() is
  executed every time a new value is received from IoT Cloud.
*/
void onSmokeAlertChange()  {
  // Add your code here to act upon SmokeAlert change
}