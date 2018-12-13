// Date: 12/13/2018
// Author: Adafruit (Limor Fried/Ladyada) & (codemonkeyrawks)
// Licence: Creative Commons-Share-Alike-Attribution and MIT Licence
// Version: 1.02b-alpha-1


// SPI, I2C, HX8357 TFT, GFX TFT, STMPE610 Touch
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include "Adafruit_HX8357.h"
#include "Adafruit_STMPE610.h"

#include "TouchScreen.h"  // ETRA

// These are the four touchscreen analog pins
#define YP A2  // must be an analog pin, use "An" notation!
#define XM A3  // must be an analog pin, use "An" notation!
#define YM 7   // can be a digital pin
#define XP 8   // can be a digital pin

// This is calibration data for the raw touch data to the screen coordinates
#define TS_MINX 110
#define TS_MINY 80
#define TS_MAXX 900
#define TS_MAXY 940

#define MINPRESSURE 10
#define MAXPRESSURE 1000

TouchScreen ts = TouchScreen(XP, YP, XM, YM, 300);

// HX8357 TFT PINS
#define SD_CS 4
#define TFT_DC 9
#define TFT_CS 10

// Init: HX8357
Adafruit_HX8357 tft = Adafruit_HX8357(TFT_CS, TFT_DC);

// Init: STMPE610 Touch
Adafruit_STMPE610 touch = Adafruit_STMPE610();

void setup() {

  // Gather Touch Sensor
  int x,y,z;
  //touch.readData(x,y,z);
  
  // TFT: White Background
  tft.begin(HX8357D);
  tft.setRotation(3);
  tft.fillScreen(HX8357_WHITE);

  // Display: Approx Temp:
  tft.setCursor(60,20);
  tft.setTextColor(HX8357_BLACK);
  tft.setTextSize(2);
  tft.println("Temp:  75F");

  // Display: Humidity
  tft.setCursor(60,40);
  tft.setTextColor(HX8357_BLACK);
  tft.setTextSize(2);
  tft.println("Humid: 20%");
  
}

void loop() {

  // Read Input
  TSPoint p = ts.getPoint();

  tft.fillScreen(HX8357_WHITE);

  // Display: X Coord
  tft.setCursor(60,60);
  tft.setTextColor(HX8357_BLACK);
  tft.setTextSize(2);
  tft.println(p.x);

  // Display: Y Coord
  tft.setCursor(60,80);
  tft.setTextColor(HX8357_BLACK);
  tft.setTextSize(2);
  tft.println(p.y);

  // Display: Z Coord
  tft.setCursor(60,100);
  tft.setTextColor(HX8357_BLACK);
  tft.setTextSize(2);
  tft.println(p.z);

  delay(2000);

}
