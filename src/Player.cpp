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
    draw=0;
}
Player::Player(Player& other)
        : Player(other.getName(),other.getHand(),other.getPosition()){}
Player& Player::operator=(const Player &other)
{

}

string Player::getName() const {

    return name;
}

int Player::getPosition() const {
    return position;
}

int Player::getDraw() const {
    return draw;
}

int Player::getStrategy() const {
    return strategy;
}

void Player::setStrategy(int strat) {
    strategy=strat;
}

void Player::setDraw(int num)  {
    draw=num;
}
void Player::fourCards()
{
    int counter=1;
    int index=0;
    int value=getHand()[0]->getValue();
    for(int i=1;i<getHand().size()&&counter<4;i++)
    {
        if(getHand()[i]->getValue()==value)
        {
            counter++;
        }
        else
        {
            value=getHand()[i]->getValue();
            counter=1;
            index=i;
        }
    }
    if (counter==4)
    {
        for(int i=0;i<4;i++) {
            auto it = getHand().begin();
            advance(it, index);//make sure the iterator get to the right place
            getHand().erase(it);
        }
    }


}
int Player::plays(int cardAsk, Player &playerAsk) {
    if(cardAsk<=1){
        if(cardAsk==-2){
            if(playerAsk.searchHand("JC")!=-1) {
                addCard(*playerAsk.getHand().at((unsigned long)playerAsk.searchHand("JC")));
                playerAsk.removeCard(*playerAsk.getHand().at((unsigned long)playerAsk.searchHand("JC")));
                playerAsk.setDraw(playerAsk.getDraw()+1);
            }
            if(playerAsk.searchHand("JD")!=-1) {
                addCard(*playerAsk.getHand().at((unsigned long)playerAsk.searchHand("JD")));
                playerAsk.removeCard(*playerAsk.getHand().at((unsigned long)playerAsk.searchHand("JD")));
                playerAsk.setDraw(playerAsk.getDraw()+1);
            }
            if(playerAsk.searchHand("JH")!=-1) {
                addCard(*playerAsk.getHand().at((unsigned long)playerAsk.searchHand("JH")));
                playerAsk.removeCard(*playerAsk.getHand().at((unsigned long)playerAsk.searchHand("JH")));
                playerAsk.setDraw(playerAsk.getDraw()+1);
            }
            if(playerAsk.searchHand("JS")!=-1) {
                addCard(*playerAsk.getHand().at((unsigned long)playerAsk.searchHand("JS")));
                playerAsk.removeCard(*playerAsk.getHand().at((unsigned long)playerAsk.searchHand("JS")));
                playerAsk.setDraw(playerAsk.getDraw()+1);
            }
            if(playerAsk.getDraw()==0)
                setDraw(1);
        }
        else if(cardAsk==-1){
            if(playerAsk.searchHand("QC")!=-1) {
                addCard(*playerAsk.getHand().at((unsigned long)playerAsk.searchHand("QC")));
                playerAsk.removeCard(*playerAsk.getHand().at((unsigned long)playerAsk.searchHand("QC")));
                playerAsk.setDraw(playerAsk.getDraw()+1);
            }
            if(playerAsk.searchHand("QD")!=-1) {
                addCard(*playerAsk.getHand().at((unsigned long)playerAsk.searchHand("QD")));
                playerAsk.removeCard(*playerAsk.getHand().at((unsigned long)playerAsk.searchHand("QD")));
                playerAsk.setDraw(playerAsk.getDraw()+1);
            }
            if(playerAsk.searchHand("QH")!=-1) {
                addCard(*playerAsk.getHand().at((unsigned long)playerAsk.searchHand("QH")));
                playerAsk.removeCard(*playerAsk.getHand().at((unsigned long)playerAsk.searchHand("QH")));
                playerAsk.setDraw(playerAsk.getDraw()+1);
            }
            if(playerAsk.searchHand("QS")!=-1) {
                addCard(*playerAsk.getHand().at((unsigned long)playerAsk.searchHand("QS")));
                playerAsk.removeCard(*playerAsk.getHand().at((unsigned long)playerAsk.searchHand("QS")));
                playerAsk.setDraw(playerAsk.getDraw()+1);
            }
            if(playerAsk.getDraw()==0)
                setDraw(1);
        }
        else if(cardAsk==0){
            if(playerAsk.searchHand("KC")!=-1) {
                addCard(*playerAsk.getHand().at((unsigned long)playerAsk.searchHand("KC")));
                playerAsk.removeCard(*playerAsk.getHand().at((unsigned long)playerAsk.searchHand("KC")));
                playerAsk.setDraw(playerAsk.getDraw()+1);
            }
            if(playerAsk.searchHand("KD")!=-1) {
                addCard(*playerAsk.getHand().at((unsigned long)playerAsk.searchHand("KD")));
                playerAsk.removeCard(*playerAsk.getHand().at((unsigned long)playerAsk.searchHand("KD")));
                playerAsk.setDraw(playerAsk.getDraw()+1);
            }
            if(playerAsk.searchHand("KH")!=-1) {
                addCard(*playerAsk.getHand().at((unsigned long)playerAsk.searchHand("KH")));
                playerAsk.removeCard(*playerAsk.getHand().at((unsigned long)playerAsk.searchHand("KH")));
                playerAsk.setDraw(playerAsk.getDraw()+1);
            }
            if(playerAsk.searchHand("KS")!=-1) {
                addCard(*playerAsk.getHand().at((unsigned long)playerAsk.searchHand("KS")));
                playerAsk.removeCard(*playerAsk.getHand().at((unsigned long)playerAsk.searchHand("KS")));
                playerAsk.setDraw(playerAsk.getDraw()+1);
            }
            if(playerAsk.getDraw()==0)
                setDraw(1);
        }
        else if(cardAsk==1){
            if(playerAsk.searchHand("AC")!=-1) {
                addCard(*playerAsk.getHand().at((unsigned long)playerAsk.searchHand("AC")));
                playerAsk.removeCard(*playerAsk.getHand().at((unsigned long)playerAsk.searchHand("AC")));
                playerAsk.setDraw(playerAsk.getDraw()+1);
            }
            if(playerAsk.searchHand("AD")!=-1) {
                addCard(*playerAsk.getHand().at((unsigned long)playerAsk.searchHand("AD")));
                playerAsk.removeCard(*playerAsk.getHand().at((unsigned long)playerAsk.searchHand("AD")));
                playerAsk.setDraw(playerAsk.getDraw()+1);
            }
            if(playerAsk.searchHand("AH")!=-1) {
                addCard(*playerAsk.getHand().at((unsigned long)playerAsk.searchHand("AH")));
                playerAsk.removeCard(*playerAsk.getHand().at((unsigned long)playerAsk.searchHand("AH")));
                playerAsk.setDraw(playerAsk.getDraw()+1);
            }
            if(playerAsk.searchHand("AS")!=-1) {
                addCard(*playerAsk.getHand().at((unsigned long)playerAsk.searchHand("AS")));
                playerAsk.removeCard(*playerAsk.getHand().at((unsigned long)playerAsk.searchHand("AS")));
                playerAsk.setDraw(playerAsk.getDraw()+1);
            }
            if(playerAsk.getDraw()==0)
                setDraw(1);
        }
    }
    else{
        stringstream ss;
        ss << cardAsk;
        string card=ss.str();
        if(playerAsk.searchHand(card+'C')!=-1) {
            addCard(*playerAsk.getHand().at((unsigned long)playerAsk.searchHand(card+'C')));
            playerAsk.removeCard(*playerAsk.getHand().at((unsigned long)playerAsk.searchHand(card+'C')));
            playerAsk.setDraw(playerAsk.getDraw()+1);
        }
        if(playerAsk.searchHand(card+'D')!=-1) {
            addCard(*playerAsk.getHand().at((unsigned long)playerAsk.searchHand(card+'D')));
            playerAsk.removeCard(*playerAsk.getHand().at((unsigned long)playerAsk.searchHand(card+'D')));
            playerAsk.setDraw(playerAsk.getDraw()+1);
        }
        if(playerAsk.searchHand(card+'H')!=-1) {
            addCard(*playerAsk.getHand().at((unsigned long)playerAsk.searchHand(card+'H')));
            playerAsk.removeCard(*playerAsk.getHand().at((unsigned long)playerAsk.searchHand(card+'H')));
            playerAsk.setDraw(playerAsk.getDraw()+1);
        }
        if(playerAsk.searchHand(card+'S')!=-1) {
            addCard(*playerAsk.getHand().at((unsigned long)playerAsk.searchHand(card+'S')));
            playerAsk.removeCard(*playerAsk.getHand().at((unsigned long)playerAsk.searchHand(card+'S')));
            playerAsk.setDraw(playerAsk.getDraw()+1);
        }
        if(playerAsk.getDraw()==0)
            setDraw(1);
    }
    this->fourCards();
    playerAsk.fourCards();
    if(getDraw()!=0)
        return getPosition();
    else
        return playerAsk.getPosition();
}

