// C++ code
//
int sensorValue=0;
int ledDimming=0;
byte pwmPin=9;

void setup()
{
  
  pinMode(A0, INPUT);
  pinMode(pwmPin,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int ledDimming=0;
  
  sensorValue=analogRead(A0);
  
  Serial.print("PhotoResistor read=");
  Serial.println(sensorValue);
  ledDimming=map(sensorValue ,4,680,0,255);
  
  if( ledDimming<0) ledDimming=0;
  //Serial.print("ledDimming value=") ; 
  //Serial.println(ledDimming);
  analogWrite(pwmPin,ledDimming);
  delay(100);
}