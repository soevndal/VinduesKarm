/* Comment this out to disable prints and save space */
//#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "";
char pass[] = "";

unsigned long timenow;
int NodeMCULoops;
int Loops;
unsigned long LastLoopMillis;

int StatusLedTime;

const byte numChars = 255;
char receivedChars[numChars];
char tempChars[numChars];        // temporary array for use when parsing
boolean newData = false;
// variables to hold the parsed data
//char messageFromPC[numChars] = {0};

char SMPlant1[ ] = "derp";
char LWPlant1[ ] = "derp";
char SMPlant2[ ] = "derp";
char LWPlant2[ ] = "derp";
char SMPlant3[ ] = "derp";
char LWPlant3[ ] = "derp";
char SMPlant4[ ] = "derp";
char LWPlant4[ ] = "derp";
char SMPlant5[ ] = "derp";
char LWPlant5[ ] = "derp";
char SMPlant6[ ] = "derp";
char LWPlant6[ ] = "derp";
char SMPlant7[ ] = "derp";
char LWPlant7[ ] = "derp";
char SMPlant8[ ] = "derp";
char LWPlant8[ ] = "derp";
char SMPlant9[ ] = "derp";
char LWPlant9[ ] = "derp";
char SMPlant10[ ] = "derp";
char SMPlant11[ ] = "derp";
char SMPlant12[ ] = "derp";
char SMPlant13[ ] = "derp";
char SMPlant14[ ] = "derp";
char TempLow[ ] = "derpderp";
char RHLow[ ] = "derp";
char TempHigh[ ] = "derpderp";
char RHHigh[ ] = "derp";
char LuxLvl[ ] = "derpderp";
char WaterLvlLeft[ ] = "derpderp";
char WaterTempLeft[ ] = "derpderp";
char WaterLvlRight[ ] = "derpderp";
char WaterTempRight[ ] = "derpderp";
char Pressure[ ] = "derpderp";
char WTPlant1[ ] = "derp";
char WTPlant2[ ] = "derp";
char WTPlant3[ ] = "derp";
char WTPlant4[ ] = "derp";
char WTPlant5[ ] = "derp";
char WTPlant6[ ] = "derp";
char WTPlant7[ ] = "derp";
char WTPlant8[ ] = "derp";
char WTPlant9[ ] = "derp";
char TimePump1[ ] = "derp";
char TimePump2[ ] = "derp";
char TimePump3[ ] = "derp";
char TimePump4[ ] = "derp";
char TimePump5[ ] = "derp";
char TimePump6[ ] = "derp";
char TimePump7[ ] = "derp";
char TimePump8[ ] = "derp";
char TimePump9[ ] = "derp";
char TIBlynkData[ ] = "derp";
char TISurroundings[ ] = "derp";
char TIHumidity[ ] = "derp";

char OldSMPlant1[ ] = "derp";
char OldLWPlant1[ ] = "derp";
char OldSMPlant2[ ] = "derp";
char OldLWPlant2[ ] = "derp";
char OldSMPlant3[ ] = "derp";
char OldLWPlant3[ ] = "derp";
char OldSMPlant4[ ] = "derp";
char OldLWPlant4[ ] = "derp";
char OldSMPlant5[ ] = "derp";
char OldLWPlant5[ ] = "derp";
char OldSMPlant6[ ] = "derp";
char OldLWPlant6[ ] = "derp";
char OldSMPlant7[ ] = "derp";
char OldLWPlant7[ ] = "derp";
char OldSMPlant8[ ] = "derp";
char OldLWPlant8[ ] = "derp";
char OldSMPlant9[ ] = "derp";
char OldLWPlant9[ ] = "derp";
char OldSMPlant10[ ] = "derp";
char OldSMPlant11[ ] = "derp";
char OldSMPlant12[ ] = "derp";
char OldSMPlant13[ ] = "derp";
char OldSMPlant14[ ] = "derp";
char OldTempLow[ ] = "derpderp";
char OldRHLow[ ] = "derp";
char OldTempHigh[ ] = "derpderp";
char OldRHHigh[ ] = "derp";
char OldLuxLvl[ ] = "derpderp";
char OldWaterLvlLeft[ ] = "derpderp";
char OldWaterTempLeft[ ] = "derpderp";
char OldWaterLvlRight[ ] = "derpderp";
char OldWaterTempRight[ ] = "derpderp";
char OldPressure[ ] = "derpderp";
char OldWTPlant1[ ] = "derp";
char OldWTPlant2[ ] = "derp";
char OldWTPlant3[ ] = "derp";
char OldWTPlant4[ ] = "derp";
char OldWTPlant5[ ] = "derp";
char OldWTPlant6[ ] = "derp";
char OldWTPlant7[ ] = "derp";
char OldWTPlant8[ ] = "derp";
char OldWTPlant9[ ] = "derp";
char OldTimePump1[ ] = "derp";
char OldTimePump2[ ] = "derp";
char OldTimePump3[ ] = "derp";
char OldTimePump4[ ] = "derp";
char OldTimePump5[ ] = "derp";
char OldTimePump6[ ] = "derp";
char OldTimePump7[ ] = "derp";
char OldTimePump8[ ] = "derp";
char OldTimePump9[ ] = "derp";
char OldTIBlynkData[ ] = "derp";
char OldTISurroundings[ ] = "derp";
char OldTIHumidity[ ] = "derp";


