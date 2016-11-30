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
	Jack=-4,
	Queen=-3,
	King=-2,
	Ace=-1
};

class Card {
private:
  Shape shape;
	int maxCard;
public:
  virtual string toString() = 0; //Returns the string representation of the card "<value><shape>" exp: "12S" or "QD"
  virtual ~Card();
    Card();
    Card(Shape);
	Card(Card& other);
	virtual Card&operator=(Card& other)=0;
	virtual Card&operator=(Card&& other)=0;
    void setShape(Shape);
    virtual int getValue()=0;
    Shape getShape();
};

class FigureCard : public Card {
private:
	Figure figure;

public:
	virtual string toString() override;
    FigureCard();// default Constructor
    FigureCard(Figure, Shape);
	FigureCard(FigureCard& other);
	FigureCard&operator=(Card& other);
	FigureCard&operator=(Card&& other);
	virtual int getValue() override ;
    ~FigureCard();
};

class NumericCard : public Card {
private:
	int number;
public:
	virtual string toString() override;
    NumericCard();// default Constructor
    NumericCard(int, Shape);
    NumericCard&operator=(Card&);
    NumericCard&operator=(Card&&);
    //NumericCard(NumericCard);
    virtual int getValue() override ;
    ~NumericCard();

};

#endif
