void Watering(int powerpin, int pumptime){
  
  if(PumpPowerReady){
    digitalWrite(powerpin, HIGH);
    PumpActiveTime = millis() + (pumptime * 1000);
    PumpPowerReady = false;
    WhatPumpActive = powerpin;
  }
}

void moistureSampling(int sensorpin)// read the value of the soil moisture
{
  digitalWrite(sensorpin,HIGH);
  
  //delay(3000);    //Erm skal måske være 3 sek
  
  for(int i = 0; i < 30; i++)//samping 30 time
  {
    moistureSum0 = moistureSum0 + analogRead(MoistureSensor);  
    //delay(1);
  }
  digitalWrite(sensorpin,LOW); 
  
  //delay(100);
  
  if(sensorpin == PPlant1){

   SMPlant1 = moistureSum0 / 30;//get the average value
   
   if(SMPlant1 > MoistureAnalogMaxRead1){
    SMPlant1 = MoistureAnalogMaxRead1;
   }
   if(SMPlant1 < MoistureAnalogMinRead1){
    SMPlant1 = MoistureAnalogMinRead1;
   }
   SMPlant1Map = map(SMPlant1, MoistureAnalogMinRead1, MoistureAnalogMaxRead1, 0, 100);
    
  }
  if(sensorpin == PPlant2){

   SMPlant2 = moistureSum0 / 30;//get the average value
   
   if(SMPlant2 > MoistureAnalogMaxRead2){
    SMPlant2 = MoistureAnalogMaxRead2;
   }
   if(SMPlant2 < MoistureAnalogMinRead2){
    SMPlant2 = MoistureAnalogMinRead2;
   }
   SMPlant2Map = map(SMPlant2, MoistureAnalogMinRead2, MoistureAnalogMaxRead2, 0, 100);
   
  }
   if(sensorpin == PPlant3){

   SMPlant3 = moistureSum0 / 30;//get the average value

   if(SMPlant3 > MoistureAnalogMaxRead3){
    SMPlant3 = MoistureAnalogMaxRead3;
   }
   if(SMPlant3 < MoistureAnalogMinRead3){
    SMPlant3 = MoistureAnalogMinRead3;
   }
   SMPlant3Map = map(SMPlant3, MoistureAnalogMinRead3, MoistureAnalogMaxRead3, 0, 100);
   
  }
  if(sensorpin == PPlant4){

  SMPlant4 = moistureSum0 / 30;//get the average value

  if(SMPlant4 > MoistureAnalogMaxRead4){
    SMPlant4 = MoistureAnalogMaxRead4;
   }
   if(SMPlant4 < MoistureAnalogMinRead4){
    SMPlant4 = MoistureAnalogMinRead4;
   }
   SMPlant4Map = map(SMPlant4, MoistureAnalogMinRead4, MoistureAnalogMaxRead4, 0, 100);
  }
  if(sensorpin == PPlant5){

  SMPlant5 = moistureSum0 / 30;//get the average value

  if(SMPlant5 > MoistureAnalogMaxRead5){
    SMPlant5 = MoistureAnalogMaxRead5;
   }
   if(SMPlant5 < MoistureAnalogMinRead5){
    SMPlant5 = MoistureAnalogMinRead5;
   }
   SMPlant5Map = map(SMPlant5, MoistureAnalogMinRead5, MoistureAnalogMaxRead5, 0, 100);
  }
  if(sensorpin == PPlant6){

  SMPlant6 = moistureSum0 / 30;//get the average value

  if(SMPlant6 > MoistureAnalogMaxRead6){
    SMPlant6 = MoistureAnalogMaxRead6;
   }
   if(SMPlant6 < MoistureAnalogMinRead6){
    SMPlant6 = MoistureAnalogMinRead6;
   }
   SMPlant6Map = map(SMPlant6, MoistureAnalogMinRead6, MoistureAnalogMaxRead6, 0, 100);
  }
  if(sensorpin == PPlant7){

  SMPlant7 = moistureSum0 / 30;//get the average value

  if(SMPlant7 > MoistureAnalogMaxRead7){
    SMPlant7 = MoistureAnalogMaxRead7;
   }
   if(SMPlant7 < MoistureAnalogMinRead7){
    SMPlant7 = MoistureAnalogMinRead7;
   }
   SMPlant7Map = map(SMPlant7, MoistureAnalogMinRead7, MoistureAnalogMaxRead7, 0, 100);
  }
  if(sensorpin == PPlant8){

  SMPlant8 = moistureSum0 / 30;//get the average value

  if(SMPlant8 > MoistureAnalogMaxRead8){
    SMPlant8 = MoistureAnalogMaxRead8;
   }
   if(SMPlant8 < MoistureAnalogMinRead8){
    SMPlant8 = MoistureAnalogMinRead8;
   }
   SMPlant8Map = map(SMPlant8, MoistureAnalogMinRead8, MoistureAnalogMaxRead8, 0, 100);
  }
  if(sensorpin == PPlant9){

  SMPlant9 = moistureSum0 / 30;//get the average value

  if(SMPlant9 > MoistureAnalogMaxRead9){
    SMPlant9 = MoistureAnalogMaxRead9;
   }
   if(SMPlant9 < MoistureAnalogMinRead9){
    SMPlant9 = MoistureAnalogMinRead9;
   }
   SMPlant9Map = map(SMPlant9, MoistureAnalogMinRead9, MoistureAnalogMaxRead9, 0, 100);
  }
  if(sensorpin == PPlant10){

  SMPlant10 = moistureSum0 / 30;//get the average value

  if(SMPlant10 > MoistureAnalogMaxRead10){
    SMPlant10 = MoistureAnalogMaxRead10;
   }
   if(SMPlant10 < MoistureAnalogMinRead10){
    SMPlant10 = MoistureAnalogMinRead10;
   }
   SMPlant10Map = map(SMPlant10, MoistureAnalogMinRead10, MoistureAnalogMaxRead10, 0, 100);
  }
  if(sensorpin == PPlant11){

  SMPlant11 = moistureSum0 / 30;//get the average value

  if(SMPlant11 > MoistureAnalogMaxRead11){
    SMPlant11 = MoistureAnalogMaxRead11;
   }
   if(SMPlant11 < MoistureAnalogMinRead11){
    SMPlant11 = MoistureAnalogMinRead11;
   }
   SMPlant11Map = map(SMPlant11, MoistureAnalogMinRead11, MoistureAnalogMaxRead11, 0, 100);
  }
  if(sensorpin == PPlant12){

  SMPlant12 = moistureSum0 / 30;//get the average value

  if(SMPlant12 > MoistureAnalogMaxRead12){
    SMPlant12 = MoistureAnalogMaxRead12;
   }
   if(SMPlant12 < MoistureAnalogMinRead12){
    SMPlant12 = MoistureAnalogMinRead12;
   }
   SMPlant12Map = map(SMPlant12, MoistureAnalogMinRead12, MoistureAnalogMaxRead12, 0, 100);
  }
  if(sensorpin == PPlant13){

  SMPlant13 = moistureSum0 / 30;//get the average value

  if(SMPlant13 > MoistureAnalogMaxRead13){
    SMPlant13 = MoistureAnalogMaxRead13;
   }
   if(SMPlant13 < MoistureAnalogMinRead13){
    SMPlant13 = MoistureAnalogMinRead13;
   }
   SMPlant13Map = map(SMPlant13, MoistureAnalogMinRead13, MoistureAnalogMaxRead13, 0, 100);
  }
  if(sensorpin == PPlant14){

  SMPlant14 = moistureSum0 / 30;//get the average value

  if(SMPlant14 > MoistureAnalogMaxRead14){
    SMPlant14 = MoistureAnalogMaxRead14;
   }
   if(SMPlant14 < MoistureAnalogMinRead14){
    SMPlant14 = MoistureAnalogMinRead14;
   }
   SMPlant14Map = map(SMPlant14, MoistureAnalogMinRead14, MoistureAnalogMaxRead14, 0, 100);
  }  
   
  moistureSum0 = 0;//reset the variable

}  

