/*
 * Card.cpp
 *
 *  Created on: Nov 20, 2016
 *      Author: topaz
 */

#include "../include/Card.h"

Card::Card() {
}
Card::Card(Shape x):shape(x){
}
Card:: Card(Card& other)
        :Card(other.getShape()){}
/*Card& Card::operator=(Card &&other)
{
    shape=other.shape;
}
Card& Card::operator=(Card &other)
{
    shape=other.shape;
}*/


Shape Card::getShape() {
    return shape;
}

void Card::setShape(Shape other) {
    shape=other;
}
Card::~Card() {

}

FigureCard::~FigureCard() {

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
int FigureCard::getValue() {
    return figure;
}
FigureCard& FigureCard::operator=(Card &&other)
{
    Card::setShape(other.getShape());
    figure=(Figure)other.getValue();
}
FigureCard& FigureCard::operator=(Card &other)
{
    Card::setShape(other.getShape());
    figure=(Figure)other.getValue();
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
    string num;
    num=to_string(number);
    return num+ans;
}

int NumericCard::getValue() {
    return number;
}
NumericCard& NumericCard::operator=(Card &&other)
{
    Card::setShape(other.getShape());
    number=other.getValue();
}
NumericCard& NumericCard::operator=(Card &other)
{
    Card::setShape(other.getShape());
    number=other.getValue();
}

NumericCard::~NumericCard() {

}
