/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>
//float time_=0,distance=0;
//int echoPin=6,trigPin=7;
Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  Serial.begin(9600);
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  myservo.write(180);
  //pinMode(trigPin, OUTPUT); 
 //pinMode(echoPin, INPUT); 
}

void loop() {
 /* for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }*/

  /*digitalWrite(trigPin, LOW); 
 delayMicroseconds(2); 
 digitalWrite(trigPin, HIGH); 
 delayMicroseconds(10); 
 digitalWrite(trigPin, LOW);
time_=pulseIn(echoPin,1);
distance = (time_*.0343)/2; 

  if(distance<=30)
  {         
            myservo.write(0);
            Serial.println("Opening");
            delay(1000);
            myservo.write(180);
    }*/
  if(Serial.available()>0)
  {
      
      
      
      char s=Serial.read();
      if(s=='o')
        {
            myservo.write(0);
            Serial.println("Opening");      
        }

        
      if(s=='c')
        {
            myservo.write(180);
            Serial.println("Closing");
        }

        
      
  }
  
  
}