void WriteToESP()
{
Serial2.print("<");
Serial2.print(SMPlant1);
Serial2.print(':');
Serial2.print(SMPlant2);
Serial2.print(':');
Serial2.print(SMPlant3);
Serial2.print(':');
Serial2.print(SMPlant4);
Serial2.print(':');
Serial2.print(SMPlant5);
Serial2.print(':');
Serial2.print(SMPlant6);
Serial2.print(':');
Serial2.print(SMPlant7);
Serial2.print(':');
Serial2.print(SMPlant8);
Serial2.print(':');
Serial2.print(SMPlant9);
Serial2.print(':');
Serial2.print(SMPlant10);
Serial2.print(':');
Serial2.print(SMPlant11);
Serial2.print(':');
Serial2.print(SMPlant12);
Serial2.print(':');
Serial2.print(SMPlant13);
Serial2.print(':');
Serial2.print(SMPlant14);
Serial2.print(':');
/*Serial2.print(SMPlant1Map);
Serial2.print(':');
Serial2.print(SMPlant2Map);
Serial2.print(':');
Serial2.print(SMPlant3Map);
Serial2.print(':');
Serial2.print(SMPlant4Map);
Serial2.print(':');
Serial2.print(SMPlant5Map);
Serial2.print(':');
Serial2.print(SMPlant6Map);
Serial2.print(':');
Serial2.print(SMPlant7Map);
Serial2.print(':');
Serial2.print(SMPlant8Map);
Serial2.print(':');
Serial2.print(SMPlant9Map);
Serial2.print(':');
Serial2.print(SMPlant10Map);
Serial2.print(':');
Serial2.print(SMPlant11Map);
Serial2.print(':');
Serial2.print(SMPlant12Map);
Serial2.print(':');
Serial2.print(SMPlant13Map);
Serial2.print(':');
Serial2.print(SMPlant14Map);
Serial2.print(':');*/
Serial2.print( (now() - LWPlant1)/60 );
Serial2.print(':');
Serial2.print( (now() - LWPlant2)/60 );
Serial2.print(':');
Serial2.print( (now() - LWPlant3)/60 );
Serial2.print(':');
Serial2.print( (now() - LWPlant5)/60 );
Serial2.print(':');
Serial2.print( (now() - LWPlant7)/60 );
Serial2.print(':');
Serial2.print( (now() - LWPlant8)/60 );
Serial2.print(':');
Serial2.print( (now() - LWPlant9)/60 );
Serial2.print(':');
Serial2.print( (now() - LWPlant10)/60 );
Serial2.print(':');
Serial2.print( (now() - LWPlant11)/60 );
Serial2.print(':');
Serial2.print(DHT11.temperature,1);   
Serial2.print(':');
Serial2.print(DHT11.humidity);
Serial2.print(':');
Serial2.print(DHT11b.temperature,1);
Serial2.print(':');
Serial2.print(DHT11b.humidity);
Serial2.print(':');
Serial2.print(lux,1);
Serial2.print(':');
Serial2.print(WLevelLeft,1);
Serial2.print(':');
Serial2.print(WTempLeft,1);
Serial2.print(':');
Serial2.print(WLevelRight,1);
Serial2.print(':');
Serial2.print(WTempRight,1);
Serial2.print(':');
Serial2.print(p0,1);
Serial2.print(':');
Serial2.print(WTPlant1);
Serial2.print(':');
Serial2.print(WTPlant2);
Serial2.print(':');
Serial2.print(WTPlant3);
Serial2.print(':');
Serial2.print(WTPlant4);
Serial2.print(':');
Serial2.print(WTPlant5);
Serial2.print(':');
Serial2.print(WTPlant6);
Serial2.print(':');
Serial2.print(WTPlant7);
Serial2.print(':');
Serial2.print(WTPlant8);
Serial2.print(':');
Serial2.print(WTPlant9);
Serial2.print(':');
Serial2.print(SRPlantInt);
Serial2.print(':');
Serial2.print(MiscRoutinesInterval);
Serial2.print(':');
Serial2.print(BlynkRoutinesInterval);
Serial2.print(':');
Serial2.print(Pump1Int);
Serial2.print(':');
Serial2.print(Pump2Int);
Serial2.print(':');
Serial2.print(Pump3Int);
Serial2.print(':');
Serial2.print(Pump4Int);
Serial2.print(':');
Serial2.print(Pump5Int);
Serial2.print(':');
Serial2.print(Pump6Int);
Serial2.print(':');
Serial2.print(Pump7Int);
Serial2.print(':');
Serial2.print(Pump8Int);
Serial2.print(':');
Serial2.print(Pump9Int);
Serial2.print(':');
Serial2.println('>');
}