BLYNK_WRITE(V23) {    //FWPump1
  if (param.asInt() == 10) {
    Serial.println("<fww:fww:pump1:>");          //Send command to arduino over serial
  }
}
BLYNK_WRITE(V24) {    //FWPump2
  if (param.asInt() == 10) {
    Serial.println("<fww:fww:pump2:>");          //Send command to arduino over serial
  }
}
BLYNK_WRITE(V25) {    //FWPump3
  if (param.asInt() == 10) {
    Serial.println("<fww:fww:pump3:>");          //Send command to arduino over serial
  }
}
BLYNK_WRITE(V26) {    //FWPump4
  if (param.asInt() == 10) {
    Serial.println("<fww:fww:pump4:>");          //Send command to arduino over serial    
  }
}
BLYNK_WRITE(V27) {    //FWPump5
  if (param.asInt() == 10) {
    Serial.println("<fww:fww:pump5:>");          //Send command to arduino over serial
  }
}
BLYNK_WRITE(V28) {    //FWPump6
  if (param.asInt() == 10) {
    Serial.println("<fww:fww:pump6:>");          //Send command to arduino over serial  
  }
}
BLYNK_WRITE(V29) {    //FWPump7
  if (param.asInt() == 10) {
    Serial.println("<fww:fww:pump7:>");          //Send command to arduino over serial
  }
}
BLYNK_WRITE(V30) {    //FWPump8
  if (param.asInt() == 10) {
    Serial.println("<fww:fww:pump8:>");          //Send command to arduino over serial 
  }
}
BLYNK_WRITE(V31) {    //FWPump9
  if (param.asInt() == 10) {
    Serial.println("<fww:fww:pump9:>");          //Send command to arduino over serial
  }
}

BLYNK_WRITE(V44) {    //SWTPlant1
  int value = param.asInt();
  Serial.print("<wtt:wtt:plant1:");
  Serial.print(value);
  Serial.println(":>");       //Send command to arduino over serial
  
}
BLYNK_WRITE(V45) {    //SWTPlant2
  int value = param.asInt();
  Serial.print("<wtt:wtt:plant2:");
  Serial.print(value);
  Serial.println(":>");          //Send command to arduino over serial  
}
BLYNK_WRITE(V46) {    //SWTPlant3
  int value = param.asInt();
  Serial.print("<wtt:wtt:plant3:");
  Serial.print(value);
  Serial.println(":>");          //Send command to arduino over serial
}
BLYNK_WRITE(V47) {    //SWTPlant4 
  int value = param.asInt();
  Serial.print("<wtt:wtt:plant4:");
  Serial.print(value);
  Serial.println(":>");          //Send command to arduino over serial
}
BLYNK_WRITE(V48) {    //SWTPlant5
  int value = param.asInt();
  Serial.print("<wtt:wtt:plant5:");
  Serial.print(value);
  Serial.println(":>");          //Send command to arduino over serial
}  
BLYNK_WRITE(V49) {    //SWTPlant6
  int value = param.asInt();
  Serial.print("<wtt:wtt:plant6:");
  Serial.print(value);
  Serial.println(":>");          //Send command to arduino over serial
}
BLYNK_WRITE(V50) {    //SWTPlant7
  int value = param.asInt();
  Serial.print("<wtt:wtt:plant7:");
  Serial.print(value);
  Serial.println(":>");          //Send command to arduino over serial
}
BLYNK_WRITE(V51) {    //SWTPlant8
  int value = param.asInt();
  Serial.print("<wtt:wtt:plant8:");
  Serial.print(value);
  Serial.println(":>");          //Send command to arduino over serial
}
BLYNK_WRITE(V52) {    //SWTPlant9
  int value = param.asInt(); 
  Serial.print("<wtt:wtt:plant9:");
  Serial.print(value);
  Serial.println(":>");          //Send command to arduino over serial
}
  
