#ifndef DEALER_H
#define DEALER_H

#include <iostream>
#include <string>
using namespace std;

#include "Die.h"

class Dealer {

public:
  void rollDice();
  string getChoOrHan();
  int getDie1Value() const {
    return die1.getValue();
  }
  int getDie2Value() const {
    return die2.getValue();
  }

private:
  Die die1; // Die object, used to represent die #1.
  Die die2; // Die object, used to represent die #2.
};

#endif
