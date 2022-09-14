    /*
  TB6612_pump_motor_AGGerlach
  made on 14 sep 2022
  by Fritz Francisco @ HU, Berlin

  Tested with ESP32 WROOM32, TB6612, ESP32 Dev Modeule
*/


#include <analogWrite.h>

#define AIN1 27 // define pin id number
#define AIN2 26 // define pin id number
#define PWM1 14 // define pin id number
#define LED 22 // define pin id number
#define SEND 21 // define pin id number
#define RECEIVE 12 // define pin id number

int pmwvalue;
int ledOn;

void setup() {
  Serial.begin(115200);
  delay(10);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB
  }
  Serial.println("Setup");

  pinMode(PWM1,OUTPUT); // Set pin modes
  pinMode(AIN1,OUTPUT); // Set pin modes
  pinMode(AIN2,OUTPUT); // Set pin modes
  pinMode(LED,OUTPUT); // Set pin modes
  pinMode(SEND,OUTPUT); // Set pin modes
  pinMode(RECEIVE,INPUT); // Set pin modes

  digitalWrite(AIN1,HIGH); //Motor A Rotate Clockwise
  digitalWrite(AIN2,LOW);
  
  Serial.println("Starting in 10s ...");
  delay(5000); // 5s
}

void loop() {
// Switch logic, if switch is on RECEIVE pin receives load and ledOn is set to HIGH
ledOn=digitalRead(RECEIVE);
if (ledOn==HIGH){
  pmwvalue = 0.55 * 255; // percentage of power supplied to motor, max: 255
  digitalWrite(SEND,LOW); 
  digitalWrite(LED,HIGH); // Turn on LED
}
else{
  pmwvalue=0;  
  digitalWrite(LED,LOW); // Turn off LED
}
analogWrite(PWM1,pmwvalue);
}
