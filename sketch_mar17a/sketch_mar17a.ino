#include <Servo.h>

Servo tpServo1;  
Servo tpServo2;  
Servo tpServo3;  
Servo tpServo4;  

int pin_number1 = 13;
int pin_number2 = 12;
int pin_number3 = 11;
int pin_number4 = 10;

int potentiometer1 = 0;
int potentiometer2 = 1;
int potentiometer3 = 2;
int potentiometer4 = 3;

int angle;

void setup() {
  tpServo1.attach(pin_number1);  
  tpServo2.attach(pin_number2);  
  tpServo3.attach(pin_number3);  
  tpServo4.attach(pin_number4);  
}

void loop() {
  angle = analogRead(potentiometer1);         
  angle = map(angle, 0, 1023, 0, 180);    
  tpServo1.write(angle);                
  
  angle = analogRead(potentiometer2);         
  angle = map(angle, 0, 1023, 0, 180);    
  tpServo2.write(angle);                
  
  angle = analogRead(potentiometer3);         
  angle = map(angle, 0, 1023, 0, 180);    
  tpServo3.write(angle);                
  
  angle = analogRead(potentiometer4);         
  angle = map(angle, 0, 1023, 0, 180);    
  tpServo4.write(angle);                
  
}
