# Greenhouse-IoT-System

## Project Overview:
This IoT project involves the use of an ESP32 microcontroller connected to Arduino Cloud to monitor and control various aspects of a greenhouse environment. The ESP32 is equipped with sensors to measure temperature, humidity, and soil moisture. Additionally, it's capable of controlling a water pump to hydrate the plants as needed. The Arduino IoT Cloud serves as the central platform for data visualization and remote control of the water pump.

##  Motivation for the Project
In recent years, there has been a growing emphasis on sustainable agriculture and food production methods. Greenhouses play a vital role in this movement by providing controlled environments for plant growth, allowing for year-round cultivation and optimized resource utilization. However, traditional greenhouse management methods often rely on manual monitoring and intervention, which can be labor-intensive, inefficient, and prone to human error.

The motivation behind the Greenhouse Monitoring and Automation Project stems from the need to address these challenges and leverage technology to create more efficient and sustainable agricultural practices. By integrating Internet of Things (IoT) technologies, such as the ESP32 microcontroller and Arduino IoT Cloud platform, this project aims to revolutionize greenhouse management.

## Objectives of the Project
The primary objectives of this IoT project center around optimizing greenhouse conditions for enhanced plant growth and management efficiency. By leveraging the ESP32 microcontroller alongside sensors for temperature, humidity, and soil moisture, the project aims to provide real-time monitoring of crucial environmental parameters within the greenhouse. This data not only facilitates proactive decision-making but also enables precise adjustments to ensure an optimal growth environment for plants. Moreover, with the ESP32's capability to control a water pump, the project seeks to automate irrigation processes, ensuring plants receive adequate hydration based on real-time soil moisture levels. The integration of Arduino IoT Cloud as the central platform adds another layer of functionality, enabling remote access for data visualization and seamless control of the water pump, thereby enhancing accessibility and convenience for greenhouse management. Ultimately, the project aims to maximize yield and resource efficiency while minimizing manual intervention through IoT solutions.

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

#### LED

| LED | ESP32 |
| --- | --- |
| VCC | 27 |
| GND | GND |


In this case, the LDR sensors and the HR43 water sensor use analog signal communication to send data to the ESP32, while the DHT11 sensor uses its own communication to send the temperature and humidity data to the ESP32 via its DATA pin (if you want to learn more about the communication between the DHT11 and the ESP32, the following link explains its communication in detail: https: //www.makerguides.com/esp32-dht11-dht22-humidity-temperature-sensor/). For now, in order to check its viability, the project contains an LED instead of a water pump designed to turn on and off in order to supply the right amount of water to the plant located inside the IoT Greenhouse, with communication between the LED and the ESP32 being done digitally. <br>
When considering the network connection, the Arduino Cloud uses the MQTT protocol to communicate with the ESP32, which is connected to Wi-Fi as configured on the Arduino IoT Cloud platform. Finally, the Dashboard built on the Arduino IoT Cloud Platform can only be viewed via a request using the HTTP protocol, which is made by a computer or cell phone which connects to the Dashboard's web address via a web browser. The final architecture looks like the following image : <br>

![alt text](https://github.com/nrazp/greenhouse-iot-system/blob/main/Images/arquitetura_v1.2.jpg)

Installation and Configuration Manual :
<br>
SOFTWARE MANUAL <br>
Criar uma conta no Arduino Cloud  <br>
Conectar o Esp32 ao cloud <br>
  -> Criar Key do ESP32 e conectar ele a rede <br>
  -> Arduino Agent <br>
Criar as variaveis no cloud <br>
Upar o codigo ao Cloud <br>
Verificar o uso das Bibliotecas : Lista das bibliotecas <br>
Criação de dashboard dentro do Arduino Cloud <br>
  -> Explicar possivel erro de boot e do ESP32 n conseguir usar metade dos pinos com wifi ligado. <br>
