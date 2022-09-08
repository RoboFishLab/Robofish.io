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

int pmwvalue;

void setup() {
  Serial.begin(115200);
  Serial.println("Setup");

  pinMode(PWM1,OUTPUT);
  pinMode(AIN1,OUTPUT);
  pinMode(AIN2,OUTPUT);

  digitalWrite(AIN1,HIGH); //Motor A Rotate Clockwise
  digitalWrite(AIN2,LOW);

  Serial.println("Starting in 10s ...");
  delay(10000);
  Serial.println("Started pump!");
  
  digitalWrite(AIN1,HIGH); //Motor A Rotate Clockwise
  digitalWrite(AIN2,LOW);

  /// Set to test value
  pmwvalue = 1 * 255; // max 255
  analogWrite(PWM1,pmwvalue);
  delay(30000); // 30s
  analogWrite(PWM1,0);
}

void loop() {

//  Serial.println("Starting in 10s ...");
//  delay(10000); // 10s

  // 10%
//  Serial.println("Running at 10%");
//  delay(100);
//  pmwvalue = 0.1 * 255; // max 255
//  digitalWrite(AIN1,HIGH); //Motor A Rotate Clockwise
//  digitalWrite(AIN2,LOW);
//  analogWrite(PWM1,pmwvalue);
//  delay(30000); // 30s
//  
//  Serial.println("Taking a break for 30s ...");
//  delay(30000); // 30s
  
  // 25%
//  Serial.println("Running at 25%");
//  delay(100);
//  pmwvalue = 0.25 * 255; // max 255
//  digitalWrite(AIN1,HIGH); //Motor A Rotate Clockwise
//  digitalWrite(AIN2,LOW);
//  analogWrite(PWM1,pmwvalue);
//  delay(30000); // 30s
//  
//  Serial.println("Taking a break for 30s ...");
//  delay(30000); // 30s
//  
//  // 50%
//  Serial.println("Running at 50%");
//  delay(100);
//  pmwvalue = 0.5 * 255; // max 255
//  digitalWrite(AIN1,HIGH); //Motor A Rotate Clockwise
//  digitalWrite(AIN2,LOW);
//  analogWrite(PWM1,pmwvalue);
//  delay(30000); // 30s
//  
//  Serial.println("Taking a break for 30s ...");
//  delay(30000); // 30s
//  
//  // 75%  
//  Serial.println("Running at 75%");
//  delay(100);
//  pmwvalue = 0.75 * 255; // ~80% max 255
//  digitalWrite(AIN1,HIGH); //Motor A Rotate Clockwise
//  digitalWrite(AIN2,LOW);
//  analogWrite(PWM1,pmwvalue);
//  delay(30000); // 30s
//  
//  Serial.println("Taking a break for 30s ...");
//  delay(30000); // 30s
//  
//  // 100%
//  Serial.println("Running at 100%");
//  delay(100);
//  pmwvalue = 1 * 255; // max 255
//  digitalWrite(AIN1,HIGH); //Motor A Rotate Clockwise
//  digitalWrite(AIN2,LOW);
//  analogWrite(PWM1,pmwvalue);
//  delay(30000); // 30s
//  
//  Serial.println("Taking a break for 30s ...");
//  delay(30000); // 30s

//// Run backwards
//  digitalWrite(AIN1,LOW); //Motor A Rotate Counter Clockwise
//  digitalWrite(AIN2,HIGH);
//  analogWrite(PWM1,124);
//  delay(30000); // 30s
}
