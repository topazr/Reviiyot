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
	int strategy;
	int numOfPlayer;
public:
	Player();
	Player(string, vector<Card*>&,int);
	Player(Player &other);
	virtual Player& operator=(const Player &other);
	string printPlayer();
	~Player();
	string getName() const ;   //Returns the name of the player
	int getPosition()const ;
	virtual int playTurn(vector<Player*>&)=0;
	int getDraw() const ;
	void setDraw(int);
	int plays(int, Player&);
	void fourCards();
	void setStrategy(int);
	int getStrategy() const;
	void setNumOfPlayers(int);
	int getNumOfPlayers();
};

class  PlayerType1 : public Player {  //For strategy 1
//...
private:
	int hasMost();
	Player& mostCards(vector<Player*>&);
public:
	PlayerType1();
	PlayerType1(Player& other);
	PlayerType1(string, vector<Card*>&,int);
	virtual int playTurn(vector<Player*>&) override ;
	PlayerType1& operator=(const PlayerType1 &other);
};

class PlayerType2 : public Player{  //For strategy 2
//...
private:
	int hasLeast();
	Player& mostCards(vector<Player*>&);

public:
	PlayerType2();
	PlayerType2(string, vector<Card*>&,int);
	PlayerType2(Player& other);
	virtual int playTurn(vector<Player*>&) override ;
	PlayerType2& operator=(const PlayerType2 &other);
};

class PlayerType3 : public Player {  //For strategy 3
//...
private:
	int next;//keeps next player to ask from - initialize to 0
	int highestVal();
	int whoNext();
public:
	PlayerType3();
	PlayerType3(string, vector<Card*>&,int);
	PlayerType3(Player& other);
	virtual  int playTurn(vector<Player*>&) override ;
	PlayerType3& operator=(const PlayerType3 &other);
	};

class PlayerType4 : public Player {  //For strategy 4
//...
private:
	int next;//keeps next player to ask from - initialize to 0
	int lowestVal();
	int whoNext();
public:
	PlayerType4();
	PlayerType4(string, vector<Card*>&,int);
	PlayerType4(Player& other);
	PlayerType4& operator=(const PlayerType4 &other);
	virtual int playTurn(vector<Player*>&) override ;
};

#endif