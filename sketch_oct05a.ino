#include <Servo.h>

Servo servo;

int servoPin = 9;
int angle = 0;


void setup() {
  servo.attach(servoPin);
  servo.write(angle);
for(angle = 0; angle < 130; angle++){
    servo.write(angle);
    delay(1);
  }
  delay(4500);
  for(angle = 130; angle > 0; angle--){
    servo.write(angle);
    delay(1);
  }  
}

void loop() {
 servo.write(angle); 
}
