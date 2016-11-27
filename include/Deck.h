#ifndef DECK_H_
#define DECK_H_

#include <iostream>
#include <queue>
#include <string>

#include "Card.h"

using namespace std;

class Deck{
private:
	queue<Card*>* CardDeck;// Declare here the collection of "Card *" of the deck
public:
    Deck();
    Deck(string deck);
    Deck(Deck& other);
	Deck(Deck&& other);
	Deck& operator=(const Deck& other);
	Deck& operator=( Deck&& other);
	queue<Card*>& getcardDeck()const;
    queue<Card*>& setDeck();
    Card* fetchCard();   //Returns the top card of the deck and remove it from the deck
    vector<Card*>& dealCards();// deals card for beginning of game
	int getNumberOfCards(); // Get the number of cards in the deck
	string toString(); // Return the cards in top-to-bottom order in a single line, cards are separated by a space ex: "12S QD AS 3H"
    ~Deck();
};

#endif
