
const int pushButton1= 8, pushButton2= 9;
const int Motors_Forward= 7;
const int Motors_Backward= 2;


void setup()
{
  pinMode(pushButton1, INPUT_PULLUP);
  pinMode(pushButton2, INPUT_PULLUP);
  pinMode(Motors_Forward, OUTPUT);
  pinMode(Motors_Backward, OUTPUT);
}

void loop()
{
  
  int x= digitalRead(pushButton1);
  int y= digitalRead(pushButton2);
  

  if(x==0){ //check if button 1 is pressed
    
    // make the motors rotate clockwise
    digitalWrite(Motors_Backward, LOW);
    digitalWrite(Motors_Forward, HIGH);
    
      }
  
  else if(y==0){ //check if button 2 is pressed
    
    // make the motors rotate counter clockwise
    digitalWrite(Motors_Forward, LOW);
    digitalWrite(Motors_Backward, HIGH);
    
  }
}

