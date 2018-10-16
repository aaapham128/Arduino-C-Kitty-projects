#include <Servo.h>                           // Include servo library
 
Servo servoLeft;                             // Declare left and right servos
Servo servoRight;
 
void setup()                                 // Built-in initialization block
{
  pinMode(7, INPUT);                         // Set right whisker pin to input
  pinMode(5, INPUT);                         // Set left whisker pin to input  

  delay(1000);                               // Delay to finish tone

  servoLeft.attach(13);                      // Attach left signal to pin 13
  servoRight.attach(12);                     // Attach right signal to pin 12
}  
 
void loop()  {                                // Main loop auto-repeats
  byte Left = digitalRead(5);               // Copy left result to wLeft  
  byte Right = digitalRead(7);              // Copy right result to wRight

  if((wLeft == 0) && (wRight == 0))          // If both whiskers contact
  {
    backward(1000);                          // Back up 1 second
    turnLeft(800);                           // Turn left about 120 degrees
  }
  else if(wLeft == 0)                        // If only left whisker contact
  {
    backward(1000);                          // Back up 1 second
    turnRight(400);                          // Turn right about 60 degrees
  }
  else if(wRight == 0)                       // If only right whisker contact
  {
    backward(1000);                          // Back up 1 second
    turnLeft(400);                           // Turn left about 60 degrees
  }
  else                                       // Otherwise, no whisker contact
  {
    forward(20);                             // Forward 1/50 of a second
  }
}

void forward(){
  servoLeft.writeMicroseconds(1700);         // Left wheel counterclockwise
  servoRight.writeMicroseconds(1300);        // Right wheel clockwise
  delay(2000);                               // Maneuver for time ms
}

