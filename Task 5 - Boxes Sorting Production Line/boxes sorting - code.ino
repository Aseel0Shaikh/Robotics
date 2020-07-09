#include <Servo.h>

Servo motor;  // create servo object to control the motor
const int Sensor1= 2, Sensor2= 3, Sensor3= 4;
int x, y, z;

void setup() {
  
  pinMode(Sensor1, INPUT);
  pinMode(Sensor2, INPUT);
  pinMode(Sensor3, INPUT);
  
}

void loop() {
  
  x = digitalRead(Sensor1);
  y = digitalRead(Sensor2);
  z = digitalRead(Sensor3);

  
  if(x==1 && y==0 && z==0){ //check if the box size is 10cm x 10cm
    
    motor.attach(10);  // attach the motor on pin 10 to the servo object
    motor.write(45);   // tell servo to rotate 180 degrees
     
  
  	}
  
  	motor.write(0);  //tell servo to go back to its original position
  
   else if( y==1 && z==0){ //check if the box size is 20cm x 20cm
    
     
    motor.attach(10);  // attach the motor on pin 10 to the servo object
    motor.write(90);   // tell servo to rotate 90 degrees
    	 
    } 
  	motor.write(0);  // tell servo to go back to its original position
  
  else if(z==1){ //check if the box size is 30cm x 30cm
     
    motor.attach(10);  // attach the motor on pin 10 to the servo object
    motor.write(0);  // tell servo to go back to its original position
    	 
    
  }

    
}
  
        
