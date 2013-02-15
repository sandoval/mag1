
// include the library code:
#include <LiquidCrystal.h>
#include "Integrate.h"
// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {

  // set up the LCD's number of columns and rows: 
  lcd.begin(16, 2);
  // Print a message to the LCD.
}

int i = 0;
int j = 0;
void loop() {
  i++;
  lcd.setCursor(0,0);
  lcd.print(j);
  lcd.print(":");
  lcd.print(i);
  delay(1000);
  if(i == 60)
  {
    j++;
    i = 0;
  }
}

