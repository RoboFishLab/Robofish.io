#include <analogWrite.h>

#define AIN1 27
#define AIN2 26
#define PWM1 14

void setup() {
  Serial.begin(115200);
  pinMode(PWM1,OUTPUT);
  pinMode(AIN1,OUTPUT);
  pinMode(AIN2,OUTPUT);

}
 
void loop(){
  // One way Slow to Fast to Slow
  digitalWrite(AIN1,HIGH); //Motor A Rotate Clockwise
  digitalWrite(AIN2,LOW);

  for(int dutyCycle = 0; dutyCycle <= 255; dutyCycle++){   
    // changing the LED brightness with PWM
    analogWrite(PWM1, dutyCycle);
    delay(15);
  }
  // decrease the LED brightness
  for(int dutyCycle = 255; dutyCycle >= 0; dutyCycle--){
    // changing the LED brightness with PWM
    analogWrite(PWM1, dutyCycle);
    delay(15);
  }
  delay(1000);
  
  // Reverse Slow to Fast to Slow
  digitalWrite(AIN1,LOW); //Motor A Rotate Clockwise
  digitalWrite(AIN2,HIGH);

  for(int dutyCycle = 0; dutyCycle <= 255; dutyCycle++){   
    // changing the LED brightness with PWM
    analogWrite(PWM1, dutyCycle);
    delay(15);
  }
  // decrease the LED brightness
  for(int dutyCycle = 255; dutyCycle >= 0; dutyCycle--){
    // changing the LED brightness with PWM
    analogWrite(PWM1, dutyCycle);
    delay(15);
  }
  
}