void printError(byte error)
  // If there's an I2C error, this function will
  // print out an explanation.
{
  Serial.print("I2C error: ");
  Serial.print(error,DEC);
  Serial.print(", ");
  
  switch(error)
  {
    case 0:
      Serial.println("success");
      break;
    case 1:
      Serial.println("data too long for transmit buffer");
      break;
    case 2:
      Serial.println("received NACK on address (disconnected?)");
      break;
    case 3:
      Serial.println("received NACK on data");
      break;
    case 4:
      Serial.println("other error");
      break;
    default:
      Serial.println("unknown error");
  }
}

void TempRHSampling()
 { 
  
  int chk = DHT11.read(DHT_DATA_PIN);

   switch (chk)
  {
    case DHTLIB_OK:  
   Serial.print("OK,\t"); 
    break;
    case DHTLIB_ERROR_CHECKSUM: 
    Serial.print("Checksum error,\t"); 
    break;
    case DHTLIB_ERROR_TIMEOUT: 
    Serial.print("Time out error,\t"); 
    break;
    default: 
    Serial.print("Unknown error,\t"); 
    break;
  }
  //delay(10);

   int chk2 = DHT11b.read(DHT_DATA_PINB);

   switch (chk2)
  {
    case DHTLIB_OK:  
   Serial.print("OK,\t"); 
    break;
    case DHTLIB_ERROR_CHECKSUM: 
    Serial.print("Checksum error,\t"); 
    break;
    case DHTLIB_ERROR_TIMEOUT: 
    Serial.print("Time out error,\t"); 
    break;
    default: 
    Serial.print("Unknown error,\t"); 
    break;
  }
  //delay(10);
  
  
}

