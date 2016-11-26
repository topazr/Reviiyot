#ifndef CARD_H_
#define CARD_H_

#include <iostream>
#include <string>
using namespace std;

enum Shape {
	Club,
	Diamond,
	Heart,
	Spade
};

enum Figure {
	Jack=-2,
	Queen=-1,
	King=0,
	Ace=1
};

class Card {
private:
  Shape shape;
public:
  virtual string toString() = 0; //Returns the string representation of the card "<value><shape>" exp: "12S" or "QD"
  virtual ~Card();
    Card();
    Card(Shape);
    //Card(Card);
    virtual int getValue()=0;
    Shape getShape();
    bool compare(string,string);
};

class FigureCard : public Card {
private:
	Figure figure;

public:
	virtual string toString() override;
    FigureCard();// default Constructor
    FigureCard(Figure, Shape);
    //FigureCard(FigureCard);
    virtual int getType() override ;
    ~FigureCard();
};

class NumericCard : public Card {
private:
	int number;
public:
	virtual string toString() override;
    NumericCard();// default Constructor
    NumericCard(int, Shape);
    //NumericCard(NumericCard);
    virtual int getType() override ;
    ~NumericCard();

};

#endif
