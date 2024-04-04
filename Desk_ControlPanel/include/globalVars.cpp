#include <globalVars.h>

void setup() {
    pinMode(Display_reset, OUTPUT);
    pinMode(Display_CLK, OUTPUT);
    pinMode(Display_DT, OUTPUT);
    pinMode(3, INPUT_PULLUP);
    pinMode(4, INPUT_PULLUP);
    pinMode(5, INPUT_PULLUP);
    // RELAYS
    pinMode(6, OUTPUT);     //Relay_1
    pinMode(7, OUTPUT);     //Relay_2
    pinMode(8, OUTPUT);     //Relay_3
    pinMode(9, OUTPUT);     //Relay_4
    pinMode(10, OUTPUT);    //Relay_5
    pinMode(11, OUTPUT);    //Relay_6
    pinMode(12, OUTPUT);    //Relay_7
    pinMode(13, OUTPUT);    //Relay_8
  
}

void loop() {
    EncoderChA = digitalRead(3);
    EncoderChB = digitalRead(4);
    EncoderBtn = digitalRead(5);
    digitalWrite(6,  (Relay[0] == true) ? HIGH : LOW);
    digitalWrite(7,  (Relay[1] == true) ? HIGH : LOW);
    digitalWrite(8,  (Relay[2] == true) ? HIGH : LOW);
    digitalWrite(9,  (Relay[3] == true) ? HIGH : LOW);
    digitalWrite(10, (Relay[4] == true) ? HIGH : LOW);
    digitalWrite(11, (Relay[5] == true) ? HIGH : LOW);
    digitalWrite(12, (Relay[6] == true) ? HIGH : LOW);
    digitalWrite(13, (Relay[7] == true) ? HIGH : LOW);

}    