string Player::printPlayer(){
    string ans="";
    ans=ans+name+": ";
    ans=ans+toString();
    return ans;
}

void Player::setNumOfPlayers(int numOfPlayers) {
    numOfPlayer=numOfPlayers;
}
int Player::getNumOfPlayers(){
    return numOfPlayer;
}
Player::~Player() {
    // TODO Auto-generated destructor stub
}

PlayerType1::PlayerType1() {
}
PlayerType1::PlayerType1(string newName, vector<Card*>& newHand, int myPosition)
        :Player(newName, newHand, myPosition){
    setStrategy(1);
}
PlayerType1::PlayerType1(Player &other)
    :Player(other.getName(),other.getHand(),other.getPosition()){
    setStrategy(1);
}
PlayerType1& PlayerType1::operator=(const PlayerType1 &other)
{

}

int PlayerType1::hasMost()//if asked from a player who won there will be error
{
    int counter=0;
    int tempCard=-3;
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

Player& PlayerType1::mostCards(vector<Player *> &players) {
    unsigned long size=players.size();
    unsigned long mostIndex=0;
    int most=0;
    for(unsigned long i=0; i<size; i++){
        if(most<=players.at(i)->getNumberOfCards() && i!=getPosition()){
            most=players.at(i)->getNumberOfCards();
            mostIndex=i;
        }
    }
    return *players.at(mostIndex);
}

int PlayerType1::playTurn(vector<Player *> &players) {
    int cardAsk=hasMost();
    Player& playerAsk=mostCards(players);
    return plays(cardAsk, playerAsk);
    }



PlayerType2::PlayerType2() {
    setStrategy(2);
}
PlayerType2::PlayerType2(string newName, vector<Card *>& newHand, int myPosition)
        :Player(newName, newHand, myPosition){
    setStrategy(2);
}
PlayerType2::PlayerType2(Player &other)
        :Player(other.getName(),other.getHand(),other.getPosition()){
    setStrategy(2);
}
PlayerType2 & PlayerType2::operator=(const PlayerType2 &other)
{

}

int PlayerType2::playTurn(vector<Player *> & players){
    int cardAsk=hasLeast();
    cout<<cardAsk;
    Player &playerAsk=mostCards(players);

    return plays(cardAsk, playerAsk);
}

int PlayerType2::hasLeast(){ // if hand is always sorted no need to check type of card
    int counter=0;
    int tempCard=-3;
    int leastAmount=1;
    int whatCard=-3;
    bool first=true;
    unsigned long size=getHand().size();
    if(size>0){
        tempCard=getHand().at(0)->getValue();
        whatCard=tempCard;
        counter++;
    }
    for(unsigned long i=1; i<size; i++){
        if(tempCard==getHand().at(i)->getValue()){
            counter++;}
        else{
            if (first)
            {
                leastAmount=counter;
            }
            if(leastAmount>counter){
                whatCard=tempCard;
                leastAmount=counter;
                counter=1;
                tempCard=getHand().at(i)->getValue();
            }
            /*else if(leastAmount==counter){
                whatCard = tempCard;
                counter=1;
                tempCard=getHand().at(i)->getValue();
            }*/
            else{
                counter=1;
                tempCard=getHand().at(i)->getValue();
            }
        }
    }
    if(leastAmount>counter){
        whatCard=tempCard;
    }
    cout<<"this!!!!!!!!!!!!!!!"<<whatCard;
    cout<<"this!!!!!!!!!!!!!!!"<<leastAmount;
    return whatCard;
}

Player& PlayerType2::mostCards(vector<Player *> &players) {
    unsigned long size=players.size();
    unsigned long mostIndex=0;
    int most=0;
    for(unsigned long i=0; i<size; i++){
        if(most<=players.at(i)->getNumberOfCards() && i!=getPosition()){
            most=players.at(i)->getNumberOfCards();
            mostIndex=i;
        }
    }
    return *players.at(mostIndex);
}

PlayerType3::PlayerType3() {
    setStrategy(3);
}
PlayerType3::PlayerType3(string newName, vector<Card *>& newHand, int myPosition)
        :Player(newName, newHand, myPosition){
    if(myPosition==0)
        next=1;
    else
        next=0;
    setStrategy(3);
    }
PlayerType3::PlayerType3(Player &other)
        :Player(other.getName(),other.getHand(),other.getPosition()){
    if(getPosition()==0)
        next=1;
    else
        next=0;
    setStrategy(3);
}
PlayerType3& PlayerType3::operator=(const PlayerType3 &other)
{

}
int PlayerType3::playTurn(vector<Player *> &players) {
    int cardAsk=highestVal();
    if(getNumOfPlayers()==0)
    {
       setNumOfPlayers(players.size());

    }
    Player &playerAsk=*players.at((unsigned)whoNext());
    cout<<playerAsk.getName()<<"!!!!!!!!!!!!";
    return plays(cardAsk, playerAsk);
}
int PlayerType3::highestVal() {
    unsigned long size=getHand().size();
    return getHand().at(size-1)->getValue();
}

int PlayerType3::whoNext() {
    if (next + 1 == getPosition()) {
        if (next + 2 >= getNumOfPlayers()) {
            next = 0;
            return getNumOfPlayers()-2;
        }
        else {
            next = next + 2;
            return next - 2;
        }
    }
    else{
            if (next + 1 >= getNumOfPlayers()) {
                next = 0;
                return getNumOfPlayers() - 1;
            }
            else {
                next = next + 1;
                return next - 1;
            }
        }

}

PlayerType4::PlayerType4() {
    setStrategy(4);
}
PlayerType4::PlayerType4(string newName, vector<Card *>& newHand, int myPosition)
        :Player(newName, newHand, myPosition){
    if(myPosition==0)
        next = 1;
    else
        next = 0;
    setStrategy(4);

}
PlayerType4::PlayerType4(Player  &other)
        :Player(other.getName(),other.getHand(),other.getPosition()){
    if(getPosition()==0)
        next=1;
    else
        next=0;
    setStrategy(4);
}
PlayerType4& PlayerType4::operator=(const PlayerType4 &other)
{

}


int PlayerType4::playTurn(vector<Player *> &players) {
    int cardAsk=lowestVal();
    if(getNumOfPlayers()==0)
    {
        setNumOfPlayers(players.size());

    }
    Player &playerAsk=*players.at(whoNext());
    return plays(cardAsk, playerAsk);
}

int PlayerType4::lowestVal() {
    return getHand().at(0)->getValue();
}

int PlayerType4::whoNext() {
    if(getNumOfPlayers()==0)

    if (next + 1 == getPosition()) {
        if (next + 2 >= getNumOfPlayers()) {
            next = 0;
            return getNumOfPlayers() - 1;
        } else {
            next = next + 2;
            return next - 2;
        }
    } else {
        if (next + 1 >= getNumOfPlayers()) {
            next = 0;
            return getNumOfPlayers() - 1;
        } else {
            next = next + 1;
            return next - 1;
        }
    }
}



