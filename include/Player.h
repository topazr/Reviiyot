#ifndef PLAYER_H_
#define PLAYER_H_

#include <iostream>
#include "Card.h"
#include "Hand.h"
#include <string>

using namespace std;

class Player : public Hand{
private:
	string name;
    int position;
	int draw;
public:
	Player();
	Player(string, vector<Card*>&,int);
    Player(Player &other);
	string printPlayer();
	~Player();
	string getName();   //Returns the name of the player
	int getPosition();
	virtual int playTurn(vector<Player*>&)=0;
	int getDraw();
	void setDraw(int);
};

class PlayerType1 : public Player {  //For strategy 1
//...
private:
	int hasMost();
	Player& mostCards(vector<Player*>&);
public:
	PlayerType1();
	PlayerType1(string, vector<Card*>&,int);
	virtual int playTurn(vector<Player*>&) override ;


};

class PlayerType2 : public Player{  //For strategy 2
//...
private:
	int hasLeast();
	Player& mostCards(vector<Player*>&);
public:
	PlayerType2();
	PlayerType2(string, vector<Card*>&,int);
	virtual int playTurn(vector<Player*>&) override ;
};

class PlayerType3 : public Player {  //For strategy 3
//...
private:
    int next;//keeps next player to ask from - initialize to 0
	int numOfPlayer;
	int highestVal();
	int whoNext();
public:
	PlayerType3();
	PlayerType3(string, vector<Card*>&,int, int);
	virtual  int playTurn(vector<Player*>&) override ;
};

class PlayerType4 : public Player {  //For strategy 4
//...
private:
	int next;//keeps next player to ask from - initialize to 0
	int numOfPlayer;
	int lowestVal();
	int whoNext();
public:
	PlayerType4();
	PlayerType4(string, vector<Card*>&,int, int);
	virtual int playTurn(vector<Player*>&) override ;
};

#endif
