# Description

The font has the upper- and lower-case alphabet, numbers and the exclamation mark and the period. You can easily add extra characters if you like.
There is a `#define` that allows you to remove the lower case letters. Doing so strips out 108 bytes. 

Line spacing in pixels can be configured when the font is initialized. Default line spacing is 8 pixels.

## Install

`cd` to the Sketchbook library folder. This is usually ~/Arduboy/libraries or ~/Documents/Arduboy/libraries. 
The exact location depends on your installation. If you are using the Arduino IDE, the location can be found 
in the File->Preferences menu.

`git clone https://github.com/awisse/Font4x6.git`

## Usage

The library can be imported with `#include <Font4x6.h>`.

In order to omit lower case letters, comment out the line `#define USE_LOWER_CASE` in Font4x6.h.

1. Initialize an instance of the `Font4x6` class: `Font4x6 font4x6 = Font4x6();`.
2. For a line spacing of 11 pixels: `Font4x6 font4x6 = Font4x6(11);`.
3. Printing functions are inherited from print.

### Additional Functions

`Font4x6::setCursor(const int8_t x, const int8_t y)` -- Position cursor at coordinates x, y.

`Font4x6::printChar(const char c, const int8_t x, int8_t y)` -- Print character at coordinates x, y.

`Font4x6::setColor(const uint8_t color)` -- Set text color.

`Font4x6::setHeight(const uint8_t height)` -- Set line height.
