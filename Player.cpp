#include <string>
#include <iostream>

using namespace std;

#include "Player.h"

void Player::setName(string name) {
  this-> name = name;
}

void Player::setGuess(string guess) {
  string temp = guess;
  if (guess == "Cho" || guess == "Han") {
    this-> guess = guess;
  }
  else {
    while (temp != "Cho" && temp != "Han") {
      cout << "Please enter \"Cho\" or \"Han\"." << endl;
      cin >> temp;
    }
    this-> guess = temp;
  }
}

void Player::addPoint() {
  points = (points + 1);
}

string Player::getName() const {
  return name;
}

string Player::getGuess() const {
  return guess;
}

int Player::getPoints() const {
  return points;
}
