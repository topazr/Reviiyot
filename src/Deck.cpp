/*
 * Deck.cpp
 *
 *  Created on: Nov 20, 2016
 *      Author: topaz
 */

#include "../include/Deck.h"
#include <algorithm>
#include <sstream>

Deck::Deck() {
}

Deck::Deck(string deck) {
    while(deck.length()!=0){
        if(deck.at(0)>='0' && deck.at(0)<='9'){
            int num;
            string number="";
            unsigned long i;
            for(i=0; deck.at(i)!=' '; i++){
                number=number+deck.at(i);
            }
            deck=deck.substr(i+1,deck.length()-i+1);//cuts the first card from the string
            //cout<<deck.at(0);
            istringstream(number) >>num;
            if(number.at(number.length()-1)=='C')
                CardDeck.push(new NumericCard(num,Club));
            else if(number.at(number.length()-1)=='D')
                CardDeck.push(new NumericCard(num,Diamond));
            else if(number.at(number.length()-1)=='H')
                CardDeck.push(new NumericCard(num,Heart));
            else if(number.at(number.length()-1)=='S')
                CardDeck.push(new NumericCard(num,Spade));

        }
        else {
            if (deck.at(0) == 'J') {
                if (deck.at(1) == 'C')
                    CardDeck.push(new FigureCard(Jack, Club));
                else if (deck.at(1) == 'D')
                    CardDeck.push(new FigureCard(Jack, Diamond));
                else if (deck.at(1) == 'H')
                    CardDeck.push(new FigureCard(Jack, Heart));
                else if (deck.at(1) == 'S')
                    CardDeck.push(new FigureCard(Jack, Spade));
            }
            else if (deck.at(0) == 'Q') {
                if (deck.at(1) == 'C')
                    CardDeck.push(new FigureCard(Queen, Club));
                else if (deck.at(1) == 'D')
                    CardDeck.push(new FigureCard(Queen, Diamond));
                else if (deck.at(1) == 'H')
                    CardDeck.push(new FigureCard(Queen, Heart));
                else if (deck.at(1) == 'S')
                    CardDeck.push(new FigureCard(Queen, Spade));
            }
            else if (deck.at(0) == 'K') {
                if (deck.at(1) == 'C')
                    CardDeck.push(new FigureCard(King, Club));
                else if (deck.at(1) == 'D')
                    CardDeck.push(new FigureCard(King, Diamond));
                else if (deck.at(1) == 'H')
                    CardDeck.push(new FigureCard(King, Heart));
                else if (deck.at(1) == 'S')
                    CardDeck.push(new FigureCard(King, Spade));
            } else if (deck.at(0) == 'A') {
                if (deck.at(1) == 'C')
                    CardDeck.push(new FigureCard(Ace, Club));
                else if (deck.at(1) == 'D')
                    CardDeck.push(new FigureCard(Ace, Diamond));
                else if (deck.at(1) == 'H')
                    CardDeck.push(new FigureCard(Ace, Heart));
                else if (deck.at(1) == 'S')
                    CardDeck.push(new FigureCard(Ace, Spade));
            }
            if(deck.size()>2)
                deck=deck.substr(3,deck.length()-3);//cuts the first card from the string
            else if(deck.size()==2)
                deck="";

        }
    }
}

/*Deck::Deck(int N) {
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
}*/

Deck::Deck(Deck &other)
        :Deck(other.toString()){
}
Deck::Deck(Deck &&other)
{
    this->getcardDeck()=other.getcardDeck();
    other.getcardDeck()= nullptr;
}
Deck& Deck::operator=(const Deck &&other)
{
    if (this!=&other)
    {
        this->getcardDeck()=other.getcardDeck();
        other.getcardDeck()= nullptr;
    }

}
Deck& Deck::operator=(const Deck &other)
{
    if (this!=&other)
    {
        Deck* temp= new Deck(other);
        this=temp;

    }
    return *this;
}
queue<Card*>& Deck::getcardDeck() const {
        return CardDeck;
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
vector<Card*>& Deck::dealCards() {
    vector<Card*> *newHand;
    for(int i=0; i<7; i++)
        newHand->push_back(fetchCard());
    return *newHand;
}

Deck::~Deck() {

}

