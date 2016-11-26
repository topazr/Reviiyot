/*
 * Player.cpp
 *
 *  Created on: Nov 20, 2016
 *      Author: topaz
 */
#include <string>
#include <vector>
#include <sstream>
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

Card* PlayerType1::hasMost()
{
    int counter=0;
    string tempCard;
    int mostAmount=0;
    string whatCard="-1";
    unsigned long index;
    unsigned long size=getHand();
    if(size>0){
        tempCard=getHand().at(0)->toString().substr(0,(getHand().at(0)->toString().length())-1 );
        counter++;
        index=0;
    }
    for(unsigned long i=1; i<size; i++){
        if(tempCard==getHand().at(i)->toString().substr(0,(getHand().at(i)->toString().length())-1 ))
            counter++;
        else{
            if(mostAmount<counter){
                whatCard=tempCard;
                mostAmount=counter;
                counter=1;
                tempCard=getHand().at(i)->toString().substr(0,(getHand().at(i)->toString().length())-1 );
                index=i;
            }
            else if(mostAmount==counter && compare(whatCard, tempCard)){
                whatCard = tempCard;
                counter=1;
                tempCard=getHand().at(i)->toString().substr(0,(getHand().at(i)->toString().length())-1 );
                index=i;
            }
            else{
                counter=1;
                tempCard=getHand().at(i)->toString().substr(0,(getHand().at(i)->toString().length())-1 );
            }
        }
    }
    return getHand().at(index);
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

Card* PlayerType2::hasLeast(){ // if hand is always sorted no need to check type of card
    int counter=0;
    string tempCard;
    int leastAmount=5;//only 4 cards from each type
    string whatCard="-1";
    unsigned long index;
    unsigned long size=getHand().size();
    if(size>0){
        tempCard=getHand().at(0)->toString().substr(0,(getHand().at(0)->toString().size())-1 );
        counter++;
        index=0;
    }
    for(unsigned long i=1; i<size; i++){
        if(tempCard==getHand().at(i)->toString().substr(0,(getHand().at(i)->toString().size())-1 ))
            counter++;
        else{
            if(leastAmount>counter){
                whatCard=tempCard;
                leastAmount=counter;
                counter=1;
                tempCard=getHand().at(0)->toString().substr(0,(getHand().at(0)->toString().size())-1 );
                index=i;
            }
            else if(leastAmount==counter && compare(tempCard, whatCard)){//maybe don't need this because cards are always sorted
                whatCard = tempCard;
                counter = 0;
                index=i;
            }
        }
    }
    return getHand().at(index);
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


Card* PlayerType3::highestVal() {
    return getHand().at(getHand().size()-1);
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

Card* PlayerType4::lowestVal() {
    return getHand().at(0);
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



