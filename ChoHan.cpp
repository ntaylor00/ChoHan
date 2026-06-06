#include <iostream>
#include <string>

using namespace std;

#include "ChoHan.h"

/*ChoHan::ChoHan(int maxRounds) { //FIXME
  this->maxRounds = maxRounds;
}*/
void ChoHan::setRounds(int maxRounds) { // mine
  this-> maxRounds = maxRounds;
}

void ChoHan::start() {
  int roundNum = 1;
  string temp;
  cout << "Welcome to Cho-Han! Enter Player 1's name:" << endl;
  cin >> temp;
  player1.setName(temp);
  cout << "Enter Player 2's name:" << endl;
  cin >> temp;
  player2.setName(temp);

  for (int i = 0; i < maxRounds; ++i) {
    cout << "-----------------------------------"  << endl;
    cout << "Round " << roundNum << ":" << endl;
    playRound();
    roundNum = roundNum + 1;
  }
  displayGrandWinner();
}

void ChoHan::playRound() {
  string temp;
  dealer.rollDice();
  cout << "Enter a guess for " << player1.getName() << ": ";
  cin >> temp;
  player1.setGuess(temp);
  cout << "Enter a guess for " << player2.getName() << ": ";
  cin >> temp;
  player2.setGuess(temp);

  cout << "The dealer rolled " << dealer.getDie1Value() << " and " << dealer.getDie2Value() << endl;
  cout << "Results: " << dealer.getChoOrHan() << endl;
  
  checkGuess(player1);
  checkGuess(player2);
}

void ChoHan::checkGuess(Player &Player) { // bool??
  cout << Player.getName() << " guessed " << Player.getGuess() << "." << endl;
  if ((Player.getGuess() == "Cho" && dealer.getChoOrHan() == "Cho (even)") || 
    (Player.getGuess() == "Han" && dealer.getChoOrHan() == "Han (odd)")) {
    cout << Player.getName() << " is correct. Awarding one point to "
         << Player.getName() << "." << endl;
    Player.addPoint();
  }
  else {
    cout << Player.getName() << " is incorrect." << endl;
  }
}

void ChoHan::displayGrandWinner() {
  cout << "-----------------------------------"  << endl;
  cout << "Game over. Results: " << endl
       << player1.getName() << ": " << player1.getPoints() << " points" << endl
       << player2.getName() << ": " << player2.getPoints() << " points" << endl;
  if (player1.getPoints() > player2.getPoints()) {
    cout << player1.getName() << " is the grand winner!" << endl;
  }
  else if (player2.getPoints() > player1.getPoints()) {
      cout << player2.getName() << " is the grand winner!" << endl;
    }
  else {
    cout << player1.getName() << " and " << player2.getName() << " tie!" << endl;
  }
}
