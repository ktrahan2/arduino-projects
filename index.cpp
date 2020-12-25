//My First servo motor

#include <Servo.h>

Servo myServo;

int const potPin = A5;
int potVal;
int angle;

void setup() {
  myServo.attach(9);

  Serial.begin(9600);

}

void loop() {
  potVal = analogRead(potPin);
  Serial.print("potVal: ");
  Serial.print(potVal);

  angle = map(potVal, 0, 1023, 0, 179);
  Serial.print(", angle: ");
  Serial.print(angle);

  myServo.write(angle);
  delay(15);
//   if ( angle == 90 ) {
//    myServo.write(0);
//  };
//  delay(300);
}