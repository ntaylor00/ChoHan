#ifndef DIE_H
#define DIE_H

#include <iostream>

using namespace std;

class Die {

public:
  Die();
  Die(int sides);
  void roll();
  int getSides() const;
  int getValue() const;

private:
  int sides; // number of sides
  int value; // the die's value
};

#endif
