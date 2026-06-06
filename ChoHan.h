#ifndef CHO_HAN_H
#define CHO_HAN_H

#include <iostream>
#include <string>
using namespace std;

#include "Dealer.h"
#include "Player.h"

class ChoHan {

public:
  void setRounds(int maxRounds); // mine
  //ChoHan(int maxRounds);
  void start();
  void playRound();
  void checkGuess(Player &Player);
  void displayGrandWinner();

private:
  int maxRounds; // integer variable, will hold the number of rounds to play
  Player player1; // Player object, used to represent player #1
  Player player2; // Player object, used to represent player #2
  Dealer dealer; // Dealer object, used to represent the dealer

};

#endif
