#ifndef HAND_H_
#define HAND_H_

#include <iostream>
#include <vector>
#include "Card.h"

using namespace std;

class Hand {
private:
	vector<Card*> pHand;// Declare here the collection of "Card *" of the hand
    bool compare1(Card&, Card&);
    int searchHand(Card&);

public:
	Hand();
	Hand(vector<Card*>);
	bool addCard(Card &card);
	bool removeCard(Card &card);
	int getNumberOfCards(); // Get the number of cards in hand
	string toString();// Return a list of the cards, separated by space, in one line, in a sorted order, ex: "2S 5D 10H"
    vector<Card*> getHand();
};

#endif
