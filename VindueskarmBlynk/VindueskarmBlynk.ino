//
//Window farm controlled by local blynk server hosted on a Ri
//
//Main controller - Arduino Mega
//Wifi controller - Nodemcu esp8266
//Blynk server - raspberry pi 3
//Remote controller - Blynk IOS app
//
//
//Structure:
//a_settings - Pin definitions
//a_settings2 - setup of values for definitions
//a_settings3 - setup of constant definitions, no need to change
//b_setup - Contains the void setup() block
//c_loop - Contains the void loop() block
//d_addons - Contains custom made void functions
//
//if (Blynk.connected())
//  {
//  Blynk.run();
//    }
//
//
//
//Librabries needed to run the project
#include <TimeLib.h>    //Library for controlling time
#include <NewPing.h>    //Library for sonar module for waterlevel
#include <Dht11.h>
#include <SPI.h>
#include <SparkFunTSL2561.h>
#include <Wire.h>
#include <OneWire.h>
#include <DallasTemperature.h>
#include <SFE_BMP180.h>
//sensorValue = map(sensorValue, sensorMin, sensorMax, 0, 255);
