/*
 * Game.cpp
 *
 *  Created on: Nov 20, 2016
 *      Author: topaz
 */

#include "../include/Game.h"
#include <fstream>

Game::Game() {}
Game::Game(char* configurationFile): NumOfPlayers(0),turn(0) {

    ifstream inFile;
    inFile.open(configurationFile);
    string line;
    int count=0;
    getline(inFile,line);
     while (count<3)
       {

           while (line.length()==0||(line.at(0)=='#' ))
           {
               getline(inFile,line);

           }
           if (count==0){
                verbal=line.at(0)-'0';
           }
           else if (count==2)
                deck=Deck(line);
           count++;
           getline(inFile,line);

       }
    int position=0;
    while (line.length()==0||(line.at(0)=='#' ))
    {
        getline(inFile,line);
    }
    while (!inFile.eof()) {
         unsigned long index = line.find(" ");
         string name = line.substr(0, index);
         while(line.length()!=0 && line.at(index)==' '){
                 index++;
         }
         int player=line.at(index)-'0';
         if (player==1){
             players.push_back(new PlayerType1(name,deck.dealCards(),position));
         }
         else if (player==2){
             players.push_back(new PlayerType2(name,deck.dealCards(),position));
         }
         else if (player==3) {
             players.push_back(new PlayerType3(name, deck.dealCards(), position));
         }
         else if (player==4){
             players.push_back(new PlayerType4(name,deck.dealCards(),position));
         }
         position++;
         getline(inFile,line);
         while(!inFile.eof() && line.length()==0)
             getline(inFile, line);

    }
    NumOfPlayers=position;
}

Game::Game (Game&& other)
{
    players=other.getPlayers();
    deck=other.getDeck();
    verbal=other.getVerbal();
    NumOfPlayers=other.getNumOfPlayers();
    turn=other.getTurn();

}
Game::Game (Game& other)
          {
              players.clear();
              for(unsigned long i=0; i<other.getNumOfPlayers(); i++){
                  if(other.getPlayers().at(i)->getStrategy()==1)
                      players.push_back(new PlayerType1(*other.getPlayers().at(i)));
                  else if(other.getPlayers().at(i)->getStrategy()==2)
                      players.push_back(new PlayerType2(*other.getPlayers().at(i)));
                  else if(other.getPlayers().at(i)->getStrategy()==3)
                      players.push_back(new PlayerType3(*other.getPlayers().at(i)));
                  else if(other.getPlayers().at(i)->getStrategy()==4)
                      players.push_back(new PlayerType4(*other.getPlayers().at(i)));
            }

              deck=other.getDeck();
            verbal=other.getVerbal();
            NumOfPlayers=other.getNumOfPlayers();
            turn=other.getTurn();




}
Game& Game::operator=(const Game& other){
    if(this!=&other)
    {
        players.clear();
        for(unsigned long i=0; i<other.getNumOfPlayers(); i++){
            if(other.getPlayers().at(i)->getStrategy()==1)
                players.push_back(new PlayerType1(*other.getPlayers().at(i)));
            else if(other.getPlayers().at(i)->getStrategy()==2)
                players.push_back(new PlayerType2(*other.getPlayers().at(i)));
            else if(other.getPlayers().at(i)->getStrategy()==3)
                players.push_back(new PlayerType3(*other.getPlayers().at(i)));
            else if(other.getPlayers().at(i)->getStrategy()==4)
                players.push_back(new PlayerType4(*other.getPlayers().at(i)));
        }
        deck=other.getDeck();
        verbal=other.getVerbal();
        NumOfPlayers=other.getNumOfPlayers();
        turn=other.getTurn();

    }
    return *this;

}
Game& Game::operator=(const Game&& other){
    if(this!=&other)
    {
        players.clear();
        for(unsigned long i=0; i<other.getNumOfPlayers(); i++){
            if(other.getPlayers().at(i)->getStrategy()==1)
                players.push_back(new PlayerType1(*other.getPlayers().at(i)));
            else if(other.getPlayers().at(i)->getStrategy()==2)
                players.push_back(new PlayerType2(*other.getPlayers().at(i)));
            else if(other.getPlayers().at(i)->getStrategy()==3)
                players.push_back(new PlayerType3(*other.getPlayers().at(i)));
            else if(other.getPlayers().at(i)->getStrategy()==4)
                players.push_back(new PlayerType4(*other.getPlayers().at(i)));
        }

        deck=other.getDeck();
        verbal=other.getVerbal();
        NumOfPlayers=other.getNumOfPlayers();
        turn=other.getTurn();

    }
    return *this;

}
void Game::printState()
{
    cout<<"Turn "<<turn+1<<endl;
    cout<<"Deck: " <<deck.toString()<<endl;
    for (unsigned long i=0;i<NumOfPlayers;i++)
    {
        cout<<players.at(i)->printPlayer()<<endl;
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

        printState();
        int turnToPlay=turn%NumOfPlayers;


        int PlayerDraw=players.at((unsigned long)turnToPlay)->playTurn(players);
        cout<<endl;
        int numOfdraw=players.at((unsigned long)PlayerDraw)->getDraw();

        while(numOfdraw>0 & deck.getNumberOfCards()>0)
        {
            players.at((unsigned long)PlayerDraw)->addCard(*deck.fetchCard());
            numOfdraw--;
            players.at((unsigned long)PlayerDraw)->setDraw(numOfdraw);
        }
        players.at((unsigned long)turnToPlay)->fourCards();
        players.at((unsigned long)PlayerDraw)->fourCards();
        if(!Winner())
            turn++;
    }
   /* if (verbal==1) {
        printState();
    }*/

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
            {winner2.append(" and "+players.at(i)->getName());}
        }
    }
    if (winner2=="")
        cout<<"*****The Winner is: "<<winner<<"*****"<<endl;
    else
        cout<<"*****The Winners are: "<<winner+winner2<<"*****"<<endl;
}
void Game::printNumberOfTurns()
{
    cout<<"Number of: "<<turn+1<<endl;
}

const vector <Player*>&  Game::getPlayers() const
{
    return players;
}
void Game::init() {

}
int Game::getVerbal () const
{
    return verbal;
}
int Game::getTurn() const
{
    return turn;
}
int Game::getNumOfPlayers() const
{
    return NumOfPlayers;
}
const Deck& Game::getDeck() const
{
    return deck;
}



Game::~Game() {

	// TODO Auto-generated destructor stub
}

