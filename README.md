# Greenhouse-IoT-System

## Project Overview:
This IoT project involves the use of an ESP32 microcontroller connected to Arduino Cloud to monitor and control various aspects of a greenhouse environment. The ESP32 is equipped with sensors to measure temperature, humidity, luminosity, soil moisture and nocive gases. Additionally, it's capable of controlling a water pump to hydrate the plants as needed and an LED if more light is necessary . The Arduino IoT Cloud serves as the central platform for data visualization and remote control of the water pump and LED.

##  Motivation for the Project
In recent years, there has been a growing emphasis on sustainable agriculture and food production methods. Greenhouses play a vital role in this movement by providing controlled environments for plant growth, allowing for year-round cultivation and optimized resource utilization. However, traditional greenhouse management methods often rely on manual monitoring and intervention, which can be labor-intensive, inefficient, and prone to human error.

The motivation behind the Greenhouse IoT System Project stems from the need to address these challenges and leverage technology to create more efficient and sustainable agricultural practices. By integrating Internet of Things (IoT) technologies, such as the ESP32 microcontroller and Arduino IoT Cloud platform, this project aims to revolutionize greenhouse management.

## Objectives of the Project
The primary objectives of this IoT project center around optimizing greenhouse conditions for enhanced plant growth and management efficiency. By leveraging the ESP32 microcontroller alongside sensors for temperature, humidity, luminosity, soil moisture and nocive gases, the project aims to provide real-time monitoring of crucial environmental parameters within the greenhouse. This data not only facilitates proactive decision-making but also enables precise adjustments to ensure an optimal growth environment for plants. Moreover, with the ESP32's capability to control a water pump and an LED, the project seeks to automate irrigation and light processes, ensuring plants receive adequate hydration and light based on real-time soil moisture levels and luminosity levels of the greenhouse. The integration of Arduino IoT Cloud as the central platform adds another layer of functionality, enabling remote access for data visualization and seamless control of the water pump and LED, thereby enhancing accessibility and convenience for greenhouse management. The use of Triggers on the Arduino Cloud platform also allows the system to automatically irrigate itself and notify the user via cell phone if any unforeseen events occur in relation to soil moisture levels, as well as automatically irrigating the soil from time to time, with the time interval also being able to be configured on the application's dashboard. Ultimately, the project aims to maximize yield and resource efficiency while minimizing manual intervention through IoT solutions.

## Architecture
The project can have its architecture divided into the part connected to the ESP32 by the sensors and actuators and the part connected to the network. Considering the part physically connected to the ESP32, we have the following connections:
#### DHT11
<img src="https://github.com/nrazp/greenhouse-iot-system/assets/163911384/14011df1-5a60-4e9c-8f87-125a9cbfa97c " width=25% height=25%>

| DHT11 | ESP32 |  
| --- | --- |
| VCC | 3V3 |
| DATA | 12 |
| GND | GND |

#### LDR
<img src="https://github.com/nrazp/greenhouse-iot-system/blob/main/Images/LDR.jpeg ">

| LDR | ESP32 |
| --- | --- |
| VCC | 3V3/35 |
| GND | GND |

#### HR43
<img src="https://github.com/nrazp/greenhouse-iot-system/blob/main/Images/WaterSensor.jpeg">

| HR43 | ESP32 |
| --- | --- |
| VCC | 3V3 |
| S | 32 |
| GND | GND |

#### Relay
<img src="https://github.com/nrazp/greenhouse-iot-system/blob/main/Images/relay.webp" width=25% height=25%>

| Relay | ESP32 |
| --- | --- |
| VCC | 3V3 |
| S | 33 |
| GND | GND |

#### MQ-135
<img src="https://github.com/nrazp/greenhouse-iot-system/blob/main/Images/mq-135_sensor.webp">

| MQ-135 | ESP32 |
| --- | --- |
| VCC | 3V3 |
| Digital Out | 28 |
| GND | GND |

#### WATER PUMP
<img src="https://github.com/nrazp/greenhouse-iot-system/blob/main/Images/water%20pump.webp">

| Pump | Relay |
| --- | --- |
| VCC | NO Terminal |
| GND | GND |

#### LED
<img src="https://github.com/nrazp/greenhouse-iot-system/blob/main/Images/1941435412328b077d.webp" width=25% height=25%>

| LED | ESP32 |
| --- | --- |
| VCC | 27 |
| GND | GND |


In this case, the LDR sensors and the HR43 water sensor use analog signal communication to send data to the ESP32, while the DHT11 sensor uses its own communication to send the temperature and humidity data to the ESP32 via its DATA pin (if you want to learn more about the communication between the DHT11 and the ESP32, the following link explains its communication in detail: https: //www.makerguides.com/esp32-dht11-dht22-humidity-temperature-sensor/). The project also contains an LED designed to adequate the luminosity of the greenhouse and a water pump designed to turn on and off in order to supply the right amount of water to the plant located inside the IoT Greenhouse, withe energy being given to the water pump by a relay connected with the ESP32. The communication of the Relay and the LED with the ESP32 is done digitally. <br>

## Communication Protocols
When considering the network connection, the Arduino Cloud uses the MQTT protocol to communicate with the ESP32, which is connected to Wi-Fi as configured on the Arduino IoT Cloud platform. Finally, the Dashboard built on the Arduino IoT Cloud Platform can only be viewed via a request using the HTTP protocol, which is made by a computer or cell phone which connects to the Dashboard's web address via a web browser. The communication protocols with the sensors varies, from Analog in the LDR and HR43, to serial communication (DHT11) and Digital Communication in the caso of the MQ-135 sensor. The final architecture looks like the following image : <br>

![alt text](https://github.com/nrazp/greenhouse-iot-system/blob/main/Images/Arquitetura%20v2.2.jpg)

## Dashboard
One of the objectives of this project is to not only control variables in a greenhouse but also visualize and monitor the data collected. To achieve this, a dashboard is utilized to control and monitor the data collected by our project. In the Arduino IoT Cloud, we have the option to create a dashboard that allows us to visualize our data on a computer or cellphone. The dashboard created for this project is as follows:

![alt text](https://github.com/nrazp/greenhouse-iot-system/blob/main/Images/Dashboard-greenhouse.png)

## Time to Make the project yourself
For informations on how to install and configure the app's used in this project, [click here](https://github.com/nrazp/greenhouse-iot-system/tree/main/Installation_and_Configuration_Manual)

For more information on deploy and assembly, [click here](https://github.com/nrazp/greenhouse-iot-system/tree/main/greenhouse-variables)

## Mentorship
This project was developed with the mentorship of [Dhiego Fernandes Carvalho](https://github.com/DhiegoFC) professor at State University of São Paulo

## References
https://github.com/DhiegoFC/IoT_for_Embedded_Devices
