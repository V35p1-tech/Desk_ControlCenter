#include <Arduino.h>
#include <U8g2lib.h>
#include <SPI.h>
#include <Wire.h>

int Display_reset = 0;
int Display_CLK = 1;
int Display_DT = 2; 


U8G2_SH1106_128X64_NONAME_F_HW_I2C Display(U8G2_R0, U8X8_PIN_NONE, Display_CLK, Display_DT) [full framebuffer, size = 1024 bytes];

void setup() {
 Display.begin();
}

void loop() {
  Display.firstPage();
  do {
    Display.setFont(u8g2_font_ncenB14_tr);
    Display.drawStr(0,24,"Hello World!");
  } while ( Display.nextPage() );
}
