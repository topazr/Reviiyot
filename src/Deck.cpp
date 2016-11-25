/*
 * Deck.cpp
 *
 *  Created on: Nov 20, 2016
 *      Author: topaz
 */

#include "../include/Deck.h"
//#include "../include/Card.h"
#include <algorithm>

Deck::Deck() {
}
Deck::Deck(int N) {
    vector<Card*> temp;
    for(int i=N; i>0; i--){
        if(i>1) {
            Card *currentCard = new NumericCard(i,Club);
            temp.push_back(currentCard);
            currentCard = new NumericCard(i,Heart);
            temp.push_back(currentCard);
            currentCard = new NumericCard(i,Spade);
            temp.push_back(currentCard);
            currentCard = new NumericCard(i,Diamond);
            temp.push_back(currentCard);
        }
        else{
            Card *currentCard = new FigureCard(Jack, Club);
            temp.push_back(currentCard);
            currentCard = new FigureCard(Jack, Diamond);
            temp.push_back(currentCard);
            currentCard = new FigureCard(Jack, Spade);
            temp.push_back(currentCard);
            currentCard = new FigureCard(Jack, Heart);
            temp.push_back(currentCard);
            currentCard = new FigureCard(Queen, Club);
            temp.push_back(currentCard);
            currentCard = new FigureCard(Queen, Heart);
            temp.push_back(currentCard);
            currentCard = new FigureCard(Queen, Diamond);
            temp.push_back(currentCard);
            currentCard = new FigureCard(Queen, Spade);
            temp.push_back(currentCard);
            currentCard = new FigureCard(King, Club);
            temp.push_back(currentCard);
            currentCard = new FigureCard(King, Heart);
            temp.push_back(currentCard);
            currentCard = new FigureCard(King, Diamond);
            temp.push_back(currentCard);
            currentCard = new FigureCard(King, Spade);
            temp.push_back(currentCard);
            currentCard = new FigureCard(Ace, Club);
            temp.push_back(currentCard);
            currentCard = new FigureCard(Ace, Heart);
            temp.push_back(currentCard);
            currentCard = new FigureCard(Ace, Diamond);
            temp.push_back(currentCard);
            currentCard = new FigureCard(Ace, Spade);
            temp.push_back(currentCard);
        }
    }
    random_shuffle(temp.begin(), temp.end());

    while(!temp.empty())
    {
        CardDeck.push(*temp.back());
        temp.pop_back();
    }
    //delete temp; check if need this
}
Card* Deck::fetchCard() {
    Card *ans= CardDeck.front();
    CardDeck.pop();
    return ans;

}
int Deck::getNumberOfCards() {
    return (int)CardDeck.size();
}
string Deck::toString() {
    string ans;
    if(CardDeck.empty())
        return "";
    else {
        const int size=(int)CardDeck.size();
        int counter=0;
        Card *temp=CardDeck.front();
        CardDeck.pop();
        ans=temp->toString();
        CardDeck.push(temp);
        counter++;
        while(counter!=size){
            temp=CardDeck.front();
            CardDeck.pop();
            ans=ans+" "+temp->toString();
            CardDeck.push(temp);
            counter++;


        }
        delete temp;

    }
return ans;
}

Deck::~Deck() {
	// TODO Auto-generated destructor stub
}

