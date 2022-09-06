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

void setup() {
  Serial.begin(115200);
  pinMode(PWM1,OUTPUT);
  pinMode(AIN1,OUTPUT);
  pinMode(AIN2,OUTPUT);

  digitalWrite(AIN1,HIGH); //Motor A Rotate Clockwise
  digitalWrite(AIN2,LOW);
}

void loop() {

  
  digitalWrite(AIN1,HIGH); //Motor A Rotate Clockwise
  digitalWrite(AIN2,LOW);
  analogWrite(PWM1,124);
  delay(2000);
  
  digitalWrite(AIN1,LOW); //Motor A Rotate Counter Clockwise
  digitalWrite(AIN2,HIGH);
  analogWrite(PWM1,124);
  delay(2000);

 
}