BLYNK_WRITE(V53) {    //SetPumpTime1
  int value = param.asInt();   
  Serial.print("<tpp:tpp:pump1:");  
  Serial.print(value);  
  Serial.println(":>");          //Send command to arduino over serial
}
BLYNK_WRITE(V54) {    //SetPumpTime2
  int value = param.asInt(); 
  Serial.print("<tpp:tpp:pump2:");  
  Serial.print(value);  
  Serial.println(":>");          //Send command to arduino over serial
}
BLYNK_WRITE(V55) {    //SetPumpTime3
  int value = param.asInt();    
  Serial.print("<tpp:tpp:pump3:");  
  Serial.print(value);  
  Serial.println(":>");          //Send command to arduino over serial
}
BLYNK_WRITE(V56) {    //SetPumpTime4
  int value = param.asInt();   
  Serial.print("<tpp:tpp:pump4:");  
  Serial.print(value);  
  Serial.println(":>");          //Send command to arduino over serial
}
BLYNK_WRITE(V57) {    //SetPumpTime5
  int value = param.asInt(); 
  Serial.print("<tpp:tpp:pump5:");  
  Serial.print(value);  
  Serial.println(":>");          //Send command to arduino over serial
}
BLYNK_WRITE(V58) {    //SetPumpTime6
  int value = param.asInt(); 
  Serial.print("<tpp:tpp:pump6:");  
  Serial.print(value);  
  Serial.println(":>");          //Send command to arduino over serial
}
BLYNK_WRITE(V59) {    //SetPumpTime7
  int value = param.asInt(); 
  Serial.print("<tpp:tpp:pump7:");  
  Serial.print(value);  
  Serial.println(":>");          //Send command to arduino over serial
}
BLYNK_WRITE(V60) {    //SetPumpTime8
  int value = param.asInt(); 
  Serial.print("<tpp:tpp:pump8:");  
  Serial.print(value);  
  Serial.println(":>");          //Send command to arduino over serial
}
BLYNK_WRITE(V61) {    //SetPumpTime9
  int value = param.asInt(); 
  Serial.print("<tpp:tpp:pump9:");  
  Serial.print(value);  
  Serial.println(":>");          //Send command to arduino over serial
}
  
BLYNK_WRITE(V63) {    //SET SOIL READING TIME
  int value = param.asInt(); 
  Serial.print("<set:hum:");
  Serial.print(value);
  Serial.println(":>");          //Send command to arduino over serial
}
BLYNK_WRITE(V64) {    //SET SURROUNDINGS READING TIME
  int value = param.asInt(); 
  Serial.print("<set:sur:");
  Serial.print(value);
  Serial.println(":>");          //Send command to arduino over serial 
}
BLYNK_WRITE(V62) {    //SET BLYNK POST DATA TIME
  int value = param.asInt(); 
  Serial.print("<set:bly:");
  Serial.print(value);
  Serial.println(":>");          //Send command to arduino over serial
}

void setup()
{
  Serial.begin(115200);

  //Blynk.begin(auth, ssid, pass, "blynk-cloud.com", 8442);
  Blynk.begin(auth, ssid, pass, IPAddress(192,168,1,145), 8080);

 // ESP.wdtDisable();
 // ESP.wdtEnable(WDTO_8S);
}

void loop()
{

 // ESP.wdtFeed();
  
  recvWithStartEndMarkers();
    
  if (newData == true) {
   strcpy(tempChars, receivedChars);
   //Serial.println(receivedChars);    //DEBUG
   //Serial.println(tempChars);
    // this temporary copy is necessary to protect the original data
    //   because strtok() used in parseData() replaces the commas with \0
    parseData();
    //USBDEBUG();                       //DEBUG
    posttoblynk();  
    newData = false;
  }
    
  Blynk.run();

  Loops++;
  timenow = millis();
  if(timenow - LastLoopMillis > 1000){
    NodeMCULoops = Loops;
    Blynk.virtualWrite(V43, NodeMCULoops);
    LastLoopMillis = timenow;
    Loops = 0;
  }
 
 
}


