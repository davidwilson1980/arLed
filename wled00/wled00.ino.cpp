# 1 "C:\\Users\\David\\AppData\\Local\\Temp\\tmpx5c0v8h6"
#include <Arduino.h>
# 1 "C:/Users/David/Documents/Arduino/Projects/wled-audio/arLed/wled00/wled00.ino"
# 13 "C:/Users/David/Documents/Arduino/Projects/wled-audio/arLed/wled00/wled00.ino"
#include "wled.h"
void setup();
void loop();
#line 15 "C:/Users/David/Documents/Arduino/Projects/wled-audio/arLed/wled00/wled00.ino"
void setup() {
  WLED::instance().setup();
}

void loop() {
  WLED::instance().loop();
}