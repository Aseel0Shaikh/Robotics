
#include <Servo.h>

Servo motor1;  // create servo object to control motor 1
Servo motor2;  // create servo object to control a motor 2

const char p = A0; // analog pin used to connect the potentiometer
int val;           // variable to read the value from the analog pin
int pos;	       // variable to determine the position for the motors

void setup() {
  
  motor1.attach(5);  // attaches motor 1 on pin 5 to the servo object
  motor2.attach(3);  // attaches motor 2 on pin 3 to the servo object
  pinMode(p , INPUT); 
  
}

void loop() {
  
  val = analogRead(p);             // reads the value of the potentiometer (value between 0 and 1023)
  pos = map(val, 0, 1023, 0, 180); // scale it to use it with the servo (value between 0 and 180)
  motor1.write(pos);               // sets the servo position according to the scaled value
  motor2.write(pos);
  delay(15);                       // waits for the servo to get there

}
