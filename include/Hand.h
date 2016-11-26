#ifndef HAND_H_
#define HAND_H_

#include <iostream>
#include <vector>
#include "Card.h"

using namespace std;

class Hand {
private:
	vector<Card*> pHand;// Declare here the collection of "Card *" of the hand
    static bool compare1(Card*, Card*);

public:
	Hand();
	Hand(const vector<Card*>&);
    Hand(Hand &other);
	bool addCard(Card &card);
	bool removeCard(Card &card);
	int getNumberOfCards(); // Get the number of cards in hand
	string toString();// Return a list of the cards, separated by space, in one line, in a sorted order, ex: "2S 5D 10H"
    vector<Card*>& getHand();
	int searchHand(string);
	virtual ~Hand();
};

#endif
