#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
using namespace std;

class Player {

public:
  void setName(string name);
  void setGuess(string guess);
  void addPoint();
  string getName() const;
  string getGuess() const;
  int getPoints() const;

private:
  string name; // will hold the player’s name
  string guess; // will hold the player’s guess
  int points = 0; // will hold the player’s points and is initialized to 0

};

#endif
