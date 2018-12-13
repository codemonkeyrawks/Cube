// Date: 12/13/2018
// Author: Adafruit & (codemonkeyrawks)
// Licence: Creative Commons-Share-Alike-Attribution
// Version: 1.02b-alpha-1

// LED Cube: Functions

// NeoPixel Library
#include <Adafruit_NeoPixel.h>

// LED String Max
#define MAX 8

// Chain: 4 Rows: 4 x 4 Matrix
Adafruit_NeoPixel strip1 = Adafruit_NeoPixel(MAX,4, NEO_RGB + NEO_KHZ400);
Adafruit_NeoPixel strip2 = Adafruit_NeoPixel(MAX,5, NEO_RGB + NEO_KHZ400);
Adafruit_NeoPixel strip3 = Adafruit_NeoPixel(MAX,6, NEO_RGB + NEO_KHZ400);
Adafruit_NeoPixel strip4 = Adafruit_NeoPixel(MAX,7, NEO_RGB + NEO_KHZ400);

void setup() {

  // Init: Strip #1
  strip1.begin();
  strip1.show();
  delay(20);

  // Init: Strip #2
  strip2.begin();
  strip2.show();

  // Init: Strip #3
  strip3.begin();
  strip3.show();

  // Init: Strip #4
  strip4.begin();
  strip4.show();

  pinMode(13, OUTPUT);

}

