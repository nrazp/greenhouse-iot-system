// Code generated by Arduino IoT Cloud, DO NOT EDIT.

#include <ArduinoIoTCloud.h>
#include <Arduino_ConnectionHandler.h>

const char DEVICE_LOGIN_NAME[]  = "9ea01186-8ddb-4c35-9e2b-4ee7526cba64";

const char SSID[]               = SECRET_SSID;    // Network SSID (name)
const char PASS[]               = SECRET_OPTIONAL_PASS;    // Network password (use for WPA, or use as key for WEP)
const char DEVICE_KEY[]  = SECRET_DEVICE_KEY;    // Secret device password


float humidity;
float luminosity;
float moisture;
float temperature;

void initProperties(){

  ArduinoCloud.setBoardId(DEVICE_LOGIN_NAME);
  ArduinoCloud.setSecretDeviceKey(DEVICE_KEY);
  ArduinoCloud.addProperty(humidity, READ, 10 * SECONDS, NULL);
  ArduinoCloud.addProperty(luminosity, READ, 10 * SECONDS, NULL);
  ArduinoCloud.addProperty(moisture, READ, 10 * SECONDS, NULL);
  ArduinoCloud.addProperty(temperature, READ, 10 * SECONDS, NULL);

}

WiFiConnectionHandler ArduinoIoTPreferredConnection(SSID, PASS);
