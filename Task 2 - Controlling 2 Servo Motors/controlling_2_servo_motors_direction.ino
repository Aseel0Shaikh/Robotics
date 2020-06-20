#include <Servo.h>

Servo motor1;  // create servo object to control motor 1
Servo motor2;  // create servo object to control motor 2
const int pushButton1= 2, pushButton2= 3;
int x;
int y;
int pos;

void setup() {
  
  pinMode(pushButton1, INPUT_PULLUP);
  pinMode(pushButton2, INPUT_PULLUP);
  
}

void loop() {
  
  x = digitalRead(pushButton1);
  y = digitalRead(pushButton2);

  
  if(x==0){ //check if the first button is pressed
    
    motor1.attach(9);  // attaches the motor 1 on pin 9 to the servo object
    motor2.attach(10); // attaches the motor 2 on pin 10 to the servo object
     
    for (pos = motor1.read(); pos <= 180; pos += 1) { // goes from the current position 180 degrees counter clockwise
        
         motor1.write(pos);              // tell servo to go to position in variable 'pos'
    	 motor2.write(pos);  
   		 delay(15);                       // waits 15ms for the servo to reach the position
  		}
  
  	}
  
  else if (y==0){ //check if the second button is pressed
    
    motor1.attach(9);  // attaches the motor 1 on pin 9 to the servo object
    motor2.attach(10); // attaches the motor 2 on pin 10 to the servo object
   
 	for (pos = motor1.read(); pos >= 0; pos -= 1) { // goes from the current position 180 degrees clockwise
    
   	     motor1.write(pos);              // tell servo to go to position in variable 'pos'
   	     motor2.write(pos);  
   		 delay(15);                       // waits 15ms for the servo to reach the position
	    }
    } 
    
}
  
        
