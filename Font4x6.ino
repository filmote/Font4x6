#include <Arduboy2.h>
#include "src/fonts/Font4x6.h"

Arduboy2Base arduboy;
Font4x6 font4x6 = Font4x6();

void setup() {

  arduboy.boot();

}

void loop() {

  if (!(arduboy.nextFrame())) return;

  arduboy.clear();
  font4x6.setCursor(0, 12);
  font4x6.print(F("ABCDEFGHIJKLMNOPQRSTUVWXYZ"));
  font4x6.print(F("\nabcdefghijklmnopqrstuvwxyz"));
  font4x6.print(F("\n0123456789"));
  font4x6.print(F("\n!."));

  arduboy.display();

}
