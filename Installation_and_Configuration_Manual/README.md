# Installation and Configuration

## Creating an account at Arduino Cloud
To create an Arduino Cloud account, follow these steps:
* Go to the website https://cloud.arduino.cc/ and click on the green "GET STARTED FOR FREE" button. <br>
![alt text](https://github.com/nrazp/greenhouse-iot-system/blob/main/Images/Arduino_Cloud_Account.png)
* In the next window, click on the green text "Create One", which is just below the green "SIGN IN" button. You then need to tell the site your date of birth and an email address, username and password of your choice to create an account on the site. After accepting the site's Terms of Use and Privacy Policy, your account is now created and ready to connect to ESP32.

## Creating an Device on Arduino CLoud
* To add the ESP32 device to the Arduino Cloud, first click on the green "Create New" button and select the "Thing" item <br>
![alt text](https://github.com/nrazp/greenhouse-iot-system/blob/main/Images/Arduino_Cloud_New_Thing.png) 
* In the new screen that appears, first click on the green button with the text Select Device written underneath. <br>
![alt text](https://github.com/nrazp/greenhouse-iot-system/blob/main/Images/Arduino_Cloud_New_Device.png) 
* In the new window that appears, select the options "SET UP NEW DEVICE" -> "Third Party Device", then select the Item ESP32 and the Model "ESP32 Dev Module", as in the Image : <br>
![alt text](https://github.com/nrazp/greenhouse-iot-system/blob/main/Images/Arduino_Cloud_Model_Selection.png)
* Then click on the Continue button, give the Device a name and then click on the "NEXT" button. The device's Device ID and Secret Key are then displayed, which must be saved in order to configure the connection to the device. After saving the data, click on the item "I saved my Device ID and Secret Key" and then on "CONTINUE" and then on the "DONE" button, thus creating the device in the Arduino Cloud.

## Connecting a Network to the Device

* To configure the network to which the ESP32 will connect, you must first access the Network settings via the green button in the Network section of the "Thing" window. <br>
![alt text](https://github.com/nrazp/greenhouse-iot-system/blob/main/Images/Arduino_Cloud_Network_Setup.png)
* In the new window that opens, you must configure the name and password of the wi-fi connected to the ESP32 and also enter the device's Secret Key, which you created during the device creation stage. Then press the green "SAVE" button and the device's network is now properly configured.

## Creating Cloud Variables

* To create a variable in the code that is monitored or changed by devices connected to the Arduino Cloud, you must create a "Cloud variable". Bear in mind that a free Arduino Cloud account only allows 5 "Cloud Variables" to be created. 

* First, click on the green "ADD" button next to the text "Cloud Variables" <br>
![alt text](https://github.com/nrazp/greenhouse-iot-system/blob/main/Images/Arduino_Cloud_New_Variable.png)
* A new window will then appear, in which you must enter the name of the variable, select its type, whether it is a Read Only or Read and Write variable, and select whether its value should change periodically or when the value read is different from the previous value, so you must enter a time for the value to change or a Threshold for changing the value of the variable, respectively. Then just click on the green "ADD VARIABLE" button and the variable is created. For this project, the following variables were created with the following settings : <br>

| Variable Name | Variable Type | Variable Permission | 
| --- | --- | --- |
| humidity | float | Read Only |
| luminosity | float | Read Only |
| moisture | float | Read Only |
| temperature | float | Read Only |
| water_pump | boolean | Read & Write |

## Adding the code to Arduino Cloud
* To enter the code that will be used in the ESP32, go to the "Sketch" tab in the "Thing" window and enter the code available here in the area proposed for entering the code, as seen in the image :
![alt text](https://github.com/nrazp/greenhouse-iot-system/blob/main/Images/Arduino_Cloud_Sketch.png)


Conectar o Esp32 ao cloud <br>
-> Criar Key do ESP32 e conectar ele a rede <br>
-> Arduino Agent <br>
Criar as variaveis no cloud <br>
Upar o codigo ao Cloud <br>
Verificar o uso das Bibliotecas : Lista das bibliotecas <br>
Criação de dashboard dentro do Arduino Cloud <br>
-> Explicar possivel erro de boot e do ESP32 n conseguir usar metade dos pinos com wifi ligado. <br>
