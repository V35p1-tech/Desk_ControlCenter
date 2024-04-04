#include <Arduino.h>
#include <globalVars.h>
#include <SPI.h>
#include <Wire.h>

void globalVars();
void screenHandling();

void setup() {
 //Display.begin();
}

void loop() {
  for (int i = Screen_1; i <= Screen_2; i++) {
    for (int i2 = Row_1; i <= Row_4; i2++) {
      int relayNo = ((i+1)*i2);
      if (Screen[i].Row[i2].Activated == true) {
          Relay[1] = true;//Relay[relayNo] = true;  <- chuj wie czemu sie nie kompiluje!
      }
      else {
          ;//  Relay[relayNo] = false; 
      };
    };  
  };
}  
