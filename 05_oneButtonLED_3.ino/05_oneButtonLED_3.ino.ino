/*Project: Using OneButton Library Assignment 2
 * Description: Using OneButton Library to control 2 LEDs with one button
 * Author: Nycole Davila
 * Date: 04MAR2020
 */

 #include <OneButton.h>

 //Setup OneButton on pin 23
 OneButton button1(23, false);
 int buttonState = LOW;
 int flash = LOW;
 int ledPinRed = 5;
 int ledPinBlue = 6;
 int ledPinGreen = 7;
 int switchLED = 0;
 
void setup() {
  Serial.begin(9600);
  while(!Serial);
  //OneButton library functions
  button1.attachClick(click1);
  button1.attachDoubleClick(doubleclick1);
  button1.setClickTicks(250);
  button1.setPressTicks(2000);
  //Other clicks that may be used;
  //button1.attachLongPressStart(longPressStart1);
  //button1.attachLongPressStop(LongPressStop1);
  pinMode (5, OUTPUT);

 if(Serial)Serial.println("Starting OneButton...  Want to play a Game?");
}

void loop() {
  button1.tick();
  Serial.print("switchLED = ");
  Serial.println("Switching LED")
  if(buttonState == LOW){
  digitalWrite(5, LOW);
  }
  else
  {
    digitalWrite(5, HIGH);}
    {
    if(switchLED = 0);
  }
  else
}

  void click1(){
    Serial.println("Button has been clicked...");
    buttonState = !buttonState;
    Serial.print("buttonState = ");
    Serial.println(buttonState); 
  }


  void doubleclick1(){

    switchLED++;
    if (switchLED > 2){
      switchLED = 0
    }

    Serial.println("Button has been double clicked...");
    buttonState = !buttonState;
    Serial.print("buttonState = ");
    Serial.println(buttonState);
  }

  


}
