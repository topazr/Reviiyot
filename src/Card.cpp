/*
 * Card.cpp
 *
 *  Created on: Nov 20, 2016
 *      Author: topaz
 */

#include "../include/Card.h"
#include <sstream>
Card::Card() {
	}
Card::Card(Shape x):shape(x){
}

Shape Card::getShape() {
    return shape;
}

Card::~Card() {
    // TODO Auto-generated destructor stub
}
FigureCard::FigureCard() {
}
FigureCard::FigureCard(Figure fig, Shape shape1)
    : Card(shape1), figure(fig){
}

string FigureCard::toString() {
    string ans="";
    Shape shape=getShape();
    if(figure==Jack)
        ans="J";
    else if(figure==Queen)
        ans="Q";
    else if(figure==King)
        ans="K";
    else if(figure==Ace)
        ans="A";
    if(shape==Club)
        ans=ans+'C';
    else if(shape==Diamond)
        ans=ans+'D';
    else if(shape==Heart)
        ans=ans+'H';
    else if(shape==Spade)
        ans=ans+'S';
    return ans;
}


NumericCard::NumericCard() {}
NumericCard::NumericCard(int num, Shape shape1)
    : Card(shape1), number(num){
}

string NumericCard::toString() {
    string ans;
    Shape shape=getShape();
    if(shape==Club)
        ans='C';
    else if(shape==Diamond)
        ans='D';
    else if(shape==Heart)
        ans='H';
    else
        ans='S';
    stringstream ss;
    ss << number << endl;
    return ss.str()+ans;
}



