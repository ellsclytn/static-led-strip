#include <Adafruit_NeoPixel.h>
#include "env.h"

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(
  NUM_PIXELS,
  LED_PIN,
  NEO_GRB + NEO_KHZ800
);

void setup() {
  pixels.begin();

  for (int i = 0; i < NUM_PIXELS; i++) {
    pixels.setPixelColor(i, pixels.Color(180, 70, 0));
  }

  pixels.show();
}

void loop() {
}
