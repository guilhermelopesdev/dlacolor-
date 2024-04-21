/*  Library: dlacolor.h
 *  Creator: Guilherme Lopes
 *  Date: 20 - 11 - 2020
 *  Example: setrgb
 */

#include <dlacolor.h> // Imports from library to code

pinrgb nomeLED (3, 5, 6); // Define the LED's RGB terminals by order (R, G, B)

void setup() {

}

void loop() {
  nomeLED.rgb(255, 255, 255); //Defines the color by RGB, following in order (R, G and B)
}
