#include <Servo.h>   // Unclude Servo Library
#include <NewPing.h> // Include Newping Library

// Control pins
#define ServoPin1  = 8; // Digital Pin for Servo 1
#define ServePin2  = 9; // Digital Pin for Servo 2

void setup() {
  Serial.begin(9600);  //Set the baud rate for seriel connection
  pinMode(ServoPin1, OUTPUT);
  pinMode(ServoPin2, OUTPUT);

  digitalWrite(ServoPin1, LOW); // When not sending PWM, we want it low
  digitalWrite(ServoPin2, LOW); // When not sending PWM, we want it low
}

void loop() {
  // Generel motor test
  analogWrite(ServoPin2, 100);
  analogWrite(ServoPin2, 100);
  delay(3000);
  //******** ******************************//forward
  analogWrite(IN1_PIN, HIGH);
  analogWrite(IN2_PIN, HIGH);
  analogWrite(IN3_PIN, HIGH);
  analogWrite(IN4_PIN, HIGH);
  

  delay(1000);//********************************************//stop
  analogWrite(IN1_PIN, LOW);
  analogWrite(IN2_PIN, 100);
  analogWrite(IN3_PIN, 100);
  analogWrite(IN4_PIN, LOW);
  delay(5000);//*********************************************//back
  analogWrite(IN1_PIN, HIGH);
  analogWrite(IN2_PIN, HIGH);
  analogWrite(IN3_PIN, HIGH);
  analogWrite(IN4_PIN, HIGH);
  delay(1000);
  //******* ***************************************//stop
  analogWrite(IN1_PIN, 200);
  analogWrite(IN2_PIN, LOW);
  analogWrite(IN3_PIN, 200);
  analogWrite(IN4_PIN, LOW);
  delay(3000);
  //*******************************************//left
  analogWrite(IN1_PIN, HIGH);
  analogWrite(IN2_PIN, HIGH);
  analogWrite(IN3_PIN, HIGH);
  analogWrite(IN4_PIN, HIGH);
  delay(1000); //*******************************************//stop
  analogWrite(IN1_PIN, LOW);
  analogWrite(IN2_PIN, 200);
  analogWrite(IN3_PIN, LOW);
  analogWrite(IN4_PIN, 200);
  delay(3000);//*** ***************************************//right
}
