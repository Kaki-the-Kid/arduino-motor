#include <Servo.h>   // Unclude Servo Library
#include <NewPing.h> // Include Newping Library
#include <LiquidCrystal.h>

// Control pins
const int ServoPin1 =  9;  // Digital Pin for Servo 1
const int ServoPin2 = 10;  // Digital Pin for Servo 2

Servo LeftServo;
Servo RightServo;

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 7, d5 = 6, d6 = 5, d7 = 4;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

int value  = 0;
int x_axis = A0;
int y_axis = A1;
int joy_button_pin = 8;

String directionString(int x, int y) {
  String direction = String(x, DEC);
  
  if ( x <= 450)
    direction  = "Bottom ";
  else  if ( x >= 550 )
    direction  = "Top    ";
  else if ( x > 450 && x < 550)
    direction = "Middle ";

  if ( y < 450)
    direction += "- Left  ";
  else if ( y > 550 )
    direction += "- Right ";
  else
    direction += "- Center";
  
  return direction;
}

void setup() {
  Serial.begin(9600);           // Set the baud rate for seriel connection
  LeftServo.attach(ServoPin1);  // Sætter forbindelse pin 9 til Venstre Servo
  RightServo.attach(ServoPin2); // Sætter forbindelse pin 10 til Højre Servo
  
  pinMode(ServoPin1, OUTPUT);
  pinMode(ServoPin2, OUTPUT);

  digitalWrite(ServoPin1, LOW); // When not sending PWM, we want it low
  digitalWrite(ServoPin2, LOW); // When not sending PWM, we want it low

  // Joystick setup
  pinMode(x_axis, INPUT);
  pinMode(y_axis, INPUT);
  pinMode(joy_button_pin, INPUT_PULLUP); //set pin 7 as an input and enable the internal pull-up resistor

  // Display setup
  lcd.begin(16, 2); // set up the LCD's number of columns and rows:
}


void stop() {
  
}


void loop() {
  int x_value, y_value, x_pos, y_pos;
  
  x_value = analogRead(x_axis); // read X axis value [0..1023]
  x_value += 3;
  Serial.print("X:");
  Serial.print(x_value, DEC);
  x_pos = map(x_value, 0, 1023, 0, 180);
  if (x_pos < 95 && x_pos > 85)
    x_pos = 90;
  LeftServo.write(x_pos);
  Serial.print(" ");
  Serial.print(x_pos);
 
  y_value = analogRead(y_axis); // read Y axis value [0..1023]
  Serial.print(" | Y:");
  Serial.print(y_value, DEC);
  y_pos = map(y_value, 0, 1023, 0, 180);
  if (y_pos < 95 && y_pos > 85)
    y_pos = 90;
  RightServo.write(y_pos);
  Serial.print(" ");
  Serial.print(y_pos);

  int b_value = digitalRead(joy_button_pin); // read Button state [0,1]
  Serial.print(" | Button:");
  Serial.println(b_value, DEC);

  lcd.setCursor(0, 0);
  lcd.print( directionString(x_value, y_value) );
  
  delay(100);
}
