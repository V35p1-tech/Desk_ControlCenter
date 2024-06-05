#include "globalVars.h"


//Screen
    int Display_reset = 2;
    int Display_CLK = 0;
    int Display_DT = 1; 

    int Screen_Selected;
    const int Screen_1 = 0;
    const int Screen_2 = 1;
    const int Screen_3 = 2;

    int Row_Selected;
    int Row_Height = 10;

    const int Row_1 = 0;
    const int Row_2 = 1;
    const int Row_3 = 2;
    const int Row_4 = 3;
    const int Row_5 = 4;
    int Row_1_X = 12;
    int Row_2_X = 24;
    int Row_3_X = 36;
    int Row_4_X = 48;
    int Row_5_X = 60;
    int Row_Text_Y = 20;
    char Row_1_Text[30] = "Wiersz 1";
    char Row_2_Text[30] = "Wiersz 2";
    char Row_3_Text[30] = "Wiersz 3";
    char Row_4_Text[30] = "Wiersz 4";
    char Row_5_Text[30] = "Nastepna strona";


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
    digitalWrite(6,  (Relay[1] == true) ? HIGH : LOW);
    digitalWrite(7,  (Relay[2] == true) ? HIGH : LOW);
    digitalWrite(8,  (Relay[3] == true) ? HIGH : LOW);
    digitalWrite(9,  (Relay[4] == true) ? HIGH : LOW);
    digitalWrite(10, (Relay[5] == true) ? HIGH : LOW);
    digitalWrite(11, (Relay[6] == true) ? HIGH : LOW);
    digitalWrite(12, (Relay[7] == true) ? HIGH : LOW);
    digitalWrite(13, (Relay[8] == true) ? HIGH : LOW);

}    