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
	Card(Card& other);
	Card&operator=(Card& other);
	Card&operator=(Card&& other);

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
	FigureCard(FigureCard& other);
	FigureCard&operator=(FigureCard& other);
	FigureCard&operator=(FigureCard&& other);
	virtual int getValue() override ;
};

class NumericCard : public Card {
private:
	int number;
public:
	virtual string toString() override;
	NumericCard();// default Constructor
	NumericCard(int, Shape);
    ~FigureCard();
    //NumericCard(NumericCard);
    virtual int getValue() override ;
    ~NumericCard();

};

#endif
