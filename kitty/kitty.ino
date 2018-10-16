// Set the whiskers
int leftWhisker = 5;
int rightWhisker = 7;

#include <Servo.h>                           // Include servo library

Servo servoRight;
Servo servoLeft;

void moveKitty() {
  servoLeft.writeMicroseconds(1300);        

  servoRight.writeMicroseconds(1700);
  delay(600); 

void stopKitty() {

  // Your Code Here

}
void setup() {
  // put your setup code here, to run once:
  //Opening up serial port for writing
  Serial.begin(9600);
  
  int leftWhiskerValue = digitalRead(leftWhisker);
  int rightWhiskerValue = digitalRead(rightWhisker);

  servoRight.attach(13);
  servoLeft.attach(12);

  
Serial.print("Left: ");
Serial.print(leftWhiskerValue);

  Serial.println();
  Serial.print("Right: ");
  Serial.print(rightWhiskerValue);

  Serial.print(leftWhisker);
  Serial.println();
  Serial.print(rightWhisker);

  if (leftWhiskerValue == 0 && rightWhiskerValue == 0){
    Serial.print("Left and right are pressed"); 
  } else if(leftWhiskerValue == 0) { 
    Serial.print("Left side is pressed.");
  } else if (rightWhiskerValue == 0) {
  Serial.print("Right side is pressed.");
  } else {
  Serial.print("Neither are pressed.");
  }

}
}

void loop() {
  // put your main code here, to run repeatedly:

}
