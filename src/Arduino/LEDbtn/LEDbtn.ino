#include "LPD8806.h"
#include "SPI.h" // Comment out this line if using Trinket or Gemma
#ifdef __AVR_ATtiny85__
#include <avr/power.h>
#endif

// Button values
int lastValue = 0;
int currentValue = 0;

const int deviation = 50;

const int btnPerPin = 5;

const int btnPins[]                    = {1, 2};
const char btnBuildings[][btnPerPin]   = { {'A'  , 'B'   , 'C', 'E'   , 'F'   }, {'G'             , 'H' , 'J'     , 'K'     , 'L'    } };
const int btnValues[][btnPerPin]       = {{ 318  , 408   , 695, 511   , 91    }, {319             , 409 , 696     , 512     , 91     } };
const int ledPositions[][btnPerPin][4] = {{{6, 7}, {4, 5}, {3}, {8, 9}, {0   }}, {{18, 19, 20 , 21}, {10}, {12, 13}, {16, 17}, {14, 15}}};

char selectedBuilding = ' ';
char selectedBuildingLEDs[] = {0, 0};

// Number of RGB LEDs in strand:
const int nLEDs = 22;

// Chose 2 pins for output; can be any valid output pins:
const int dataPin  = 3;
const int clockPin = 2;

LPD8806 strip = LPD8806(nLEDs, dataPin, clockPin);


void setup() {
  Serial.begin(9600);

#if defined(__AVR_ATtiny85__) && (F_CPU == 16000000L)
  clock_prescale_set(clock_div_1); // Enable 16 MHz on Trinket
#endif

  // Start up the LED strip
  strip.begin();

  // Update the strip, to start they are all 'off'
  strip.show();

  startUpShow();
}

void loop() {
  selectedBuilding = ' ';

  for (int i = 0; i < sizeof(btnPins) / sizeof(*btnPins); i++) {
    currentValue = analogRead(btnPins[i]);

    if (!isSameValue(currentValue, 0, 25)) {
      for (int j = 0; j < sizeof(btnValues[i]) / sizeof(*btnValues[i]); j++) {
        if (isSameValue(currentValue, btnValues[i][j], deviation)) {
          selectedBuilding = btnBuildings[i][j];
          selectedBuildingLEDs[0] = i;
          selectedBuildingLEDs[1] = j;
        }
      }
    }
  }

  if (selectedBuilding != ' ') {
    Serial.println(selectedBuilding); // send to Pi

    for (int i = 0; i < strip.numPixels(); i++) strip.setPixelColor(i, 0); // turn all pixels off

    for (int i = 0; i < sizeof(ledPositions[selectedBuildingLEDs[0]][selectedBuildingLEDs[1]]) / sizeof(*ledPositions[selectedBuildingLEDs[0]][selectedBuildingLEDs[1]]); i++) {
      if (!(i > 0 && ledPositions[selectedBuildingLEDs[0]][selectedBuildingLEDs[1]][i] == 0)) {
        strip.setPixelColor(ledPositions[selectedBuildingLEDs[0]][selectedBuildingLEDs[1]][i], strip.Color(0, 0, 255));
      }
    }
    strip.show(); // Refresh LED states

    delay(100);
  }

}

boolean isSameValue(int originalValue, int compareValue, int deviation) {
  return originalValue >= compareValue - deviation && originalValue <= compareValue + deviation;
}

void startUpShow() {

  for (int i = 0; i < sizeof(ledPositions) / sizeof(*ledPositions); i++) {
    for (int j = 0; j < sizeof(ledPositions[i]) / sizeof(*ledPositions[i]); j++) {
      for (byte m = 0; m <= 127; m++) {
        for (int k = 0; k < sizeof(ledPositions[i][j]) / sizeof(*ledPositions[i][j]); k++) {
          if (!(k > 0 && ledPositions[i][j][k] == 0)) {
            strip.setPixelColor(ledPositions[i][j][k], strip.Color(0, 0, m));
            delay(1);
            strip.show(); // Refresh LED states
          }
        }
      }
    }
  }

  for (int i = 0; i < strip.numPixels(); i++) strip.setPixelColor(i, 0);
  strip.show(); // Refresh LED states

}

