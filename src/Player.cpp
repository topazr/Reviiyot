/*
 * Player.cpp
 *
 *  Created on: Nov 20, 2016
 *      Author: topaz
 */
#include <string>
#include <vector>
#include "../include/Player.h"



Player::Player() {
}
Player::Player(string newName, vector<Card*>& newHand, int myPosition)
        :Hand(newHand){
    name=newName;
    position=myPosition;
}
Player::Player(Player& other)
        : Player(other.getName(),other.getHand(),other.getPosition()){}

string Player::getName() {
    return name;
}

int Player::getPosition() {
    return position;
}

string Player::printPlayer(){
    string ans("");
    ans.append(getName()+":");
    ans.append(Hand::toString());
    return ans;
}

Player::~Player() {
    // TODO Auto-generated destructor stub
}

PlayerType1::PlayerType1() {
}
PlayerType1::PlayerType1(string newName, vector<Card*>& newHand, int myPosition)
        :Player(newName, newHand, myPosition){

}

int PlayerType1::hasMost()//if asked from a player who won there will be error
{
    int counter=0;
    int tempCard;
    int mostAmount=0;
    int whatCard=-3;
    unsigned long size=getHand().size();
    if(size>0){
        tempCard=getHand().at(0)->getValue();
        counter++;
    }
    for(unsigned long i=1; i<size; i++){
        if(tempCard==getHand().at(i)->getValue())
            counter++;
        else{
            if(mostAmount<counter) {
                whatCard = tempCard;
                mostAmount = counter;
                counter = 1;
                tempCard = getHand().at(i)->getValue();
            }
            else if(mostAmount==counter){
                whatCard = tempCard;
                counter=1;
                tempCard=getHand().at(i)->getValue();
            }
            else{
                counter=1;
                tempCard=getHand().at(i)->getValue();
            }
        }
    }
    return whatCard;
}

Player* PlayerType1::mostCards(vector<Player *> players) {
    unsigned long size=players.size();
    unsigned long mostIndex=0;
    int most=0;
    for(unsigned long i=0; i<size; i++){
        if(most<=players.at(i)->getNumberOfCards() && i!=getPosition()){
            most=players.at(i)->getNumberOfCards();
            mostIndex=i;
        }
    }
    return players.at(mostIndex);
}

PlayerType2::PlayerType2() {
}
PlayerType2::PlayerType2(string newName, vector<Card *>& newHand, int myPosition)
        :Player(newName, newHand, myPosition){

}

int PlayerType2::hasLeast(){ // if hand is always sorted no need to check type of card
    int counter=0;
    int tempCard=-5;
    int leastAmount=0;
    int whatCard=-3;
    unsigned long size=getHand().size();
    if(size>0){
        tempCard=getHand().at(0)->getValue();
        counter++;
    }
    for(unsigned long i=1; i<size; i++){
        if(tempCard==getHand().at(i)->getValue())
            counter++;
        else{
            if(leastAmount>counter){
                whatCard=tempCard;
                leastAmount=counter;
                counter=1;
                tempCard=getHand().at(i)->getValue();
            }
            else if(leastAmount==counter){
                whatCard = tempCard;
                counter=1;
                tempCard=getHand().at(i)->getValue();
            }
            else{
                counter=1;
                tempCard=getHand().at(i)->getValue();
            }
        }
    }
    return whatCard;
}

Player* PlayerType2::mostCards(vector<Player *> players) {
    unsigned long size=players.size();
    unsigned long mostIndex=0;
    int most=0;
    for(unsigned long i=0; i<size; i++){
        if(most<=players.at(i)->getNumberOfCards() && i!=getPosition()){
            most=players.at(i)->getNumberOfCards();
            mostIndex=i;
        }
    }
    return players.at(mostIndex);
}

PlayerType3::PlayerType3() {
}
PlayerType3::PlayerType3(string newName, vector<Card *>& newHand, int myPosition, int numOfPlayers)
        :Player(newName, newHand, myPosition){
    if(myPosition==0)
        next=1;
    else
        next=0;
    numOfPlayer=numOfPlayers;

}

int PlayerType3::highestVal() {
    unsigned long size=getHand().size();
    return getHand().at(size-1)->getValue();
}

int PlayerType3::whoNext() {
    if(next+1==getPosition()){
        if(next+2>=numOfPlayer) {
            next = 0;
            return numOfPlayer-1;
        }
        else {
            next = next + 2;
            return next - 2;
        }
    }
    else{
            if (next + 1 >= numOfPlayer) {
                next = 0;
                return numOfPlayer - 1;
            }
            else {
                next = next + 1;
                return next - 1;
            }
        }

}
int PlayerType3::playTurn(vector<Player*>& players)
{




}

PlayerType4::PlayerType4() {
}
PlayerType4::PlayerType4(string newName, vector<Card *>& newHand, int myPosition, int numOfPlayers)
        :Player(newName, newHand, myPosition){
    if(myPosition==0)
        next=1;
    else
        next=0;
    numOfPlayer=numOfPlayers;
}

int PlayerType4::lowestVal() {
    return getHand().at(0)->getValue();
}

int PlayerType4::whoNext() {
    if (next + 1 == getPosition()) {
        if (next + 2 >= numOfPlayer) {
            next = 0;
            return numOfPlayer - 1;
        } else {
            next = next + 2;
            return next - 2;
        }
    } else {
        if (next + 1 >= numOfPlayer) {
            next = 0;
            return numOfPlayer - 1;
        } else {
            next = next + 1;
            return next - 1;
        }
    }
}



