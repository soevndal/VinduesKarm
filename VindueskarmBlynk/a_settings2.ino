//WATERING TIME FOR PUMP IN SECONDS
int Pump1Int = 3;
int Pump2Int = 3;
int Pump3Int = 3;
int Pump4Int = 3;
int Pump5Int = 3;
int Pump6Int = 3;
int Pump7Int = 3;
int Pump8Int = 3;
int Pump9Int = 3;

#define ALTITUDE 22.0 // 10.5 meter på min adresse. og så 11.5 op til vinduet?

int MoistureAnalogMinRead1 = 0;
int MoistureAnalogMaxRead1 = 1020;
int MoistureAnalogMinRead2 = 0;
int MoistureAnalogMaxRead2 = 1020;
int MoistureAnalogMinRead3 = 0;
int MoistureAnalogMaxRead3 = 1020;
int MoistureAnalogMinRead4 = 0;
int MoistureAnalogMaxRead4 = 1020;
int MoistureAnalogMinRead5 = 0;
int MoistureAnalogMaxRead5 = 1020;
int MoistureAnalogMinRead6 = 0;
int MoistureAnalogMaxRead6 = 1020;
int MoistureAnalogMinRead7 = 0;
int MoistureAnalogMaxRead7 = 1020;
int MoistureAnalogMinRead8 = 0;
int MoistureAnalogMaxRead8 = 1020;
int MoistureAnalogMinRead9 = 0;
int MoistureAnalogMaxRead9 = 1020;
int MoistureAnalogMinRead10 = 0;
int MoistureAnalogMaxRead10 = 1020;
int MoistureAnalogMinRead11 = 0;
int MoistureAnalogMaxRead11 = 1020;
int MoistureAnalogMinRead12 = 0;
int MoistureAnalogMaxRead12 = 1020;
int MoistureAnalogMinRead13 = 0;
int MoistureAnalogMaxRead13 = 1020;
int MoistureAnalogMinRead14 = 0;
int MoistureAnalogMaxRead14 = 1020;

//SETUP OF DEFAULT WATERING THRESHOLD
int WTPlant1 = 0; //Default watering treshold
int WTPlant2 = 0; //Default watering treshold
int WTPlant3 = 0; //Default watering treshold
int WTPlant4 = 0; //Default watering treshold
int WTPlant5 = 0; //Default watering treshold
int WTPlant6 = 0; //Default watering treshold
int WTPlant7 = 0; //Default watering treshold
int WTPlant8 = 0; //Default watering treshold
int WTPlant9 = 0; //Default watering treshold

//SETUP OF TIMES BETWEEN MISC SENSORS
int MiscRoutinesInterval = 1;        //How often to log data in minutes
int BlynkRoutinesInterval = 10;       //How often to post to blynk in sec

//SETUP OF TIMES BETWEEN READING OF SOIL MOISTURE
int SRPlantInt = 5; //How often to read soil moisture in minutes

//SETUP OF TIMES BETWEEN WATERING IF SOIL IS TO DRY
int SWPlant1Int = 30; //How often to water soil moisture in minutes
int SWPlant2Int = 30; //How often to water soil moisture in minutes
int SWPlant3Int = 30; //How often to water soil moisture in minutes
int SWPlant4Int = 30; //How often to water soil moisture in minutes
int SWPlant5Int = 30; //How often to water soil moisture in minutes
int SWPlant6Int = 30; //How often to water soil moisture in minutes
int SWPlant7Int = 30; //How often to water soil moisture in minutes
int SWPlant8Int = 30; //How often to water soil moisture in minutes
int SWPlant9Int = 30; //How often to water soil moisture in minutes
int SWPlant10Int = 30; //How often to water soil moisture in minutes
int SWPlant11Int = 30; //How often to water soil moisture in minutes
int SWPlant12Int = 30; //How often to water soil moisture in minutes
int SWPlant13Int = 30; //How often to water soil moisture in minutes
int SWPlant14Int = 30; //How often to water soil moisture in minutes
