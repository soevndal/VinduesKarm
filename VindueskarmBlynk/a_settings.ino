/////////////////////////////
///////PIN DEFINITIONS///////
/////////////////////////////

NewPing sonar1(A14, A13, 50);
NewPing sonar2(A12, A11, 50);

#define DHT_DATA_PIN 22//PIN for Temp/RH module, digital
#define DHT_DATA_PINB 23//PIN for Temp/RH module, digital

#define ONE_WIRE_BUS A10

int MoistureSensor = A15; //Input Analog pin for soil sensor

//SETUP OF POWER PINS TO SOIL SENSORS
int PPlant1 = 49; //Power pin to soil sensor
int PPlant2 = 48; //Power pin to soil sensor
int PPlant3 = 47; //Power pin to soil sensor
int PPlant4 = 46; //Power pin to soil sensor
int PPlant5 = 45; //Power pin to soil sensor
int PPlant6 = 44; //Power pin to soil sensor
int PPlant7 = 43; //Power pin to soil sensor
int PPlant8 = 42; //Power pin to soil sensor
int PPlant9 = 41; //Power pin to soil sensor
int PPlant10 = 40; //Power pin to soil sensor
int PPlant11 = 39; //Power pin to soil sensor
int PPlant12 = 38; //Power pin to soil sensor
int PPlant13 = 37; //Power pin to soil sensor
int PPlant14 = 36; //Power pin to soil sensor

//SETUP OF SIGNAL PINS TO START PUMP
int SPump1 = 35; //Signal pin to pump 
int SPump2 = 34; //Signal pin to pump
int SPump3 = 33; //Signal pin to pump
int SPump4 = 32; //Signal pin to pump
int SPump5 = 31; //Signal pin to pump
int SPump6 = 30; //Signal pin to pump
int SPump7 = 29; //Signal pin to pump
int SPump8 = 28; //Signal pin to pump
int SPump9 = 27; //Signal pin to pump
