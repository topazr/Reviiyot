#ifndef PLAYER_H_
#define PLAYER_H_

#include <iostream>
#include "Card.h"
#include "Hand.h"
#include <string>

using namespace std;

class Player : public Hand, public Card{
private:
	string name;
    int position;

public:
	Player();
	Player(string, vector<Card*>,int);
    Player(Player &other);
	string printPlayer();
	~Player();
	string getName();   //Returns the name of the player
	int getPosition();

};

class PlayerType1 : public Player {  //For strategy 1
//...
private:

public:
	PlayerType1();
	PlayerType1(string, vector<Card*>,int);
    Card* hasMost();
    Player* mostCards(vector<Player*>);
};

class PlayerType2 : public Player{  //For strategy 2
//...
private:

public:
	PlayerType2();
	PlayerType2(string, vector<Card*>,int);
    Card* hasLeast();
	Player* mostCards(vector<Player*>);
};

class PlayerType3 : public Player {  //For strategy 3
//...
private:
    int next;//keeps next player to ask from - initialize to 0
	int numOfPlayer;
public:
	PlayerType3();
	PlayerType3(string, vector<Card*>,int, int);
    Card* highestVal();
	int whoNext();
};

class PlayerType4 : public Player {  //For strategy 4
//...
private:
	int next;//keeps next player to ask from - initialize to 0
	int numOfPlayer;
public:
	PlayerType4();
	PlayerType4(string, vector<Card*>,int, int);
    Card* lowestVal();
	int whoNext();

};

#endif
