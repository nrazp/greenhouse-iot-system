# Greenhouse-IoT-System

## Project Overview:
This IoT project involves the use of an ESP32 microcontroller connected to Arduino Cloud to monitor and control various aspects of a greenhouse environment. The ESP32 is equipped with sensors to measure temperature, humidity, and soil moisture. Additionally, it's capable of controlling a water pump to hydrate the plants as needed. The Arduino IoT Cloud serves as the central platform for data visualization and remote control of the water pump.

##  Motivation for the Project
In recent years, there has been a growing emphasis on sustainable agriculture and food production methods. Greenhouses play a vital role in this movement by providing controlled environments for plant growth, allowing for year-round cultivation and optimized resource utilization. However, traditional greenhouse management methods often rely on manual monitoring and intervention, which can be labor-intensive, inefficient, and prone to human error.

The motivation behind the Greenhouse Monitoring and Automation Project stems from the need to address these challenges and leverage technology to create more efficient and sustainable agricultural practices. By integrating Internet of Things (IoT) technologies, such as the ESP32 microcontroller and Arduino IoT Cloud platform, this project aims to revolutionize greenhouse management.

## Objectives of the Project
The primary objectives of this IoT project center around optimizing greenhouse conditions for enhanced plant growth and management efficiency. By leveraging the ESP32 microcontroller alongside sensors for temperature, humidity, and soil moisture, the project aims to provide real-time monitoring of crucial environmental parameters within the greenhouse. This data not only facilitates proactive decision-making but also enables precise adjustments to ensure an optimal growth environment for plants. Moreover, with the ESP32's capability to control a water pump, the project seeks to automate irrigation processes, ensuring plants receive adequate hydration based on real-time soil moisture levels. The integration of Arduino IoT Cloud as the central platform adds another layer of functionality, enabling remote access for data visualization and seamless control of the water pump, thereby enhancing accessibility and convenience for greenhouse management. Ultimately, the project aims to maximize yield and resource efficiency while minimizing manual intervention through smart IoT solutions.

Instalation manual :
SOFTWARE MANUAL
Criar uma conta no Arduino Cloud
Conectar o Esp32 ao cloud
  -> Criar Key do ESP32 e conectar ele a rede
  -> Arduino Agent
Criar as variaveis no cloud
Upar o codigo ao Cloud
Verificar o uso das Bibliotecas : Lista das bibliotecas
Criação de dashboard dentro do Arduino Cloud
  -> Explicar possivel erro de boot e do ESP32 n conseguir usar metade dos pinos com wifi ligado.


:Author: dhiegofc
:Email: dhiego.fernande@unesp.br
:Date: 29/03/2024
:Revision: 1
:License: Public Domain

= Project: ESP32 Connected to HC-SR04 and BME280 Sensors Integrated to Arduino IoT Cloud

ESP32 connected to HC-SR04 and BME280 sensors, and also a red led, to be integrated to Arduino IoT Cloud.

== Step 1: Arduino IoT Cloud

* Create a Esp32 Thing on Arduino IoT Cloud.
* Connected the variables to the ESP32 Thing on Arduino IoT Cloud.

== Step 2: Assemble the sensors, the red led and esp32 on a breadboard.

=== The materials you need for this project.

|===
| **ID** | **Part name**        | **Quantity**
| R1 | Resistor         | 1       
| L1 | Red LED          | 1        
| E1 | ESP32            | 1
| S1 | BME280           | 1
| S2 | HC-SR04          | 1           
|===

=== Observe the ESP32 Pinout

image::../../../../images/ESP32_pinout.jpg[ESP32 Pinout]

=== Assemble the ESP32 to HC-SR04 Sensor

image::../../../../images/ESP32_HCSR04.png[ESP32 HC-SR04, , width=600, height=300]

Pinout HC-SR04:
|===
| **HC-SR04** | **ESP32**       
| VCC     | VCC          
| Trig    | GPIO4              
| Echo    | GPIO2
| GND     | GND                             
|===

=== Assemble the ESP32 to HC-SR04 Sensor

image::../../../../images/ESP32_BME280.png[ESP32 BME280]

Pinout HC-BM280:
|===
| **HC-SR04** | **ESP32**       
| VCC     | VCC 
| GND     | GND           
| SCL     | GPIO22              
| SDA     | GPIO21
| CSB     | -
| SDO     | -                        
|===

=== The Whole circuit on breadboard

image::../../../../images/Whole_Circuit.jpg[Whole Circuit, width=400, height=520]

Use GPIO15 to control the Red Led.

== Step 3: Download the files in this project.

=== Folder structure

....
 ESP32_Thing_Sensors                => Arduino sketch folder
  ├── ESP32_Thing_Sensors.ino       => main Arduino file
  ├── thingProperties.h             => thing Properties to connect to Arduino IoT Cloud
  └── ReadMe.adoc                   => this file
....

== Step 4: Run ESP32_Thing_Sensors.ino on Arduino IDE.

== Step 5: Observe the sensor variables and control the red led on Arduino IoT Cloud.

== Observation

Other relevant informations below:

=== License
This project is released under a {License} License.

=== Contributing
To contribute to this project please contact: dhiego.fernandes@unesp.br


=== Help
This document is written in the _AsciiDoc_ format, a markup language to describe documents. 
If you need help you can search the http://www.methods.co.nz/asciidoc[AsciiDoc homepage]
or consult the http://powerman.name/doc/asciidoc[AsciiDoc cheatsheet]

