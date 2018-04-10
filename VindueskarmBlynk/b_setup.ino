void setup() {
  
//analogReference(INTERNAL2V56);
Serial.begin(115200);   //USB Debug
Serial2.begin(115200);  //NodeMcu

setTime(00,00,00,1,1,2017); //hr,min,sec,day,month,yr. Setting the time for the internal clock. resets on resets.

//SETUP OF TIMERS FOR LAST WATERED.
LWPlant1 = now();
LWPlant2 = now();
LWPlant3 = now();
LWPlant4 = now();
LWPlant5 = now();
LWPlant6 = now();
LWPlant7 = now();
LWPlant8 = now();
LWPlant9 = now();
LWPlant10 = now();
LWPlant11 = now();
LWPlant12 = now();
LWPlant13 = now();
LWPlant14 = now();

//SETUP OF TIMERS FOR LAST SOIL CHECK.
LSCPlant1 = now();
LSCPlant2 = now();
LSCPlant3 = now();
LSCPlant4 = now();
LSCPlant5 = now();
LSCPlant6 = now();
LSCPlant7 = now();
LSCPlant8 = now();
LSCPlant9 = now();
LSCPlant10 = now();
LSCPlant11 = now();
LSCPlant12 = now();
LSCPlant13 = now();
LSCPlant14 = now();

//SETUP OF MISC TIMERS
LRMiscRoutines = now();
LRBlynkRoutines = now();


pinMode(PPlant1,OUTPUT); //Power pin to soil sensor
pinMode(PPlant2,OUTPUT); //Power pin to soil sensor
pinMode(PPlant3,OUTPUT); //Power pin to soil sensor
pinMode(PPlant4,OUTPUT); //Power pin to soil sensor
pinMode(PPlant5,OUTPUT); //Power pin to soil sensor
pinMode(PPlant6,OUTPUT); //Power pin to soil sensor
pinMode(PPlant7,OUTPUT); //Power pin to soil sensor
pinMode(PPlant8,OUTPUT); //Power pin to soil sensor
pinMode(PPlant9,OUTPUT); //Power pin to soil sensor
pinMode(PPlant10,OUTPUT); //Power pin to soil sensor
pinMode(PPlant11,OUTPUT); //Power pin to soil sensor
pinMode(PPlant12,OUTPUT); //Power pin to soil sensor
pinMode(PPlant13,OUTPUT); //Power pin to soil sensor
pinMode(PPlant14,OUTPUT); //Power pin to soil sensor
digitalWrite(PPlant1,LOW);
digitalWrite(PPlant2,LOW);
digitalWrite(PPlant3,LOW);
digitalWrite(PPlant4,LOW);
digitalWrite(PPlant5,LOW);
digitalWrite(PPlant6,LOW);
digitalWrite(PPlant7,LOW);
digitalWrite(PPlant8,LOW);
digitalWrite(PPlant9,LOW);
digitalWrite(PPlant10,LOW);
digitalWrite(PPlant11,LOW);
digitalWrite(PPlant12,LOW);
digitalWrite(PPlant13,LOW);
digitalWrite(PPlant14,LOW);

pinMode(SPump1,OUTPUT); //Power pin to pump
pinMode(SPump2,OUTPUT); //Power pin to pump
pinMode(SPump3,OUTPUT); //Power pin to pump
pinMode(SPump4,OUTPUT); //Power pin to pump
pinMode(SPump5,OUTPUT); //Power pin to pump
pinMode(SPump6,OUTPUT); //Power pin to pump
pinMode(SPump7,OUTPUT); //Power pin to pump
pinMode(SPump8,OUTPUT); //Power pin to pump
pinMode(SPump9,OUTPUT); //Power pin to pump
digitalWrite(SPump1,LOW);
digitalWrite(SPump2,LOW);
digitalWrite(SPump3,LOW);
digitalWrite(SPump4,LOW);
digitalWrite(SPump5,LOW);
digitalWrite(SPump6,LOW);
digitalWrite(SPump7,LOW);
digitalWrite(SPump8,LOW);
digitalWrite(SPump9,LOW);

pinMode(MoistureSensor,INPUT); //Analog pin for SoilMoisture reading

sensors.begin();

  if (!sensors.getAddress(ThermometerLeft, 0)) Serial.println("Unable to find address for Device 0");
  if (!sensors.getAddress(ThermometerRight, 1)) Serial.println("Unable to find address for Device 1");

  sensors.setResolution(ThermometerLeft, TEMPERATURE_PRECISION);
  sensors.setResolution(ThermometerRight, TEMPERATURE_PRECISION);  
  
light.begin();

  // Get factory ID from sensor:
  // (Just for fun, you don't need to do this to operate the sensor)

  unsigned char ID;
  
  if (light.getID(ID))
  {
    Serial.print("Got factory ID: 0X");
    Serial.print(ID,HEX);
    Serial.println(", should be 0X5X");
  }
  // Most library commands will return true if communications was successful,
  // and false if there was a problem. You can ignore this returned value,
  // or check whether a command worked correctly and retrieve an error code:
  else
  {
    byte error = light.getError();
    printError(error);
  }
  // The light sensor has a default integration time of 402ms,
  // and a default gain of low (1X).
  
  // If you would like to change either of these, you can
  // do so using the setTiming() command.
  
  // If gain = false (0), device is set to low gain (1X)
  // If gain = high (1), device is set to high gain (16X)

  gain = 0;

  // If time = 0, integration will be 13.7ms
  // If time = 1, integration will be 101ms
  // If time = 2, integration will be 402ms
  // If time = 3, use manual start / stop to perform your own integration

  unsigned char time = 2;

  // setTiming() will set the third parameter (ms) to the
  // requested integration time in ms (this will be useful later):
  
  Serial.println("Set timing...");
  light.setTiming(gain,time,ms);

  // To start taking measurements, power up the sensor:
  
  Serial.println("Powerup...");
  light.setPowerUp();
  
  // The sensor will now gather light during the integration time.
  // After the specified time, you can retrieve the result from the sensor.
  // Once a measurement occurs, another integration period will start.

  // Initialize the sensor (it is important to get calibration values stored on the device).

  if (Pressure.begin())
    Serial.println("BMP180 init success");
  else
  {
    // Oops, something went wrong, this is usually a connection problem,
    // see the comments at the top of this sketch for the proper connections.

    Serial.println("BMP180 init fail\n\n");
   
  }




}

