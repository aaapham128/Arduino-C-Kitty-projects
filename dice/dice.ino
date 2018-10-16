
void setup() {
  
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);

  // button
  pinMode(13, INPUT);


}
void loop() {
   button = digitalRead(13)
int x = random(1,6);
 
  if(x == 1){
    digitalWrite(1,HIGH);
    delay(1000);
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    }
  else if(x == 2){
   digitalWrite(1,HIGH);
    delay(10);
    digitalWrite(2,HIGH);
    delay(10);
    digitalWrite(3,LOW);
    delay(10);
    digitalWrite(4,LOW);
    delay(10);
    digitalWrite(5,LOW);
    delay(10);
    digitalWrite(6,LOW);
    delay(1000);
 }
 
  if(x == 3){
    digitalWrite(1,HIGH);
    delay(10);
    digitalWrite(2,HIGH);
    delay(10);
    digitalWrite(3,HIGH);
    delay(10);
    digitalWrite(4,LOW);
    delay(10);
    digitalWrite(5,LOW);
    delay(10);
    digitalWrite(6,LOW);
    delay(1000);
  
  }
 
  if(x == 4){
    digitalWrite(1,HIGH);
    delay(10);
    digitalWrite(2,HIGH);
    delay(10);
    digitalWrite(3,HIGH);
    delay(10);
    digitalWrite(4,HIGH);
    delay(10);
    digitalWrite(5,LOW);
    delay(10);
    digitalWrite(6,LOW);
    delay(1000);
  
  }
  
  if(x == 5){
    digitalWrite(1,HIGH);
    delay(10);
    digitalWrite(2,HIGH);
    delay(10);
    digitalWrite(3,HIGH);
    delay(10);
    digitalWrite(4,HIGH);
    delay(10);
    digitalWrite(5,HIGH);
    delay(10);
    digitalWrite(6,LOW);
    delay(1000);
  }
  
  if(x == 6){
    digitalWrite(1,HIGH);
    delay(10);
    digitalWrite(2,HIGH);
    delay(10);
    digitalWrite(3,HIGH);
    delay(10);
    digitalWrite(4,HIGH);
    delay(10);
    digitalWrite(5,HIGH);
    delay(10);
    digitalWrite(6,HIGH);
    delay(1000);
} 
}




 



