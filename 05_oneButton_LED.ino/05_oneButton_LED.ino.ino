/*
 * Project: Using OneButton library
 * Description: Introduct Students to OneButton Library using a button and the serial monitor
 * Author: Nycole Davila  
 * Date: 03MAR2020
 */

#include <OneButton.h>

// Setup OneButton on pin 23
OneButton button1(23, false);

int buttonState = LOW;
int flash = LOW;

void setup() {

// Setup Serial Monitor

Serial.begin (9600);
while (!Serial);


// Link oneButton library to functions
button1.attachClick(click1);
button1.attachDoubleClick(doubleclick1);
//Other Clicks that may be used:
//button1.attachLongPressStart(longPressStart1);
//button1.attachLongPressStop(longPressStop1);
//Set Clicks
button1.setClickTicks(250);
button1.setPressTicks(2000);

if(Serial) Serial.println("Starting OneButton..."); 
}

void loop() {
  // keep watching the push buttons:
  button1.tick();
} // loop
/*void loop() {
  // keep watching the push buttons:
  button1.tick();
} // loop
if(buttonState == LOW)

// This function will be called when the button1 was pressed 1 time.
void click1() {
//change and print buttonState
  Serial.println("Button 1 click.");
  buttonState = !buttonState;
  Serial.print("buttonState = ");
  Serial.println(buttonState);
  
  digitalWrite(ledPin, HIGH);
  delay (50);
  digitalWrite(ledPin, LOW);
  delay (50);
  } 
  
// click1{
 else(buttonState = HIGH)
 }
// This function will be called when the button1 was pressed 2 times in a short timeframe.
// change state of flash and print
void doubleclick1() {
  Serial.println("Button 1 doubleclick.");
  
  flash = !flash;
  Serial.print("flash =");
  Serial.println(flash);

  digitalWrite(ledPin, HIGH);
  delay (50);
  digitalWrite(ledPin, LOW);
  delay (50);
}
// This function will be called once, when the button1 is pressed for a long time.
void longPressStart1() {
// longPressStart1
 Serial.println("Button 1 Long Press Start");
// print longPress
  Serial.println("Button 1 Long Press...");
} */
