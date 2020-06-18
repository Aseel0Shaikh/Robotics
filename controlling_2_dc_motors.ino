
const int pushButton1= 11, pushButton2= 12;
const int Motor1_Forward= 3, Motor2_Forward= 9;
const int Motor1_Backward= 5, Motor2_Backward= 10;


void setup()
{
  pinMode(pushButton1, INPUT_PULLUP);
  pinMode(pushButton2, INPUT_PULLUP);
  pinMode(Motor1_Forward, OUTPUT);
  pinMode(Motor2_Forward, OUTPUT);
  pinMode(Motor1_Backward, OUTPUT);
  pinMode(Motor2_Backward, OUTPUT);
}

void loop()
{
  
  int x= digitalRead(pushButton1);
  int y= digitalRead(pushButton2);
  

  if(x==0){ //check if button 1 is pressed
    
    // make the motors rotate clockwise
    digitalWrite(Motor1_Backward, LOW);
    digitalWrite(Motor2_Backward, LOW);
    digitalWrite(Motor1_Forward, HIGH);
    digitalWrite(Motor2_Forward, HIGH);
    
      }
  
  else if(y==0){ //check if button 2 is pressed
    
    // make the motors rotate counter clockwise
    digitalWrite(Motor1_Forward,LOW);
    digitalWrite(Motor2_Forward,LOW);
    digitalWrite(Motor1_Backward,HIGH);
    digitalWrite(Motor2_Backward,HIGH);
    
  }
 
}