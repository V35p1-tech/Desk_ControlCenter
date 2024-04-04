#include <Arduino.h>
//Screen
    extern int Display_reset = 2;
    extern int Display_CLK = 0;
    extern int Display_DT = 1; 
//Encoder 
    extern int EncoderChA; //pin 3
    extern int EncoderChB; //pin 4
    extern int EncoderBtn; //pin 5
//Relay
    extern bool Relay[8];      
    // extern bool Relay_1; //pin 6   
    // extern bool Relay_2; //pin 7   
    // extern bool Relay_3; //pin 8 
    // extern bool Relay_4; //pin 9 
    // extern bool Relay_5; //pin 10 
    // extern bool Relay_6; //pin 11 
    // extern bool Relay_7; //pin 12 
    // extern bool Relay_8; //pin 13   
//Screens
    extern int Screen_Selected;
    extern const int Screen_1 = 0;  
    extern const int Screen_2 = 1;   
    extern const int Screen_3 = 2; 
//Rows Y
    extern int Row_Selected; 
    extern int Row_Height = 10; 

    extern const int Row_1 = 0;  
    extern const int Row_2 = 1;  
    extern const int Row_3 = 2;  
    extern const int Row_4 = 3;  
    extern const int Row_5 = 4;   
    extern int Row_1_X = 12;
    extern int Row_2_X = 24;
    extern int Row_3_X = 36;
    extern int Row_4_X = 48;
    extern int Row_5_X = 60;
    extern int Row_Text_Y = 20;
    extern char Row_1_Text[30] = "Wiersz 1";
    extern char Row_2_Text[30] = "Wiersz 2";
    extern char Row_3_Text[30] = "Wiersz 3";
    extern char Row_4_Text[30] = "Wiersz 4";
    extern char Row_5_Text[30] = "Nastepna strona";

    struct RowData {
        char Text[100];
        bool Activated;
    };
    struct screenData 
    {
        RowData Row[5];
    };
    extern screenData Screen[5];
    extern screenData ScreenActual;
  