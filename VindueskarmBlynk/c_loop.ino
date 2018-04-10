void loop() {

  if(!PumpPowerReady){
    timenow = millis();
    if(timenow > PumpActiveTime){
      digitalWrite(WhatPumpActive, LOW);
      PumpPowerReady = true;
    }
  }

////////////////////
//BLYNK ROUTINES
////////////////////

  recvWithStartEndMarkers();

    if (newData == true) {
    Serial.println(receivedChars);
    strcpy(tempChars, receivedChars);
    // this temporary copy is necessary to protect the original data
    //   because strtok() used in parseData() replaces the commas with \0
    parseData();
    
    Serial.print("BTCommand1: ");
    Serial.println(BluetoothCommand1);
    Serial.print("BTCommand2: ");
    Serial.println(BluetoothCommand2);
    Serial.print("BTCommand3: ");
    Serial.println(BluetoothCommand3);
    Serial.print("BTCommand4: ");
    Serial.println(BluetoothCommand4);
    
    proccessBTCommands();    
    newData = false;
  }

//////////////////
//READING ROUTINES
//////////////////

//READING OF SOIL MOISTURE
if(now() - LSCPlant1 >= SRPlantInt * 60 ){

  moistureSampling(PPlant1);
  LSCPlant1 = LSCPlant1 = now();
}
if(now() - LSCPlant2 >= SRPlantInt * 60 ){

  moistureSampling(PPlant2);
  LSCPlant2 = LSCPlant2 = now();
}
if(now() - LSCPlant3 >= SRPlantInt * 60 ){

  moistureSampling(PPlant3);
  LSCPlant3 = LSCPlant3 = now();
}
if(now() - LSCPlant4 >= SRPlantInt * 60 ){

  moistureSampling(PPlant4);
  LSCPlant4 = LSCPlant4 = now();
}
if(now() - LSCPlant5 >= SRPlantInt * 60 ){

  moistureSampling(PPlant5);
  LSCPlant5 = LSCPlant5 = now();
}
if(now() - LSCPlant6 >= SRPlantInt * 60 ){

  moistureSampling(PPlant6);
  LSCPlant6 = LSCPlant6 = now();
}
if(now() - LSCPlant7 >= SRPlantInt * 60 ){

  moistureSampling(PPlant7);
  LSCPlant7 = LSCPlant7 = now();
}
if(now() - LSCPlant8 >= SRPlantInt * 60 ){

  moistureSampling(PPlant8);
  LSCPlant8 = LSCPlant8 = now();
}
if(now() - LSCPlant9 >= SRPlantInt * 60 ){

  moistureSampling(PPlant9);
  LSCPlant9 = LSCPlant9 = now();
}
if(now() - LSCPlant10 >= SRPlantInt * 60 ){

  moistureSampling(PPlant10);
  LSCPlant10 = LSCPlant10 = now();
}
if(now() - LSCPlant11 >= SRPlantInt * 60 ){

  moistureSampling(PPlant11);
  LSCPlant1 = LSCPlant11 = now();
}
if(now() - LSCPlant12 >= SRPlantInt * 60 ){

  moistureSampling(PPlant12);
  LSCPlant12 = LSCPlant12 = now();
}
if(now() - LSCPlant13 >= SRPlantInt * 60 ){

  moistureSampling(PPlant13);
  LSCPlant13 = LSCPlant13 = now();
}
if(now() - LSCPlant14 >= SRPlantInt * 60 ){

  moistureSampling(PPlant14);
  LSCPlant14 = LSCPlant14 = now();
}

///////////////////
//WATERING ROUTINES
///////////////////

if( (now() - LWPlant1 >= SWPlant1Int * 60 ) && (WTPlant1 > SMPlant1Map) && (WTPlant1 > 0) && (PumpPowerReady)  ){

  Watering(SPump1, Pump1Int);
  
  LWPlant1 = LWPlant1 = now();
  
}
if( (now() - LWPlant2 >= SWPlant2Int * 60 ) && (WTPlant2 > SMPlant2Map) && (WTPlant2 > 0) && (PumpPowerReady) ){

  Watering(SPump2, Pump2Int);
  
  LWPlant2 = LWPlant2 = now();

}
if( (now() - LWPlant3 >= SWPlant3Int * 60 ) && (WTPlant3 > SMPlant3Map) && (WTPlant3 > 0) && (PumpPowerReady) ){

  Watering(SPump3, Pump3Int);
  
  LWPlant3 = LWPlant3 = now();
  LWPlant4 = LWPlant4 = now();
  
}
if( (now() - LWPlant4 >= SWPlant4Int * 60 ) && (WTPlant3 > SMPlant4Map) && (WTPlant3 > 0) && (PumpPowerReady) ){

  Watering(SPump3, Pump3Int);

  LWPlant3 = LWPlant3 = now();
  LWPlant4 = LWPlant4 = now();
  
}
if( (now() - LWPlant5 >= SWPlant5Int * 60 ) && (WTPlant4 > SMPlant5Map) && (WTPlant4 > 0) && (PumpPowerReady) ){

  Watering(SPump4, Pump4Int);
  
  LWPlant5 = LWPlant5 = now();
  LWPlant6 = LWPlant6 = now();
  
}
if( (now() - LWPlant6 >= SWPlant6Int * 60 ) && (WTPlant4 > SMPlant6Map) && (WTPlant4 > 0) && (PumpPowerReady) ){

  Watering(SPump4, Pump4Int);

  LWPlant5 = LWPlant5 = now();
  LWPlant6 = LWPlant6 = now();
  
}
if( (now() - LWPlant7 >= SWPlant7Int * 60 ) && (WTPlant5 > SMPlant7Map) && (WTPlant5 > 0) && (PumpPowerReady) ){

  Watering(SPump5, Pump5Int);
  
  LWPlant7 = LWPlant7 = now();
  
}
if( (now() - LWPlant8 >= SWPlant8Int * 60 ) && (WTPlant6 > SMPlant8Map) && (WTPlant6 > 0) && (PumpPowerReady) ){

  Watering(SPump6, Pump6Int);
  
  LWPlant8 = LWPlant8 = now();
  
}
if( (now() - LWPlant9 >= SWPlant9Int * 60 ) && (WTPlant7 > SMPlant9Map) && (WTPlant7 > 0) && (PumpPowerReady) ){

  Watering(SPump7, Pump7Int);
  
  LWPlant9 = LWPlant9 = now();
  
}
if( (now() - LWPlant10 >= SWPlant10Int * 60 ) && (WTPlant8 > SMPlant10Map) && (WTPlant8 > 0) && (PumpPowerReady) ){

  Watering(SPump8, Pump8Int);
  
  LWPlant10 = LWPlant10 = now();
  
}
if( (now() - LWPlant11 >= SWPlant11Int * 60 ) && (WTPlant9 > SMPlant11Map) && (WTPlant9 > 0) && (PumpPowerReady) ){

  Watering(SPump9, Pump9Int);
  
  LWPlant11 = LWPlant11 = now();
  LWPlant12 = LWPlant12 = now();
  LWPlant13 = LWPlant13 = now();
  LWPlant14 = LWPlant14 = now();
  
}
if( (now() - LWPlant12 >= SWPlant12Int * 60 ) && (WTPlant9 > SMPlant12Map) && (WTPlant9 > 0) && (PumpPowerReady) ){

  Watering(SPump9, Pump9Int);
  
  LWPlant11 = LWPlant11 = now();
  LWPlant12 = LWPlant12 = now();
  LWPlant13 = LWPlant13 = now();
  LWPlant14 = LWPlant14 = now();
  
}
if( (now() - LWPlant13 >= SWPlant13Int * 60 ) && (WTPlant9 > SMPlant13Map) && (WTPlant9 > 0) && (PumpPowerReady) ){

  Watering(SPump9, Pump9Int);
  
  LWPlant11 = LWPlant11 = now();
  LWPlant12 = LWPlant12 = now();
  LWPlant13 = LWPlant13 = now();
  LWPlant14 = LWPlant14 = now();
  
}
if( (now() - LWPlant14 >= SWPlant14Int * 60 ) && (WTPlant9 > SMPlant14Map) && (WTPlant9 > 0) && (PumpPowerReady) ){

  Watering(SPump9, Pump9Int);
  
  LWPlant11 = LWPlant11 = now();
  LWPlant12 = LWPlant12 = now();
  LWPlant13 = LWPlant13 = now();
  LWPlant14 = LWPlant14 = now();
  
}

///////////////////////////
/////  MISC ROUTINES  /////
///////////////////////////

if(now() - LRMiscRoutines >= MiscRoutinesInterval * 60 ){

  WLevelLeftAnalog = sonar1.ping();           //CHECKING WATER LEVEL LEFT
  WLevelRightAnalog = sonar2.ping();          //CHECKING WATER LEVEL RIGHT
  WLevelLeft = 10.121661060256214911 -  ( 0.011720718714471571397 * WLevelLeftAnalog );
  WLevelRight = 9.5942287181049941982 - ( 0.011720718714471571397 * WLevelRightAnalog );
  
  TempRHSampling();                       //CHECKING TEMP AND RH
  GetLux();                               //CHECK LUX LEVEL
  ReadPressure();                         //CHECK PRESSURE LEVEL
    
  sensors.requestTemperatures();
  WTempLeft = sensors.getTempC(ThermometerLeft);
  WTempRight = sensors.getTempC(ThermometerRight);
  
  
  LRMiscRoutines = LRMiscRoutines = now();
}

if(now() - LRBlynkRoutines >= BlynkRoutinesInterval * 1 ){

  //USBDEBUG();
  WriteToESP();                           //SEND LOGS TO NODEMCU (BLYNK)
  
  LRBlynkRoutines = LRBlynkRoutines = now();
}





}