void posttoblynk()
{
  if(strcmp(SMPlant1,OldSMPlant1)==0){
    //Do nothing
  }else{
    Blynk.virtualWrite(V0, SMPlant1);
    strcpy(OldSMPlant1, SMPlant1);
  }
  if(strcmp(SMPlant2,OldSMPlant2)==0){
    //Do nothing
  }else{
    Blynk.virtualWrite(V1, SMPlant2);
    strcpy(OldSMPlant2, SMPlant2);
  }
  if(strcmp(SMPlant3,OldSMPlant3)==0){
    //Do nothing
  }else{
    Blynk.virtualWrite(V2, SMPlant3);
    strcpy(OldSMPlant3, SMPlant3);
  }  
  if(strcmp(SMPlant4,OldSMPlant4)==0){
    //Do nothing
  }else{
    Blynk.virtualWrite(V3, SMPlant4);
    strcpy(OldSMPlant4, SMPlant4);
  }
  if(strcmp(SMPlant5,OldSMPlant5)==0){
    //Do nothing
  }else{
    Blynk.virtualWrite(V4, SMPlant5);
    strcpy(OldSMPlant5, SMPlant5);
  }
  if(strcmp(SMPlant6,OldSMPlant6)==0){
    //Do nothing
  }else{
    Blynk.virtualWrite(V5, SMPlant6);
    strcpy(OldSMPlant6, SMPlant6);
  }
  if(strcmp(SMPlant7,OldSMPlant7)==0){
    //Do nothing
  }else{
    Blynk.virtualWrite(V6, SMPlant7);
    strcpy(OldSMPlant7, SMPlant7);
  }
  if(strcmp(SMPlant8,OldSMPlant8)==0){
    //Do nothing
  }else{
    Blynk.virtualWrite(V7, SMPlant8);
    strcpy(OldSMPlant8, SMPlant8);
  }
  if(strcmp(SMPlant9,OldSMPlant9)==0){
    //Do nothing
  }else{
    Blynk.virtualWrite(V8, SMPlant9);
    strcpy(OldSMPlant9, SMPlant9);
  }
  if(strcmp(SMPlant10,OldSMPlant10)==0){
    //Do nothing
  }else{
    Blynk.virtualWrite(V9, SMPlant10);
    strcpy(OldSMPlant10, SMPlant10);
  }
  if(strcmp(SMPlant11,OldSMPlant11)==0){
    //Do nothing
  }else{
    Blynk.virtualWrite(V10, SMPlant11);
    strcpy(OldSMPlant11, SMPlant11);
  }
  if(strcmp(SMPlant12,OldSMPlant12)==0){
    //Do nothing
  }else{
    Blynk.virtualWrite(V11, SMPlant12);
    strcpy(OldSMPlant12, SMPlant12);
  }
  if(strcmp(SMPlant13,OldSMPlant13)==0){
    //Do nothing
  }else{
    Blynk.virtualWrite(V12, SMPlant13);
    strcpy(OldSMPlant13, SMPlant13);
  }
  if(strcmp(SMPlant14,OldSMPlant14)==0){
    //Do nothing
  }else{
    Blynk.virtualWrite(V13, SMPlant14);
    strcpy(OldSMPlant14, SMPlant14);
  }

  if(strcmp(LWPlant1,OldLWPlant1)==0){
    //Do nothing
  }else{
    Blynk.virtualWrite(V14, LWPlant1);
    strcpy(OldLWPlant1, LWPlant1);
  }
  if(strcmp(LWPlant2,OldLWPlant2)==0){
    //Do nothing
  }else{
    Blynk.virtualWrite(V15, LWPlant2);
    strcpy(OldLWPlant2, LWPlant2);
  }
  if(strcmp(LWPlant3,OldLWPlant3)==0){
    //Do nothing
  }else{
    Blynk.virtualWrite(V16, LWPlant3);
    strcpy(OldLWPlant3, LWPlant3);
  }
  if(strcmp(LWPlant4,OldLWPlant4)==0){
    //Do nothing
  }else{
    Blynk.virtualWrite(V17, LWPlant4);
    strcpy(OldLWPlant4, LWPlant4);
  }
  if(strcmp(LWPlant5,OldLWPlant5)==0){
    //Do nothing
  }else{
    Blynk.virtualWrite(V18, LWPlant5);
    strcpy(OldLWPlant5, LWPlant5);
  }  
  if(strcmp(LWPlant6,OldLWPlant6)==0){
    //Do nothing
  }else{
    Blynk.virtualWrite(V19, LWPlant6);
    strcpy(OldLWPlant6, LWPlant6);
  }
  if(strcmp(LWPlant7,OldLWPlant7)==0){
    //Do nothing
  }else{
    Blynk.virtualWrite(V20, LWPlant7);
    strcpy(OldLWPlant7, LWPlant7);
  }
  if(strcmp(LWPlant8,OldLWPlant8)==0){
    //Do nothing
  }else{
    Blynk.virtualWrite(V21, LWPlant8);
    strcpy(OldLWPlant8, LWPlant8);
  }
  if(strcmp(LWPlant9,OldLWPlant9)==0){
    //Do nothing
  }else{
    Blynk.virtualWrite(V22, LWPlant9);
    strcpy(OldLWPlant9, LWPlant9);
  }

  if(strcmp(TempLow,OldTempLow)==0){
    //Do nothing
  }else{
    Blynk.virtualWrite(V34, TempLow);
    strcpy(OldTempLow, TempLow);
  }
  if(strcmp(RHLow,OldRHLow)==0){
    //Do nothing
  }else{
    Blynk.virtualWrite(V35, RHLow);
    strcpy(OldRHLow, RHLow);
  }

  if(strcmp(TempHigh,OldTempHigh)==0){
    //Do nothing
  }else{
    Blynk.virtualWrite(V32, TempHigh);
    strcpy(OldTempHigh, TempHigh);
  }
  if(strcmp(RHHigh,OldRHHigh)==0){
    //Do nothing
  }else{
    Blynk.virtualWrite(V33, RHHigh);
    strcpy(OldRHHigh, RHHigh);
  }

  if(strcmp(LuxLvl,OldLuxLvl)==0){
    //Do nothing
  }else{
    Blynk.virtualWrite(V36, LuxLvl);
    strcpy(OldLuxLvl, LuxLvl);
  }

  if(strcmp(WaterLvlLeft,OldWaterLvlLeft)==0){
    //Do nothing
  }else{
    Blynk.virtualWrite(V37, WaterLvlLeft);
    strcpy(OldWaterLvlLeft, WaterLvlLeft);
  }
  if(strcmp(WaterTempLeft,OldWaterTempLeft)==0){
    //Do nothing
  }else{
    Blynk.virtualWrite(V38, WaterTempLeft);
    strcpy(OldWaterTempLeft, WaterTempLeft);
  }
  
  if(strcmp(WaterLvlRight,OldWaterLvlRight)==0){
    //Do nothing
  }else{
    Blynk.virtualWrite(V39, WaterLvlRight);
    strcpy(OldWaterLvlRight, WaterLvlRight);
  }
  if(strcmp(WaterTempRight,OldWaterTempRight)==0){
    //Do nothing
  }else{
    Blynk.virtualWrite(V40, WaterTempRight);
    strcpy(OldWaterTempRight, WaterTempRight);
  }

  if(strcmp(Pressure,OldPressure)==0){
    //Do nothing
  }else{
    Blynk.virtualWrite(V41, Pressure);
    strcpy(OldPressure, Pressure);
  }

  if(strcmp(WTPlant1,OldWTPlant1)==0){
    //Do nothing
  }else{
    Blynk.virtualWrite(V44, WTPlant1);
    strcpy(OldWTPlant1, WTPlant1);
  }
  if(strcmp(WTPlant2,OldWTPlant2)==0){
    //Do nothing
  }else{
    Blynk.virtualWrite(V45, WTPlant2);
    strcpy(OldWTPlant2, WTPlant2);
  }
  if(strcmp(WTPlant3,OldWTPlant3)==0){
    //Do nothing
  }else{
    Blynk.virtualWrite(V46, WTPlant3);
    strcpy(OldWTPlant3, WTPlant3);
  }
  if(strcmp(WTPlant4,OldWTPlant4)==0){
    //Do nothing
  }else{
    Blynk.virtualWrite(V47, WTPlant4);
    strcpy(OldWTPlant4, WTPlant4);
  }
  if(strcmp(WTPlant5,OldWTPlant5)==0){
    //Do nothing
  }else{
    Blynk.virtualWrite(V48, WTPlant5);
    strcpy(OldWTPlant5, WTPlant5);
  }
  if(strcmp(WTPlant6,OldWTPlant6)==0){
    //Do nothing
  }else{
    Blynk.virtualWrite(V49, WTPlant6);
    strcpy(OldWTPlant6, WTPlant6);
  }
  if(strcmp(WTPlant7,OldWTPlant7)==0){
    //Do nothing
  }else{
    Blynk.virtualWrite(V50, WTPlant7);
    strcpy(OldWTPlant7, WTPlant7);
  }
  if(strcmp(WTPlant8,OldWTPlant8)==0){
    //Do nothing
  }else{
    Blynk.virtualWrite(V51, WTPlant8);
    strcpy(OldWTPlant8, WTPlant8);
  }
  if(strcmp(WTPlant9,OldWTPlant9)==0){
    //Do nothing
  }else{
    Blynk.virtualWrite(V52, WTPlant9);
    strcpy(OldWTPlant9, WTPlant9);
  }

  if(strcmp(TIHumidity,OldTIHumidity)==0){
    //Do nothing
  }else{
    Blynk.virtualWrite(V63, TIHumidity);
    strcpy(OldTIHumidity, TIHumidity);
  }
  if(strcmp(TISurroundings,OldTISurroundings)==0){
    //Do nothing
  }else{
    Blynk.virtualWrite(V64, TISurroundings);
    strcpy(OldTISurroundings, TISurroundings);
  }
  if(strcmp(TIBlynkData,OldTIBlynkData)==0){
    //Do nothing
  }else{
    Blynk.virtualWrite(V62, TIBlynkData);
    strcpy(OldTIBlynkData, TIBlynkData);
  }

  if(strcmp(TimePump1,OldTimePump1)==0){
    //Do nothing
  }else{
    Blynk.virtualWrite(V53, TimePump1);
    strcpy(OldTimePump1, TimePump1);
  }
  if(strcmp(TimePump2,OldTimePump2)==0){
    //Do nothing
  }else{
    Blynk.virtualWrite(V54, TimePump2);
    strcpy(OldTimePump2, TimePump2);
  }
  if(strcmp(TimePump3,OldTimePump3)==0){
    //Do nothing
  }else{
    Blynk.virtualWrite(V55, TimePump3);
    strcpy(OldTimePump3, TimePump3);
  }
  if(strcmp(TimePump4,OldTimePump4)==0){
    //Do nothing
  }else{
    Blynk.virtualWrite(V56, TimePump4);
    strcpy(OldTimePump4, TimePump4);
  }
  if(strcmp(TimePump5,OldTimePump5)==0){
    //Do nothing
  }else{
    Blynk.virtualWrite(V57, TimePump5);
    strcpy(OldTimePump5, TimePump5);
  }
  if(strcmp(TimePump6,OldTimePump6)==0){
    //Do nothing
  }else{
    Blynk.virtualWrite(V58, TimePump6);
    strcpy(OldTimePump6, TimePump6);
  }
  if(strcmp(TimePump7,OldTimePump7)==0){
    //Do nothing
  }else{
    Blynk.virtualWrite(V59, TimePump7);
    strcpy(OldTimePump7, TimePump7);
  }
  if(strcmp(TimePump8,OldTimePump8)==0){
    //Do nothing
  }else{
    Blynk.virtualWrite(V60, TimePump8);
    strcpy(OldTimePump8, TimePump8);
  }
  if(strcmp(TimePump9,OldTimePump9)==0){
    //Do nothing
  }else{
    Blynk.virtualWrite(V61, TimePump9);
    strcpy(OldTimePump9, TimePump9);
  }

  
}