void GetLux()
{
 
  // There are two light sensors on the device, one for visible light
  // and one for infrared. Both sensors are needed for lux calculations.
  
  // Retrieve the data from the device:

  
  if (light.getData(data0,data1))
  {
    // getData() returned true, communication was successful
      
    // To calculate lux, pass all your settings and readings
    // to the getLux() function.
    
    // The getLux() function will return 1 if the calculation
    // was successful, or 0 if one or both of the sensors was
    // saturated (too much light). If this happens, you can
    // reduce the integration time and/or gain.
    // For more information see the hookup guide at: https://learn.sparkfun.com/tutorials/getting-started-with-the-tsl2561-luminosity-sensor

    boolean good;  // True if neither sensor is saturated
    
    // Perform lux calculation:

    good = light.getLux(gain,ms,data0,data1,lux);
    
  }
  else
  {
    // getData() returned false because of an I2C error, inform the user.

    byte error = light.getError();
    printError(error);
  }
}

void ReadPressure()
{
 // You must first get a temperature measurement to perform a pressure reading.
  
  // Start a temperature measurement:
  // If request is successful, the number of ms to wait is returned.
  // If request is unsuccessful, 0 is returned.

  status = Pressure.startTemperature();
  
  if (status != 0)
  {
    // Wait for the measurement to complete:
    delay(status);

    // Retrieve the completed temperature measurement:
    // Note that the measurement is stored in the variable T.
    // Function returns 1 if successful, 0 if failure.

    status = Pressure.getTemperature(T);
    if (status != 0)
    {
      
      // Start a pressure measurement:
      // The parameter is the oversampling setting, from 0 to 3 (highest res, longest wait).
      // If request is successful, the number of ms to wait is returned.
      // If request is unsuccessful, 0 is returned.

      status = Pressure.startPressure(3);
      if (status != 0)
      {
        // Wait for the measurement to complete:
        delay(status);

        // Retrieve the completed pressure measurement:
        // Note that the measurement is stored in the variable P.
        // Note also that the function requires the previous temperature measurement (T).
        // (If temperature is stable, you can do one temperature measurement for a number of pressure measurements.)
        // Function returns 1 if successful, 0 if failure.

        status = Pressure.getPressure(P,T);
        if (status != 0)
        {
         
          // The pressure sensor returns abolute pressure, which varies with altitude.
          // To remove the effects of altitude, use the sealevel function and your current altitude.
          // This number is commonly used in weather reports.
          // Parameters: P = absolute pressure in mb, ALTITUDE = current altitude in m.
          // Result: p0 = sea-level compensated pressure in mb

          p0 = Pressure.sealevel(P,ALTITUDE); // we're at 1655 meters (Boulder, CO)
          Serial.print("relative (sea-level) pressure: ");
          Serial.print(p0,2);
          Serial.print(" mb, ");
          Serial.print(p0*0.0295333727,2);
          Serial.println(" inHg");
        }
        else Serial.println("error retrieving pressure measurement\n");
      }
      else Serial.println("error starting pressure measurement\n");
    }
    else Serial.println("error retrieving temperature measurement\n");
  }
  else Serial.println("error starting temperature measurement\n");


  
}

