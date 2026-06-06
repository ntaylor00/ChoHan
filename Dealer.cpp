#include <iostream>
#include <string>

using namespace std;

#include "Dealer.h"

void Dealer::rollDice() {
  die1.roll();
  die2.roll();
}

string Dealer::getChoOrHan() {
  int dieTotal;
  dieTotal = die1.getValue() + die2.getValue();

  if (dieTotal % 2 == 0) {
    return "Cho (even)";
  }
  else {
    return "Han (odd)";
  }
  return 0;
}
