// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin as an output.
  pinMode(13, OUTPUT);//verdeSEM1
  pinMode(12, OUTPUT);//amarilloSEM1
  pinMode(11, OUTPUT);//rojoSEM1
  pinMode(10, OUTPUT);//verdeSEM2
  pinMode(9, OUTPUT);//amarilloSEM2
  pinMode(8, OUTPUT);//rojoSEM2 
}

// the loop function runs over and over again forever
void loop() {
  
  digitalWrite(13, HIGH); 
  digitalWrite(8, HIGH);  
  delay(5000);
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(8, HIGH);   
  delay(1000);
  digitalWrite(12, LOW);
  digitalWrite(8, LOW);
  //cambio
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);                   
  delay (5000);
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(11, HIGH);
  delay(1000);
  digitalWrite(9, LOW);
  digitalWrite(11, LOW);
  

  
  
  
                       
}