void recvWithStartEndMarkers() {
    static boolean recvInProgress = false;
    static byte ndx = 0;
    char startMarker = '<';
    char endMarker = '>';
    char rc;

    while (Serial.available() > 0 && newData == false) {
        rc = Serial.read();

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

  char * strtokIndx; // this is used by strtok() as an index

  strtokIndx = strtok(tempChars,":");      // get the first part - the string
  strcpy(SMPlant1, strtokIndx);  
  strtokIndx = strtok(NULL, ":"); // this continues where the previous call left off
  strcpy(SMPlant2, strtokIndx);
  strtokIndx = strtok(NULL, ":"); // this continues where the previous call left off
  strcpy(SMPlant3, strtokIndx);
  strtokIndx = strtok(NULL, ":"); // this continues where the previous call left off
  strcpy(SMPlant4, strtokIndx);
  strtokIndx = strtok(NULL, ":"); // this continues where the previous call left off
  strcpy(SMPlant5, strtokIndx);
  strtokIndx = strtok(NULL, ":"); // this continues where the previous call left off
  strcpy(SMPlant6, strtokIndx);
  strtokIndx = strtok(NULL, ":"); // this continues where the previous call left off
  strcpy(SMPlant7, strtokIndx);
  strtokIndx = strtok(NULL, ":"); // this continues where the previous call left off
  strcpy(SMPlant8, strtokIndx);
  strtokIndx = strtok(NULL, ":"); // this continues where the previous call left off
  strcpy(SMPlant9, strtokIndx);
  strtokIndx = strtok(NULL, ":"); // this continues where the previous call left off
  strcpy(SMPlant10, strtokIndx);
  strtokIndx = strtok(NULL, ":"); // this continues where the previous call left off
  strcpy(SMPlant11, strtokIndx);
  strtokIndx = strtok(NULL, ":"); // this continues where the previous call left off
  strcpy(SMPlant12, strtokIndx);
  strtokIndx = strtok(NULL, ":"); // this continues where the previous call left off
  strcpy(SMPlant13, strtokIndx);
  strtokIndx = strtok(NULL, ":"); // this continues where the previous call left off
  strcpy(SMPlant14, strtokIndx);
  strtokIndx = strtok(NULL, ":"); // this continues where the previous call left off
  strcpy(LWPlant1, strtokIndx);
  strtokIndx = strtok(NULL, ":"); // this continues where the previous call left off
  strcpy(LWPlant2, strtokIndx);
  strtokIndx = strtok(NULL, ":"); // this continues where the previous call left off
  strcpy(LWPlant3, strtokIndx);
  strtokIndx = strtok(NULL, ":"); // this continues where the previous call left off
  strcpy(LWPlant4, strtokIndx);
  strtokIndx = strtok(NULL, ":"); // this continues where the previous call left off
  strcpy(LWPlant5, strtokIndx);
  strtokIndx = strtok(NULL, ":"); // this continues where the previous call left off
  strcpy(LWPlant6, strtokIndx);
  strtokIndx = strtok(NULL, ":"); // this continues where the previous call left off
  strcpy(LWPlant7, strtokIndx);
  strtokIndx = strtok(NULL, ":"); // this continues where the previous call left off
  strcpy(LWPlant8, strtokIndx);
  strtokIndx = strtok(NULL, ":"); // this continues where the previous call left off
  strcpy(LWPlant9, strtokIndx);
  strtokIndx = strtok(NULL, ":"); // this continues where the previous call left off
  strcpy(TempLow, strtokIndx);
  strtokIndx = strtok(NULL, ":"); // this continues where the previous call left off
  strcpy(RHLow, strtokIndx);
  strtokIndx = strtok(NULL, ":"); // this continues where the previous call left off
  strcpy(TempHigh, strtokIndx);
  strtokIndx = strtok(NULL, ":"); // this continues where the previous call left off
  strcpy(RHHigh, strtokIndx);
  strtokIndx = strtok(NULL, ":"); // this continues where the previous call left off
  strcpy(LuxLvl, strtokIndx);
  strtokIndx = strtok(NULL, ":"); // this continues where the previous call left off
  strcpy(WaterLvlLeft, strtokIndx);
  strtokIndx = strtok(NULL, ":"); // this continues where the previous call left off
  strcpy(WaterTempLeft, strtokIndx);
  strtokIndx = strtok(NULL, ":"); // this continues where the previous call left off
  strcpy(WaterLvlRight, strtokIndx);
  strtokIndx = strtok(NULL, ":"); // this continues where the previous call left off
  strcpy(WaterTempRight, strtokIndx);
  strtokIndx = strtok(NULL, ":"); // this continues where the previous call left off
  strcpy(Pressure, strtokIndx);
  strtokIndx = strtok(NULL, ":"); // this continues where the previous call left off
  strcpy(WTPlant1, strtokIndx);
  strtokIndx = strtok(NULL, ":"); // this continues where the previous call left off
  strcpy(WTPlant2, strtokIndx);
  strtokIndx = strtok(NULL, ":"); // this continues where the previous call left off
  strcpy(WTPlant3, strtokIndx);
  strtokIndx = strtok(NULL, ":"); // this continues where the previous call left off
  strcpy(WTPlant4, strtokIndx);
  strtokIndx = strtok(NULL, ":"); // this continues where the previous call left off
  strcpy(WTPlant5, strtokIndx);
  strtokIndx = strtok(NULL, ":"); // this continues where the previous call left off
  strcpy(WTPlant6, strtokIndx);
  strtokIndx = strtok(NULL, ":"); // this continues where the previous call left off
  strcpy(WTPlant7, strtokIndx);
  strtokIndx = strtok(NULL, ":"); // this continues where the previous call left off
  strcpy(WTPlant8, strtokIndx);
  strtokIndx = strtok(NULL, ":"); // this continues where the previous call left off
  strcpy(WTPlant9, strtokIndx);
  strtokIndx = strtok(NULL, ":"); // this continues where the previous call left off
  strcpy(TIHumidity, strtokIndx);
  strtokIndx = strtok(NULL, ":"); // this continues where the previous call left off
  strcpy(TISurroundings, strtokIndx);
  strtokIndx = strtok(NULL, ":"); // this continues where the previous call left off
  strcpy(TIBlynkData, strtokIndx);
  strtokIndx = strtok(NULL, ":"); // this continues where the previous call left off  
  strcpy(TimePump1, strtokIndx);
  strtokIndx = strtok(NULL, ":"); // this continues where the previous call left off
  strcpy(TimePump2, strtokIndx);
  strtokIndx = strtok(NULL, ":"); // this continues where the previous call left off
  strcpy(TimePump3, strtokIndx);
  strtokIndx = strtok(NULL, ":"); // this continues where the previous call left off
  strcpy(TimePump4, strtokIndx);
  strtokIndx = strtok(NULL, ":"); // this continues where the previous call left off
  strcpy(TimePump5, strtokIndx);
  strtokIndx = strtok(NULL, ":"); // this continues where the previous call left off
  strcpy(TimePump6, strtokIndx);
  strtokIndx = strtok(NULL, ":"); // this continues where the previous call left off
  strcpy(TimePump7, strtokIndx);
  strtokIndx = strtok(NULL, ":"); // this continues where the previous call left off
  strcpy(TimePump8, strtokIndx);
  strtokIndx = strtok(NULL, ":"); // this continues where the previous call left off
  strcpy(TimePump9, strtokIndx);
  
    //integerFromPC = atoi(strtokIndx);     // convert this part to an integer
    //floatFromPC = atof(strtokIndx);     // convert this part to a float
}


void USBDEBUG()
{

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
Serial.print( LWPlant1  ); Serial.write(9);
Serial.print("LWPlant2: ");
Serial.print( LWPlant2  ); Serial.write(9);
Serial.print("LWPlant34: ");
Serial.print( LWPlant3  ); Serial.write(9);
Serial.print("LWPlant56: ");
Serial.println( LWPlant4 );

Serial.print("LWPlant7: ");
Serial.print( LWPlant5  ); Serial.write(9);
Serial.print("LWPlant8: ");
Serial.print( LWPlant6  ); Serial.write(9);
Serial.print("LWPlant9: ");
Serial.print( LWPlant7  ); Serial.write(9);
Serial.print("LWPlant10: ");
Serial.println( LWPlant8 );

Serial.print("LWPlant1114: ");
Serial.println( LWPlant9 );

Serial.print("TempOp: ");
Serial.print( TempHigh ); Serial.write(9);   
Serial.print("RHOp: ");
Serial.print( RHHigh ); Serial.write(9);
Serial.print("TempNed: ");
Serial.print( TempLow ); Serial.write(9);
Serial.print("RHNed: ");
Serial.println( RHLow);

Serial.print("Lux: ");
Serial.print(LuxLvl ); Serial.write(9);
Serial.print("WLvlLeft: ");
Serial.print(WaterLvlLeft ); Serial.write(9);
Serial.print("WTempLeft: ");
Serial.print(WaterTempLeft ); Serial.write(9);
Serial.print("WLevelRight: ");
Serial.println(WaterLvlRight);

Serial.print("WTempRight: ");
Serial.print(WaterTempRight ); Serial.write(9);
Serial.print("Pressure: ");
Serial.println(Pressure);

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
Serial.print(TIHumidity ); Serial.write(9);
Serial.print("MiscRouInt: ");
Serial.print(TISurroundings ); Serial.write(9);
Serial.print("PlantRouInt: ");
Serial.println(TIBlynkData);

Serial.print("Pump1Time: ");
Serial.print(TimePump1 ); Serial.write(9);
Serial.print("Pump2Time: ");
Serial.print(TimePump2 ); Serial.write(9);
Serial.print("Pump3Time: ");
Serial.print(TimePump3 ); Serial.write(9);
Serial.print("Pump4Time: ");
Serial.println(TimePump4);

Serial.print("Pump5Time: ");
Serial.print(TimePump5 ); Serial.write(9);
Serial.print("Pump6Time: ");
Serial.print(TimePump6 ); Serial.write(9);
Serial.print("Pump7Time: ");
Serial.print(TimePump7 ); Serial.write(9);
Serial.print("Pump8Time: ");
Serial.println(TimePump8 );

Serial.print("Pump9Time: ");
Serial.println(TimePump9);

}




