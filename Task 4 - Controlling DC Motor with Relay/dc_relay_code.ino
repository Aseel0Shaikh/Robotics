
int r = 2;
int l = 3;
int pushButton1 = 12; 
int pushButton2 = 13; 

void setup() {
  
  pinMode(r,OUTPUT);
  pinMode(l,OUTPUT);
  pinMode(pushButton1,INPUT_PULLUP);
  pinMode(pushButton2,INPUT_PULLUP);

}

void loop() {
    
  if (!digitalRead(12)){ // check if the first button is pressed
    
    // make the motor rotates clockwise
    digitalWrite(l,LOW);
    digitalWrite(r,HIGH);
    
      }
      
  else if (!digitalRead(13)){ // check if the second button is pressed
    
    // make the motor rotates counter clockwise
    digitalWrite(r,LOW);
    digitalWrite(l,HIGH);
    
      }
}
