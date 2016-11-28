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
Card& Card::operator=(Card &&other)
{
    shape=other.shape;
}
Card& Card::operator=(Card &other)
{
    shape=other.shape;
}


Shape Card::getShape() {
    return shape;
}
bool Card::compare(string str1, string str2) {//compares what card is higher
    if (str1.at(0) == 'K') {        //checks exceptions where lexicographically doesn't work
        if (str2.at(0) == 'K')
            return str1 < str2;
        else if (str2.at(0) == 'A')
            return true;
        else
            return false;
    } else if (str1.at(0) == 'A') {
        if (str2.at(0) == 'A')
            return str1 < str2;
        else
            return false;
    } else if (str2.at(0) == 'K') {
        if (str1.at(0) == 'K')
            return str1 < str2;
        else if (str1.at(0) == 'A')
            return false;
        else
            return true;
    } else if (str2.at(0) == 'A') {
        if (str1.at(0) == 'A')
            return str1 < str2;
        else
            return true;
    }
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
FigureCard& FigureCard::operator=(FigureCard &&other)
{

}
FigureCard& FigureCard::operator=(FigureCard &other)
{

}
FigureCard::FigureCard(FigureCard& other):FigureCard((Figure)other.getValue(),other.getShape()){}
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

NumericCard::~NumericCard() {

}


