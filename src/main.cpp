#include <Arduino.h>

#include <U8glib.h>
#include "Bitmap.h"
#include "images.h"

U8GLIB_ST7920_128X64_1X u8g(6, 5, 4 ,7); //Enable, RW, RS, RESET - Config for home

//U8GLIB_SSD1309_128X64 u8g(13, 11, 10, 9); // SPI Com: SCK = 13, MOSI = 11, CS = 10, A0 = 9

//U8GLIB_SSD1306_128X64 u8g(U8G_I2C_OPT_NONE);  // HW SPI Com: CS = 10, A0 = 9 (Hardware Pins are  SCK = 13 and MOSI = 11)

void setup() {

// u8g.firstPage();
//   do{
//     //u8g.setRot180();  // Rotaciona a tela em 180 graus se necessário
//     //u8g.setFont(u8g_font_6x10);
//      u8g.setFont(u8g_font_5x7);
//     u8g.drawBitmapP(10, 10, 14, 40, bitmap_Linux_logo_icon_112x40_Inverter);
//     //delay(2000);
//     //u8g.drawBitmapP(10, 0, 13, 40, bitmap_Linux_logo_icon_103x40_Inverter);
//     //u8g.drawBitmapP(10, 0, 12, 21, bitmap_Windows_logo_92x21);
//     //u8g.drawBitmapP(1, 20, 16, 31, bitmap_Windows_logo_128x31);
//     //u8g.drawBitmapP(3, 10, 15, 40, bitmap_Texas_Instruments_logo_120x40);
//     //u8g.drawBitmapP(5, 20, 15, 33, bitmap_National_Instruments_logo_120x33);
//     //delay(2000);
//     //u8g.drawStr(0, 10, "Hello World!");
//   } while (u8g.nextPage());
//   delay(2000);

//   u8g.firstPage();
//   do{
//     u8g.drawBitmapP(5, 20, 15, 33, bitmap_National_Instruments_logo_120x33);
//   } while (u8g.nextPage());
//   delay(2000);
  
}

void loop() {

  u8g.firstPage();
  do{
    //u8g.setRot180();  // Rotaciona a tela em 180 graus se necessário
    //u8g.setFont(u8g_font_6x10);
     u8g.setFont(u8g_font_5x7);
    u8g.drawBitmapP(10, 10, 14, 40, bitmap_Linux_logo_icon_112x40_Inverter);
    //delay(2000);
    //u8g.drawBitmapP(10, 0, 13, 40, bitmap_Linux_logo_icon_103x40_Inverter);
    //u8g.drawBitmapP(10, 0, 12, 21, bitmap_Windows_logo_92x21);
    //u8g.drawBitmapP(1, 20, 16, 31, bitmap_Windows_logo_128x31);
    //u8g.drawBitmapP(3, 10, 15, 40, bitmap_Texas_Instruments_logo_120x40);
    //u8g.drawBitmapP(5, 20, 15, 33, bitmap_National_Instruments_logo_120x33);
    //delay(2000);
    //u8g.drawStr(0, 10, "Hello World!");
  } while (u8g.nextPage());
  delay(2000);

  u8g.firstPage();
  do{
    u8g.drawBitmapP(5, 20, 15, 33, bitmap_National_Instruments_logo_120x33);
  } while (u8g.nextPage());
  delay(2000);

  u8g.firstPage();
  do{
    u8g.drawBitmapP(10, 0, 15, 40, bitmap_Texas_Instruments_logo_120x40);
  } while (u8g.nextPage());
  delay(2000);

  u8g.firstPage();
  do{
    u8g.drawBitmapP(1, 20, 16, 31, bitmap_Windows_logo_128x31);
  } while (u8g.nextPage());
  delay(2000);

  u8g.firstPage();
  do{
    u8g.drawBitmapP(10, 1, 13, 64, microchip_101x64);
  } while (u8g.nextPage());
  delay(2000);

  u8g.firstPage();
  do{
    u8g.drawBitmapP(35, 5, 8, 58, raspberry_58x58);
  } while (u8g.nextPage());
  delay(2000);

  u8g.firstPage();
  do{
    u8g.drawBitmapP(1, 20, 16, 40, raspberry_124x40);
  } while (u8g.nextPage());
  delay(2000);

  u8g.firstPage();
  do{
    u8g.drawBitmapP(1, 20, 16, 31, bitmap_Windows_logo_128x31);
  } while (u8g.nextPage());
  delay(2000);

    u8g.firstPage();
  do{
    u8g.drawBitmapP(25, 5, 8, 62, pixels_62x62);
  } while (u8g.nextPage());
  delay(2000);

    u8g.firstPage();
  do{
    u8g.drawBitmapP(25, 5, 16, 64, ATMEL_128x64);
  } while (u8g.nextPage());
  delay(2000);

    u8g.firstPage();
  do{
    u8g.drawBitmapP(25, 5, 13, 64, ST_103x64);
  } while (u8g.nextPage());
  delay(2000);

    u8g.firstPage();
  do{
    u8g.drawBitmapP(25, 5, 12, 64, Arduino_94x64);
  } while (u8g.nextPage());
  delay(2000);

    u8g.firstPage();
  do{
    u8g.drawBitmapP(25, 5, 10, 64, OpenHardware_78x64);
  } while (u8g.nextPage());
  delay(2000);
 
}