void proccessBTCommands(){


  if(strcmp(BluetoothCommand1,"wtt")==0){

    if(strcmp(BluetoothCommand3,"plant1")==0){        //Agurk1
      WTPlant1 = atoi(BluetoothCommand4);
    }
    if(strcmp(BluetoothCommand3,"plant2")==0){        //Agurk2
      WTPlant2 = atoi(BluetoothCommand4);
    }
    if(strcmp(BluetoothCommand3,"plant3")==0){        //Persille
      WTPlant3 = atoi(BluetoothCommand4);
    }
    if(strcmp(BluetoothCommand3,"plant4")==0){      //Purløg
      WTPlant4 = atoi(BluetoothCommand4);
    }
    if(strcmp(BluetoothCommand3,"plant5")==0){      //Basilikum
      WTPlant5 = atoi(BluetoothCommand4);
    }
    if(strcmp(BluetoothCommand3,"plant6")==0){      //Rosmarin
      WTPlant6 = atoi(BluetoothCommand4);
    }
    if(strcmp(BluetoothCommand3,"plant7")==0){      //Tomat1    
      WTPlant7 = atoi(BluetoothCommand4);
    }
    if(strcmp(BluetoothCommand3,"plant8")==0){      //Tomat2
      WTPlant8 = atoi(BluetoothCommand4);
    }
    if(strcmp(BluetoothCommand3,"plant9")==0){      //Blandede
      WTPlant9 = atoi(BluetoothCommand4);
    }         
  }
  
  if(strcmp(BluetoothCommand1,"fww")==0){

    if(strcmp(BluetoothCommand3,"pump1")==0){
      Watering(SPump1, Pump1Int);
      LWPlant1 = LWPlant1 = now();
    }
    if(strcmp(BluetoothCommand3,"pump2")==0){
      Watering(SPump2, Pump2Int);
      LWPlant2 = LWPlant2 = now();
    }
    if(strcmp(BluetoothCommand3,"pump3")==0){
      Watering(SPump3, Pump3Int);
      LWPlant3 = LWPlant3 = now();
      LWPlant4 = LWPlant4 = now();
    }
    if(strcmp(BluetoothCommand3,"pump4")==0){
      Watering(SPump4, Pump4Int);
      LWPlant5 = LWPlant5 = now();
      LWPlant6 = LWPlant6 = now();
    }
    if(strcmp(BluetoothCommand3,"pump5")==0){
      Watering(SPump5, Pump5Int);
      LWPlant7 = LWPlant7 = now();
    }
    if(strcmp(BluetoothCommand3,"pump6")==0){
      Watering(SPump6, Pump6Int);
      LWPlant8 = LWPlant8 = now();
    }
    if(strcmp(BluetoothCommand3,"pump7")==0){
      Watering(SPump7, Pump7Int);
      LWPlant9 = LWPlant9 = now();
    }
    if(strcmp(BluetoothCommand3,"pump8")==0){
      Watering(SPump8, Pump8Int);
      LWPlant10 = LWPlant10 = now();
    }
    if(strcmp(BluetoothCommand3,"pump9")==0){
      Watering(SPump9, Pump9Int);
      LWPlant11 = LWPlant11 = now();
      LWPlant12 = LWPlant12 = now();
      LWPlant13 = LWPlant13 = now();
      LWPlant14 = LWPlant14 = now();
    }
  
  }
  
  if(strcmp(BluetoothCommand1,"tpp")==0){

   if(strcmp(BluetoothCommand3,"pump1")==0){
      Pump1Int = atoi(BluetoothCommand4);
    }
    if(strcmp(BluetoothCommand3,"pump2")==0){
      Pump2Int = atoi(BluetoothCommand4);
    }
    if(strcmp(BluetoothCommand3,"pump3")==0){
      Pump3Int = atoi(BluetoothCommand4);
    }
    if(strcmp(BluetoothCommand3,"pump4")==0){
      Pump4Int = atoi(BluetoothCommand4);
    }
    if(strcmp(BluetoothCommand3,"pump5")==0){
      Pump5Int = atoi(BluetoothCommand4);
    }
    if(strcmp(BluetoothCommand3,"pump6")==0){
      Pump6Int = atoi(BluetoothCommand4);
    }
    if(strcmp(BluetoothCommand3,"pump7")==0){
      Pump7Int = atoi(BluetoothCommand4);
    }
    if(strcmp(BluetoothCommand3,"pump8")==0){
      Pump8Int = atoi(BluetoothCommand4);
    }
    if(strcmp(BluetoothCommand3,"pump9")==0){
      Pump9Int = atoi(BluetoothCommand4);
    }
    
  }

  if(strcmp(BluetoothCommand1,"set")==0){

     if(strcmp(BluetoothCommand2,"hum")==0){
      SRPlantInt = atoi(BluetoothCommand3);
     }
     if(strcmp(BluetoothCommand2,"sur")==0){
      MiscRoutinesInterval = atoi(BluetoothCommand3);
     }
     if(strcmp(BluetoothCommand2,"blym")==0){
      BlynkRoutinesInterval = atoi(BluetoothCommand3);
     }
   
  }

 
}

