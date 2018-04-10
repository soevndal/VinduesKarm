int PumpActiveTime;
int WhatPumpActive;
int timenow;
boolean PumpPowerReady;

//SETUP OF SOIL MOISTURE INTS NO NEED TO EDIT
int SMPlant1 = 0; //Soil's moisture data's save int
int SMPlant2 = 0; //Soil's moisture data's save int
int SMPlant3 = 0; //Soil's moisture data's save int
int SMPlant4 = 0; //Soil's moisture data's save int
int SMPlant5 = 0; //Soil's moisture data's save int
int SMPlant6 = 0; //Soil's moisture data's save int
int SMPlant7 = 0; //Soil's moisture data's save int
int SMPlant8 = 0; //Soil's moisture data's save int
int SMPlant9 = 0; //Soil's moisture data's save int
int SMPlant10 = 0; //Soil's moisture data's save int
int SMPlant11 = 0; //Soil's moisture data's save int
int SMPlant12 = 0; //Soil's moisture data's save int
int SMPlant13 = 0; //Soil's moisture data's save int
int SMPlant14 = 0; //Soil's moisture data's save int

int SMPlant1Map = 0; //Soil's moisture data's save int
int SMPlant2Map = 0; //Soil's moisture data's save int
int SMPlant3Map = 0; //Soil's moisture data's save int
int SMPlant4Map = 0; //Soil's moisture data's save int
int SMPlant5Map = 0; //Soil's moisture data's save int
int SMPlant6Map = 0; //Soil's moisture data's save int
int SMPlant7Map = 0; //Soil's moisture data's save int
int SMPlant8Map = 0; //Soil's moisture data's save int
int SMPlant9Map = 0; //Soil's moisture data's save int
int SMPlant10Map = 0; //Soil's moisture data's save int
int SMPlant11Map = 0; //Soil's moisture data's save int
int SMPlant12Map = 0; //Soil's moisture data's save int
int SMPlant13Map = 0; //Soil's moisture data's save int
int SMPlant14Map = 0; //Soil's moisture data's save int


//SETUP OF TIMERS FOR LAST WATERED. NO NEED TO EDIT
time_t LWPlant1;
time_t LWPlant2;
time_t LWPlant3;
time_t LWPlant4;
time_t LWPlant5;
time_t LWPlant6;
time_t LWPlant7;
time_t LWPlant8;
time_t LWPlant9;
time_t LWPlant10;
time_t LWPlant11;
time_t LWPlant12;
time_t LWPlant13;
time_t LWPlant14;

//SETUP OF TIMERS FOR LAST SOIL CHECK. NO NEED TO EDIT
time_t LSCPlant1;
time_t LSCPlant2;
time_t LSCPlant3;
time_t LSCPlant4;
time_t LSCPlant5;
time_t LSCPlant6;
time_t LSCPlant7;
time_t LSCPlant8;
time_t LSCPlant9;
time_t LSCPlant10;
time_t LSCPlant11;
time_t LSCPlant12;
time_t LSCPlant13;
time_t LSCPlant14;

//SETUP OF MISC TIMERS
time_t LRMiscRoutines;
time_t LRBlynkRoutines;

SFE_BMP180 Pressure;
char status;
double T,P,p0,a;

//LUX SENSER SETTINGS
unsigned int data0, data1;
double lux;    // Resulting lux value
SFE_TSL2561 light;
boolean gain;     // Gain setting, 0 = X1, 1 = X16;
unsigned int ms;  // Integration ("shutter") time in milliseconds

int moistureSum0 = 0; //Int to store sum of readings to get an average

int WLevelLeftAnalog = 0;     //int to save waterlevel in tank
int WLevelRightAnalog = 0;     //int to save waterlevel in tank
float WLevelLeft = 0; 
float WLevelRight = 0;

float WTempLeft = 0;    //float to save water temp left
float WTempRight = 0;    //float to save water temp right

dht11 DHT11;    //The 2 Temp/RH sensors
dht11 DHT11b;

#define TEMPERATURE_PRECISION 9

OneWire oneWire(ONE_WIRE_BUS);

DallasTemperature sensors(&oneWire);

DeviceAddress ThermometerLeft, ThermometerRight;

char BluetoothCommand1[ ] = "derp";
char BluetoothCommand2[ ] = "derp";
char BluetoothCommand3[ ] = "derp";
char BluetoothCommand4[ ] = "derp";

const byte numChars = 64;
char receivedChars[numChars];
char tempChars[numChars];        // temporary array for use when parsing
boolean newData = false;
