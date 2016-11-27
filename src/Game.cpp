/*
 * Game.cpp
 *
 *  Created on: Nov 20, 2016
 *      Author: topaz
 */

#include "../include/Game.h"
#include <fstream>

Game::Game() {}
Game::Game(char* configurationFile): turn(0) {
       ifstream inFile;
        inFile.open(configurationFile);

       string line;
       int count=0;
       while (count<4)
       {
           getline(inFile,line);
           if (line.at(0)=='#') {
               getline(inFile,line);
                while (line.length()==0)
                {
                    getline(inFile,line);
                }
                if (count==0){
                    verbal=line.at(0)-'0';}
               else if (count==2)
                {
                    deck=Deck(line);
                }


           }
           count++;

       }
        int position=0;

        while (!inFile.eof()) {
        unsigned long index = line.find("");
        string name = line.substr(0, index);
        int player=line.at(index+1)-'0';
        if (player==1){
            players.push_back(new PlayerType1(name,deck.dealCards(),position));}
            if (player==2){
                players.push_back(new PlayerType2(name,deck.dealCards(),position));}
            if (player==3){
                players.push_back(new PlayerType3(name,deck.dealCards(),position));}
            if (player==4){
                players.push_back(new PlayerType4(name,deck.dealCards(),position));}
        position++;
        getline(inFile,line);
    }
    NumOfPlayers=position+1;
}

Game::Game (Game&& other)
        : players((other.getPlayers())),deck(other.getDeck()),verbal(other.getVerbal()),NumOfPlayers(other.getNumOfPlayers()),turn(other.getTurn())  {

}
Game::Game (Game& other)
        : players((other.getPlayers())),deck(other.getDeck()),verbal(other.getVerbal()),NumOfPlayers(other.getNumOfPlayers()),turn(other.getTurn())  {

}
Game& Game::operator=( Game& other){
    if(this!=&other)
    {

      Game* temp=new Game(other);
        return *temp;
    }

}
void Game::printState()
{
    cout<<"Turn "<<turn<<endl;
    cout<<"Deck: " <<deck.toString()<<endl;
    for (unsigned long i=0;i<NumOfPlayers;i++)
    {
        players.at(i)->printPlayer();
        cout<<endl;
    }
}

bool Game::Winner()
{
    bool winner= false;
    for (auto it=players.begin(); it!=players.end();it++)
    {
       if (it.operator*()->getNumberOfCards()==0)
       {
           winner=true;
       }
    }
    return winner;
}
void Game::play()
{
    while (!Winner())
    {
        int turnToPlay=turn%NumOfPlayers;

        int PlayerDraw=players.at((unsigned long)turnToPlay)->playTurn(players);
        for (int i=0;i<players.at((unsigned long)PlayerDraw)->getDraw();i++)
        {
            players.at((unsigned long)PlayerDraw)->addCard(*deck.fetchCard());
        }

        turn++;
    }
    if (verbal==1) {
        printState();
    }

}
void Game::printWinner()
{
    string winner("");
    string winner2("");
    for (unsigned long i=0;i<NumOfPlayers;i++)
    {
        if (players.at(i)->getNumberOfCards()==0)
        {
            if (winner=="")
                winner.append(players.at(i)->getName());
            else
            {winner2.append("and"+players.at(i)->getName());}
        }
    }
    if (winner2=="")
        cout<<"*****The Winner is: "<<winner<<"*****"<<endl;
    else
        cout<<"*****The Winners are: "<<winner+winner2<<"*****"<<endl;
}
void Game::printNumberOfTurns()
{
    cout<<"Number of turns: "<<turn<<endl;
}

vector <Player*>& Game::getPlayers()
{
    return players;
}
void Game::init() {

}
int Game::getVerbal()
{
    return verbal;
}
int Game::getTurn()
{
    return turn;
}
int Game::getNumOfPlayers()
{
    return NumOfPlayers;
}
Deck& Game::getDeck()
{
    return deck;
}



Game::~Game() {
    delete (&players);
	// TODO Auto-generated destructor stub
}

