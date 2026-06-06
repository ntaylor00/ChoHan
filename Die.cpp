#include <iostream>

using namespace std;

#include "Die.h"

Die::Die() {
  sides = 6;
}

Die::Die(int sides) {
  this->sides = sides;
}

void Die::roll() {
  int dieVal = (rand() % (sides + 1));
  value = dieVal;
}

int Die::getSides() const {
  return sides;
}

int Die::getValue() const {
  return value;
}
