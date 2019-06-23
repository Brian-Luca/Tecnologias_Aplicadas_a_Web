#include <Servo.h>
#define pinServo 9

Servo servo1;
int grau = 0;

void setup() {
  servo1.attach(pinServo);
  Serial.begin(9600);
  servo1.write(0);
  delay(2000);

}

void loop() {

 servo1.write(47);
 delay(1000);
 servo1.write(0);
 delay(1000);
}
