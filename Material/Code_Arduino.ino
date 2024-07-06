//Arduino Human Following Robot
// Created By DIY Builder
// You have to install the AFMotor and NewPing library Before Uploading the sketch
// You can find all the required libraris from arduino library manager.
// Contact me on instagram for any query(Insta Id : diy.builder)
// Modified 7 Mar 2022
// Version 1.1


//include the library code:
#include<NewPing.h>           
#include<Servo.h>             
#include<AFMotor.h>           

#define RIGHT A2              // Right IR sensor connected to analog pin A2 of Arduino Uno:
#define LEFT A3               // Left IR sensor connected to analog pin A3 of Arduino Uno:
#define TRIGGER_PIN A1        // Trigger pin connected to analog pin A1 of Arduino Uno:
#define ECHO_PIN A0           // Echo pin connected to analog pin A0 of Arduino Uno:
#define MAX_DISTANCE 200      // Maximum ping distance:

unsigned int distance = 0;    //Variable to store ultrasonic sensor distance:
unsigned int Right_Value = 0; //Variable to store Right IR sensor value:
unsigned int Left_Value = 0;  //Variable to store Left IR sensor value:
  

NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);  //NewPing setup of pins and maximum distance:

//create motor objects

AF_DCMotor Motor2(2,MOTOR12_1KHZ);
AF_DCMotor Motor3(3,MOTOR34_1KHZ);


 Servo myservo; //create servo object to control the servo:
 int pos=0;     //variable to store the servo position:

void setup() { // the setup function runs only once when power on the board or reset the board:
  
   Serial.begin(9600); //initailize serial communication at 9600 bits per second:
   myservo.attach(10); // servo attached to pin 10 of Arduino UNO
{
for(pos = 90; pos <= 180; pos += 1){    // goes from 90 degrees to 180 degrees:
  myservo.write(pos);                   //tell servo to move according to the value of 'pos' variable:
  delay(15);                            //wait 15ms for the servo to reach the position:
  } 
for(pos = 180; pos >= 0; pos-= 1) {     // goes from 180 degrees to 0 degrees:
  myservo.write(pos);                   //tell servo to move according to the value of 'pos' variable:
  delay(15);                            //wait 15ms for the servo to reach the position:
  }
for(pos = 0; pos<=90; pos += 1) {       //goes from 180 degrees to 0 degrees:
  myservo.write(pos);                   //tell servo to move according to the value of 'pos' variable:
  delay(15);                            //wait 15ms for the servo to reach the position:
  }
}
   pinMode(RIGHT, INPUT); //set analog pin RIGHT as an input:
   pinMode(LEFT, INPUT);  //set analog pin RIGHT as an input:
}

// the lope function runs forever
void loop() {                             
Serial.println("\n\n");                                              
delay(50);                                        //wait 50ms between pings:
distance = sonar.ping_cm();                       //send ping, get distance in cm and store it in 'distance' variable:
Serial.print("distance: ");                   
Serial.print(distance);                         // print the distance in serial monitor:


    Right_Value = digitalRead(RIGHT);             // read the value from Right IR sensor:
    Left_Value = digitalRead(LEFT);               // read the value from Left IR sensor:
 
Serial.print("     IRs: ");                      
Serial.print(Right_Value);                      // print the right IR sensor value in serial monitor:                      
Serial.print(Left_Value);                       //print the left IR sensor value in serial monitor:
Serial.println("\n");                                              
if((distance>5)&&(distance<25)){            //check wheather the ultrasonic sensor's value stays between 1 to 15.
                                                     //If the condition is 'true' then the statement below will execute:
  //Move Forward:
  Serial.println("Sonar detectado ---");
  Motor2.setSpeed(70);  //define motor2 speed:
  Motor2.run(FORWARD);   //rotate motor2 clockwise:
  Motor3.setSpeed(70);  //define motor3 speed:
  Motor3.run(FORWARD);   //rotate motor3 clockwise:
  
}else 
if((Right_Value==1) && (Left_Value==0)) {   //If the condition is 'true' then the statement below will execute:
  
  //Turn Left  
  Serial.println("Deve virar pra esquerda ---");                                              
  Motor2.setSpeed(70);  //define motor2 speed:
  Motor2.run(FORWARD);   //rotate motor2 clockwise:
  Motor3.setSpeed(70);  //define motor3 speed:
  Motor3.run(BACKWARD);  //rotate motor3 anticlockwise:
  delay(150);
  
}else if((Right_Value==0)&&(Left_Value==1)) {     //If the condition is 'true' then the statement below will execute:
  Serial.println("Deve virar pra direita ---");                                              
  //Turn Right
  Motor2.setSpeed(70);  //define motor2 speed:
  Motor2.run(BACKWARD);  //rotate motor2 anticlockwise:
  Motor3.setSpeed(70);  //define motor3 speed:
  Motor3.run(FORWARD);   //rotate motor3 clockwise:
  delay(150);
  
}else if((Right_Value==1)&&(Left_Value==1)) {                          //If the condition is 'true' then the statement below will execute:
  Serial.println("Deve ficar parado ---");                                              
  //Stop
  Motor2.setSpeed(0);    //define motor2 speed:
  Motor2.run(RELEASE);   //stop motor2:
  Motor3.setSpeed(0);    //define motor3 speed:
  Motor3.run(RELEASE);   //stop motor3:
}
                                         
}
