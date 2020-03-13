/*
 * Project: Using OneButton library
 * Description: Use oneButton to light and blink an LED
 * Author: Nycole Davila
 * Date: 03MAR2020 
 */

#include <OneButton.h>

// Setup OneButton on pin 23 
OneButton button1(23, false);

int buttonState = LOW;
int flash = LOW;
int ledPin5 = 5;
int ledPin6 = 6;
int ledPin7 = 7;

void setup() {

  Serial.begin(9600);
  while (!Serial);
// Link oneButton library to functions
button1.attachClick(click1);
button1.attachDoubleClick(doubleclick1);
button1.setClickTicks(250);
button1.setPressTicks(2000);
//Other clicks that may be used:
//button1.attachLongPressStart(longPressStart1)
//button1.attachLongPressStop(longPressStop1)

  pinMode (5, OUTPUT);

if (Serial)Serial.println("Starting OneButton... Want to play a Game?");
} 

void loop() {
  // keep watching the push button:
  button1.tick();
  if (buttonState == LOW){
    digitalWrite (5, LOW);
  }
  else
  {
  digitalWrite (5, HIGH);
if (flash == true){
  digitalWrite(ledPin5, HIGH); 
  delay(50);
  digitalWrite(ledPin5, LOW);
  delay(50);
  }
} 
}

void click1() {
Serial.println("Button has been clicked..");
buttonState = !buttonState;
Serial.print("buttonState = ");
Serial.println(buttonState); 
} 


void doubleclick1() {
    // light or blink LED based on buttonState and Flash 
  if (buttonState == HIGH);
    flash = !flash;

Serial.println("Button has been double clicked..");
buttonState = !buttonState;
Serial.print("buttonState = ");
Serial.println(buttonState); 
} 
