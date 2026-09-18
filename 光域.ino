#include <FastLED.h>

#define LED_PIN     8      // GPIO8
#define NUM_LEDS    256    // 16×16 = 256
#define BRIGHTNESS  20     // 极低亮度，安全第一

CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<WS2812B, LED_PIN, GRB>(leds, NUM_LEDS);
  FastLED.setBrightness(BRIGHTNESS);
  FastLED.clear();
  FastLED.show();
}

void loop() {
  // 只点亮前10颗，颜色为红色
  for (int i = 0; i < 10; i++) {
    leds[i] = CRGB::Red;
  }
  FastLED.show();
  delay(2000);  // 亮2秒

  // 全灭2秒
  FastLED.clear();
  FastLED.show();
  delay(2000);
}