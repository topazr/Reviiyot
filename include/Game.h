#ifndef GAME_H_
#define GAME_H_

#include <iostream>

#include "Player.h"
#include "Deck.h"

using namespace std;

class Game {
private:
	vector<Player *> players;  //The list of the players
	Deck *deck;
	int verbal;
	int NumOfPlayers;
	int turn;//The deck of the game
public:
	Game();
	Game(char* configurationFile);
	void init();
	void play();
	bool Winner();
	void printState();        //Print the state of the game as described in the assignment.
	void printWinner();       //Print the winner of the game as describe in the assignment.
	void printNumberOfTurns(); //Print the number of played turns at any given time.
};

#endif
