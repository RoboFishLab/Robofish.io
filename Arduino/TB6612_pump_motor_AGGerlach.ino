    /*
  TB6612FNG-Dual-Driver
  made on 28 oct 2020
  by Amir Mohammad Shojaee @ Electropeak
  Home

  Tested with ESP32 WROOM32, TB6612, ESP32 Dev Modeule
*/


#include <analogWrite.h>

#define AIN1 27
#define AIN2 26
#define PWM1 14
#define LED 22
#define SEND 21
#define RECEIVE 12

int pmwvalue;
int ledOn;

void setup() {
  Serial.begin(115200);
  delay(10);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB
  }
  Serial.println("Setup");

  pinMode(PWM1,OUTPUT);
  pinMode(AIN1,OUTPUT);
  pinMode(AIN2,OUTPUT);
  pinMode(LED,OUTPUT);
  pinMode(SEND,OUTPUT);
  pinMode(RECEIVE,INPUT);

  digitalWrite(AIN1,HIGH); //Motor A Rotate Clockwise
  digitalWrite(AIN2,LOW);
  
  Serial.println("Starting in 10s ...");
  delay(5000); // 5s
}

void loop() {
ledOn=digitalRead(RECEIVE);
if (ledOn==HIGH){
  pmwvalue = 0.8 * 255; // max 255
  digitalWrite(SEND,LOW);
  digitalWrite(LED,HIGH);
}
else{
  pmwvalue=0;  
  digitalWrite(LED,LOW);
}
analogWrite(PWM1,pmwvalue);
}