void loop() {

  // Red
  strip1.setPixelColor(0,255,0,0);
  strip1.setPixelColor(1,255,0,0);
  strip1.setPixelColor(2,255,0,0);
  strip1.setPixelColor(3,255,0,0);
  strip1.setPixelColor(4,255,0,0);
  strip1.setPixelColor(5,255,0,0);
  strip1.show();
  delay(1000);

  // Orange
  strip1.setPixelColor(0,255,128,0);
  strip1.setPixelColor(1,255,128,0);
  strip1.setPixelColor(2,255,128,0);
  strip1.setPixelColor(3,255,128,0);
  strip1.setPixelColor(4,255,128,0);
  strip1.setPixelColor(5,255,128,0);
  strip1.show();
  delay(1000);

  // Yellow
  strip1.setPixelColor(0,255,255,0);
  strip1.setPixelColor(1,255,255,0);
  strip1.setPixelColor(2,255,255,0);
  strip1.setPixelColor(3,255,255,0);
  strip1.setPixelColor(4,255,255,0);
  strip1.setPixelColor(5,255,255,0);
  strip1.show();
  delay(1000);
  
  // Green
  strip1.setPixelColor(0,0,255,0);
  strip1.setPixelColor(1,0,255,0);
  strip1.setPixelColor(2,0,255,0);
  strip1.setPixelColor(3,0,255,0);
  strip1.setPixelColor(4,0,255,0);
  strip1.setPixelColor(5,0,255,0);
  strip1.show();
  delay(1000);

  // Blue
  strip1.setPixelColor(0,0,0,255);
  strip1.setPixelColor(1,0,0,255);
  strip1.setPixelColor(2,0,0,255);
  strip1.setPixelColor(3,0,0,255);
  strip1.setPixelColor(4,0,0,255);
  strip1.setPixelColor(5,0,0,255);
  strip1.show();
  delay(1000);

  // Indigo
  strip1.setPixelColor(0,255,255,0);
  strip1.setPixelColor(1,255,255,0);
  strip1.setPixelColor(2,255,255,0);
  strip1.setPixelColor(3,255,255,0);
  strip1.setPixelColor(4,255,255,0);
  strip1.setPixelColor(5,255,255,0);
  strip1.show();
  delay(1000);

  // Violet
  strip1.setPixelColor(0,255,0,255);
  strip1.setPixelColor(1,255,0,255);
  strip1.setPixelColor(2,255,0,255);
  strip1.setPixelColor(3,255,0,255);
  strip1.setPixelColor(4,255,0,255);
  strip1.setPixelColor(5,255,0,255);
  strip1.show();
  delay(1000);

  for (int x = 0; x <= MAX; x++) {
    strip1.setPixelColor(x,0,0,0);
    strip1.show();
    delay(300);
  }

  //////////////////////

  for (int x = 6; x >= 0; x--) {
    strip1.setPixelColor(x,255,0,0);
    strip1.show();
    delay(300);
  }

  for (int x = 6; x >= 0; x--) {
    strip1.setPixelColor(x,0,0,0);
    strip1.show();
    delay(300);
  }

  for (int x = 0; x <= MAX; x++) {
    strip1.setPixelColor(x,255,0,0);
    strip1.show();
    delay(300);
  }

  //////////////////////

  for (int x = 0; x <= MAX; x++) {
    strip1.setPixelColor(x,0,0,0);
    strip1.show();
    delay(300);
  }

  for (int x = 6; x >= 0; x--) {
    strip1.setPixelColor(x,255,128,0);
    strip1.show();
    delay(300);
  }

  for (int x = 6; x >= 0; x--) {
    strip1.setPixelColor(x,0,0,0);
    strip1.show();
    delay(300);
  }

  for (int x = 0; x <= MAX; x++) {
    strip1.setPixelColor(x,255,128,0);
    strip1.show();
    delay(300);
  }

  //////////////////////

  for (int x = 0; x <= MAX; x++) {
    strip1.setPixelColor(x,0,0,0);
    strip1.show();
    delay(300);
  }

  for (int x = 6; x >= 0; x--) {
    strip1.setPixelColor(x,255,255,0);
    strip1.show();
    delay(300);
  }

  for (int x = 6; x >= 0; x--) {
    strip1.setPixelColor(x,0,0,0);
    strip1.show();
    delay(300);
  }

  for (int x = 0; x <= MAX; x++) {
    strip1.setPixelColor(x,255,255,0);
    strip1.show();
    delay(300);
  }

  //////////////////////

  for (int x = 0; x <= MAX; x++) {
    strip1.setPixelColor(x,0,0,0);
    strip1.show();
    delay(300);
  }

  for (int x = 6; x >= 0; x--) {
    strip1.setPixelColor(x,0,255,0);
    strip1.show();
    delay(300);
  }

  for (int x = 6; x >= 0; x--) {
    strip1.setPixelColor(x,0,0,0);
    strip1.show();
    delay(300);
  }

  for (int x = 0; x <= MAX; x++) {
    strip1.setPixelColor(x,0,255,0);
    strip1.show();
    delay(300);
  }

  //////////////////////

  for (int x = 0; x <= MAX; x++) {
    strip1.setPixelColor(x,0,0,0);
    strip1.show();
    delay(300);
  }

  for (int x = 6; x >= 0; x--) {
    strip1.setPixelColor(x,0,0,255);
    strip1.show();
    delay(300);
  }

  for (int x = 6; x >= 0; x--) {
    strip1.setPixelColor(x,0,0,0);
    strip1.show();
    delay(300);
  }

  for (int x = 0; x <= MAX; x++) {
    strip1.setPixelColor(x,0,0,255);
    strip1.show();
    delay(300);
  }

    //////////////////////

  for (int x = 0; x <= MAX; x++) {
    strip1.setPixelColor(x,0,0,0);
    strip1.show();
    delay(300);
  }

  for (int x = 6; x >= 0; x--) {
    strip1.setPixelColor(x,255,255,0);
    strip1.show();
    delay(300);
  }

  for (int x = 6; x >= 0; x--) {
    strip1.setPixelColor(x,0,0,0);
    strip1.show();
    delay(300);
  }

  for (int x = 0; x <= MAX; x++) {
    strip1.setPixelColor(x,255,255,0);
    strip1.show();
    delay(300);
  }

  //////////////////////

  for (int x = 0; x <= MAX; x++) {
    strip1.setPixelColor(x,0,0,0);
    strip1.show();
    delay(300);
  }

  for (int x = 6; x >= 0; x--) {
    strip1.setPixelColor(x,255,0,255);
    strip1.show();
    delay(300);
  }

  for (int x = 6; x >= 0; x--) {
    strip1.setPixelColor(x,0,0,0);
    strip1.show();
    delay(300);
  }

  for (int x = 0; x <= MAX; x++) {
    strip1.setPixelColor(x,255,0,255);
    strip1.show();
    delay(300);
  }

  for (int x = 0; x <= MAX; x++) {
    strip1.setPixelColor(x,0,0,0);
    strip1.show();
  }

  strip1.setPixelColor(0,255,0,0);
  strip1.show();
  delay(300);
  strip1.setPixelColor(1,255,128,0);
  strip1.show();
  delay(300);
  strip1.setPixelColor(2,255,255,0);
  strip1.show();
  delay(300);
  strip1.setPixelColor(3,0,255,0);
  strip1.show();
  delay(300);
  strip1.setPixelColor(4,0,0,255);
  strip1.show();
  delay(300);
  strip1.setPixelColor(5,255,0,255);
  strip1.show();
  delay(300);
  
  delay(5000);
}
