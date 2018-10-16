//Go forward and turn or stop if it hits something 
#include <Servo.h>
Servo servoLeft;
Servo servoRight;
void setup() {
  // put your setup code here, to run once:
  
  //Set the right whisker pin to input
  pinMode(7, INPUT);
  //Set the left whisker pin to input
  pinMode(5,INPUT);

  //Attach left to 13
  //Attach right to 12
  servoLeft.attach(12);
  servoRight.attach(13);

  servoLeft.writeMicroseconds(1500);        // Calibrate left servo

  servoRight.writeMicroseconds(1500);       // Calibrate right servo
}
byte whiskerLeft = digitalRead(5); //Fill in your pin number here
byte whiskerRight = digitalRead(7); //Fill in your pin number here
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(7, HIGH);
  digitalWrite(5, HIGH);

  //if statement to check if 
  //1. if they are both touched

   if (leftWhisker == 0 && rightWhisker == 0){
      servoLeft.writeMicroseconds(1700);
      servoRight.writeMicroseconds(1300);
      delay(2000); 
  } else if(leftWhisker == 0) { 
      servoLeft.writeMicroseconds(1700);
      servoRight.writeMicroseconds(1700);
      delay(2000);
  } else if (rightWhisker == 0) {
      servoLeft.writeMicroseconds(1300);
      servoRight.writeMicroseconds(1300);
      delay(2000)
  } else {
    servoLeft.writeMicroseconds(1300);
     servoRight.writeMicroseconds(1700);
     delay(2000);
  }

  //Decide with your group what you want your bot to do
  //make sure to add in delays
  //Add Serial.print() - check if it's in if statement

  //Bonus: make your own functions
  //moveKitty
  //stopKitty
  //turnLeft
  //turnRight
  //goBack
  //turnOnLight
}
