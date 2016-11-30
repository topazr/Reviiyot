#ifndef HAND_H_
#define HAND_H_

#include <iostream>
#include <vector>
#include "Card.h"

using namespace std;

class Hand {
private:
	vector<Card*> *pHand;// Declare here the collection of "Card *" of the hand


public:
	Hand();
    static bool compare(Card*, Card*);
	Hand(const vector<Card*>&);
    Hand(Hand &other);
	Hand&operator=(const Hand& other);
	const Hand&operator=( Hand&& other);
	bool addCard(Card &card);
	bool removeCard(Card &card);
	void setHand(vector<Card*>&);
	int getNumberOfCards(); // Get the number of cards in hand
	string toString();// Return a list of the cards, separated by space, in one line, in a sorted order, ex: "2S 5D 10H"
    vector<Card*>& getHand()const;
	int searchHand(string);
	virtual ~Hand();
};

#endif