void recvWithStartEndMarkers() {
    static boolean recvInProgress = false;
    static byte ndx = 0;
    char startMarker = '<';
    char endMarker = '>';
    char rc;

    while (Serial2.available() > 0 && newData == false) {
        rc = Serial2.read();

        if (recvInProgress == true) {
            if (rc != endMarker) {
                receivedChars[ndx] = rc;
                ndx++;
                if (ndx >= numChars) {
                    ndx = numChars - 1;
                }
            }
            else {
                receivedChars[ndx] = '\0'; // terminate the string
                recvInProgress = false;
                ndx = 0;
                newData = true;
            }
        }

        else if (rc == startMarker) {
            recvInProgress = true;
        }
    }
}

void parseData() {      // split the data into its parts

  char *strtokIndx; // this is used by strtok() as an index

  strtokIndx = strtok(tempChars,":");      // get the first part - the string
  strcpy(BluetoothCommand1, strtokIndx);  
  strtokIndx = strtok(NULL, ":"); // this continues where the previous call left off
  strcpy(BluetoothCommand2, strtokIndx);
  strtokIndx = strtok(NULL, ":"); // this continues where the previous call left off
  strcpy(BluetoothCommand3, strtokIndx);
  strtokIndx = strtok(NULL, ":"); // this continues where the previous call left off
  strcpy(BluetoothCommand4, strtokIndx);
      
    //integerFromPC = atoi(strtokIndx);     // convert this part to an integer
    //floatFromPC = atof(strtokIndx);     // convert this part to a float

}

