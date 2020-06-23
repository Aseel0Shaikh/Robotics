
#include <Stepper.h>

const int stepsPerRevolution = 4; // the step angle of the used motor is 90 degree; the steps per revolution= 360/90= 4;
const int pushButton1 = 12;
const int pushButton2 = 13;

Stepper myStepper(stepsPerRevolution, 9, 6, 5, 3);

void setup() {
  
  pinMode( pushButton1 , INPUT_PULLUP);
  pinMode( pushButton2 , INPUT_PULLUP);
  
}

void loop() {
  
      while(!digitalRead(pushButton1)){ // check if the first button is pressed
        
            // make the motor rotate 1 rotation clockwise at 60 rpm
            myStepper.step(stepsPerRevolution);
            myStepper.setSpeed(60);
            
           
               }
  
      while(!digitalRead(pushButton2)){ // check if the second button is pressed
    
            // make the motor rotate 1 rotation counterclockwise at 60 rpm
             myStepper.step(-stepsPerRevolution);
             myStepper.setSpeed(60);
             
            
              }
      }