void USBDEBUG()
{
Serial.print("<");
Serial.print(SMPlant1);
Serial.print(':');
Serial.print(SMPlant2);
Serial.print(':');
Serial.print(SMPlant3);
Serial.print(':');
Serial.print(SMPlant4);
Serial.print(':');
Serial.print(SMPlant5);
Serial.print(':');
Serial.print(SMPlant6);
Serial.print(':');
Serial.print(SMPlant7);
Serial.print(':');
Serial.print(SMPlant8);
Serial.print(':');
Serial.print(SMPlant9);
Serial.print(':');
Serial.print(SMPlant10);
Serial.print(':');
Serial.print(SMPlant11);
Serial.print(':');
Serial.print(SMPlant12);
Serial.print(':');
Serial.print(SMPlant13);
Serial.print(':');
Serial.print(SMPlant14);
Serial.print(':');
/*Serial.print(SMPlant1Map);
Serial.print(':');
Serial.print(SMPlant2Map);
Serial.print(':');
Serial.print(SMPlant3Map);
Serial.print(':');
Serial.print(SMPlant4Map);
Serial.print(':');
Serial.print(SMPlant5Map);
Serial.print(':');
Serial.print(SMPlant6Map);
Serial.print(':');
Serial.print(SMPlant7Map);
Serial.print(':');
Serial.print(SMPlant8Map);
Serial.print(':');
Serial.print(SMPlant9Map);
Serial.print(':');
Serial.print(SMPlant10Map);
Serial.print(':');
Serial.print(SMPlant11Map);
Serial.print(':');
Serial.print(SMPlant12Map);
Serial.print(':');
Serial.print(SMPlant13Map);
Serial.print(':');
Serial.print(SMPlant14Map);
Serial.print(':');*/
Serial.print( (now() - LWPlant1)/60 );
Serial.print(':');
Serial.print( (now() - LWPlant2)/60 );
Serial.print(':');
Serial.print( (now() - LWPlant3)/60 );
Serial.print(':');
Serial.print( (now() - LWPlant5)/60 );
Serial.print(':');
Serial.print( (now() - LWPlant7)/60 );
Serial.print(':');
Serial.print( (now() - LWPlant8)/60 );
Serial.print(':');
Serial.print( (now() - LWPlant9)/60 );
Serial.print(':');
Serial.print( (now() - LWPlant10)/60 );
Serial.print(':');
Serial.print( (now() - LWPlant11)/60 );
Serial.print(':');
Serial.print(DHT11.temperature,1);   
Serial.print(':');
Serial.print(DHT11.humidity);
Serial.print(':');
Serial.print(DHT11b.temperature,1);
Serial.print(':');
Serial.print(DHT11b.humidity);
Serial.print(':');
Serial.print(lux,1);
Serial.print(':');
Serial.print(WLevelLeft,1);
Serial.print(':');
Serial.print(WTempLeft,1);
Serial.print(':');
Serial.print(WLevelRight,1);
Serial.print(':');
Serial.print(WTempRight,1);
Serial.print(':');
Serial.print(p0,1);
Serial.print(':');
Serial.print(WTPlant1);
Serial.print(':');
Serial.print(WTPlant2);
Serial.print(':');
Serial.print(WTPlant3);
Serial.print(':');
Serial.print(WTPlant4);
Serial.print(':');
Serial.print(WTPlant5);
Serial.print(':');
Serial.print(WTPlant6);
Serial.print(':');
Serial.print(WTPlant7);
Serial.print(':');
Serial.print(WTPlant8);
Serial.print(':');
Serial.print(WTPlant9);
Serial.print(':');
Serial.print(SRPlantInt);
Serial.print(':');
Serial.print(MiscRoutinesInterval);
Serial.print(':');
Serial.print(BlynkRoutinesInterval);
Serial.print(':');
Serial.print(Pump1Int);
Serial.print(':');
Serial.print(Pump2Int);
Serial.print(':');
Serial.print(Pump3Int);
Serial.print(':');
Serial.print(Pump4Int);
Serial.print(':');
Serial.print(Pump5Int);
Serial.print(':');
Serial.print(Pump6Int);
Serial.print(':');
Serial.print(Pump7Int);
Serial.print(':');
Serial.print(Pump8Int);
Serial.print(':');
Serial.print(Pump9Int);
Serial.print(':');
Serial.println('>');





Serial.print("SMPlant1: ");
Serial.print(SMPlant1 ); Serial.write(9);
Serial.print("SMPlant2: ");
Serial.print(SMPlant2 ); Serial.write(9);
Serial.print("SMPlant3: ");
Serial.print(SMPlant3 ); Serial.write(9);
Serial.print("SMPlant4: ");
Serial.println(SMPlant4 );

Serial.print("SMPlant5: ");
Serial.print(SMPlant5 ); Serial.write(9);
Serial.print("SMPlant6: ");
Serial.print(SMPlant6  ); Serial.write(9);
Serial.print("SMPlant7: ");
Serial.print(SMPlant7 ); Serial.write(9);
Serial.print("SMPlant8: ");
Serial.println(SMPlant8);

Serial.print("SMPlant9: ");
Serial.print(SMPlant9 ); Serial.write(9);
Serial.print("SMPlant10: ");
Serial.print(SMPlant10 ); Serial.write(9);
Serial.print("SMPlant11: ");
Serial.print(SMPlant11 ); Serial.write(9);
Serial.print("SMPlant12: ");
Serial.println(SMPlant12);

Serial.print("SMPlant13: ");
Serial.print(SMPlant13 ); Serial.write(9);
Serial.print("SMPlant14: ");
Serial.println(SMPlant14);

Serial.print("LWPlant1: ");
Serial.print( (now() - LWPlant1)/60  ); Serial.write(9);
Serial.print("LWPlant2: ");
Serial.print( (now() - LWPlant2)/60  ); Serial.write(9);
Serial.print("LWPlant34: ");
Serial.print( (now() - LWPlant3)/60  ); Serial.write(9);
Serial.print("LWPlant56: ");
Serial.println( (now() - LWPlant5)/60 );

Serial.print("LWPlant7: ");
Serial.print( (now() - LWPlant7)/60  ); Serial.write(9);
Serial.print("LWPlant8: ");
Serial.print( (now() - LWPlant8)/60  ); Serial.write(9);
Serial.print("LWPlant9: ");
Serial.print( (now() - LWPlant9)/60  ); Serial.write(9);
Serial.print("LWPlant10: ");
Serial.println( (now() - LWPlant10)/60 );

Serial.print("LWPlant1114: ");
Serial.println( (now() - LWPlant11)/60 );

Serial.print("TempOp: ");
Serial.print(DHT11.temperature,1 ); Serial.write(9);   
Serial.print("RHOp: ");
Serial.print(DHT11.humidity ); Serial.write(9);
Serial.print("TempNed: ");
Serial.print(DHT11b.temperature,1 ); Serial.write(9);
Serial.print("RHNed: ");
Serial.println(DHT11b.humidity);

Serial.print("Lux: ");
Serial.print(lux,1 ); Serial.write(9);
Serial.print("WLvlLeft: ");
Serial.print(WLevelLeft,1 ); Serial.write(9);
Serial.print("WTempLeft: ");
Serial.print(WTempLeft,1 ); Serial.write(9);
Serial.print("WLevelRight: ");
Serial.println(WLevelRight,1);

Serial.print("WTempRight: ");
Serial.print(WTempRight,1 ); Serial.write(9);
Serial.print("Pressure: ");
Serial.println(p0,1);

Serial.print("WTresPlant1: ");
Serial.print(WTPlant1 ); Serial.write(9);
Serial.print("WTresPlant2: ");
Serial.print(WTPlant2 ); Serial.write(9);
Serial.print("WTresPlant3: ");
Serial.print(WTPlant3 ); Serial.write(9);
Serial.print("WTresPlant4: ");
Serial.println(WTPlant4);

Serial.print("WTresPlant5: ");
Serial.print(WTPlant5 ); Serial.write(9);
Serial.print("WTresPlant6: ");
Serial.print(WTPlant6 ); Serial.write(9);
Serial.print("WTresPlant7: ");
Serial.print(WTPlant7 ); Serial.write(9);
Serial.print("WTresPlant8: ");
Serial.println(WTPlant8);

Serial.print("WTresPlant9: ");
Serial.println(WTPlant9);

Serial.print("SoilRouInt: ");
Serial.print(SRPlantInt ); Serial.write(9);
Serial.print("MiscRouInt: ");
Serial.print(MiscRoutinesInterval ); Serial.write(9);
Serial.print("PlantRouInt: ");
Serial.println(BlynkRoutinesInterval);

Serial.print("Pump1Time: ");
Serial.print(Pump1Int ); Serial.write(9);
Serial.print("Pump2Time: ");
Serial.print(Pump2Int ); Serial.write(9);
Serial.print("Pump3Time: ");
Serial.print(Pump3Int ); Serial.write(9);
Serial.print("Pump4Time: ");
Serial.println(Pump4Int);

Serial.print("Pump5Time: ");
Serial.print(Pump5Int ); Serial.write(9);
Serial.print("Pump6Time: ");
Serial.print(Pump6Int ); Serial.write(9);
Serial.print("Pump7Time: ");
Serial.print(Pump7Int ); Serial.write(9);
Serial.print("Pump8Time: ");
Serial.println(Pump8Int);

Serial.print("Pump9Time: ");
Serial.println(Pump9Int);

}




