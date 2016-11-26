/*
 * Game.cpp
 *
 *  Created on: Nov 20, 2016
 *      Author: topaz
 */

#include "../include/Game.h"
#include <sstream>

Game::Game() {}
Game::Game(char* configurationFile): turn(0) {
        configurationFile++;

        for (int i=0;i<4;i++) {
            string answer("");
            while (*configurationFile != '\n') {
                configurationFile++;
            }
            while (*configurationFile != '#' && *configurationFile != nullptr) {
                answer.append(configurationFile);
            }
            if (i == 0) {
                istringstream(answer.substr(0, 1)) >> verbal;
            } else if (i == 2) {
                deck =Deck(answer);
            } else if (i == 3) {


                unsigned long count = 0;

                int playerStrategy;
                int numofplayers = 1;
                while (answer.at(count) != nullptr) {
                    if (answer.at(count) == '\n') {
                        numofplayers++;
                    }
                    count++;
                }
                NumOfPlayers=numofplayers;
                int position = 0;
                while (answer != nullptr) {
                    count = answer.find(" ");
                    string temp = answer.substr(0, count);
                    playerStrategy = answer.at(count + 1) - '0';
                    if (playerStrategy == 1) {
                        players.push_back(new PlayerType1(temp, deck.dealCards(), position));
                    } else if (playerStrategy == 2) {
                        players.push_back(new PlayerType2(temp, deck.dealCards(), position));
                    } else if (playerStrategy == 3) {
                        players.push_back(new PlayerType3(temp, deck.dealCards(), position, numofplayers));
                    } else if (playerStrategy == 4) {
                        players.push_back(new PlayerType4(temp, deck.dealCards(), position, numofplayers));
                    }
                    position++;
                    answer=answer.substr(count+1);
                    if (answer.at(0)=='\n'){
                        answer.substr(0);}
                }


                }

            }


        }

Game::Game (Game& other)
        : players((other.getPlayers())),deck(other.getDeck()),verbal(other.getVerbal()),NumOfPlayers(other.getNumOfPlayrs()),turn(other.getTurn())  {

}
void Game::printState()
{
    cout<<"Turn "<<turn<<endl;
    cout<<"Deck: " <<deck.toString()<<endl;
    for ( int i=0;i<NumOfPlayers;i++)
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
        int PlayerDraw=players.at(turnToPlay)->playTurn(players);
        for (int i=0;i<players.at(PlayerDraw)->getDraw();i++)
        {
            players.at(PlayerDraw)->addCard(*deck.fetchCard());
        }

        turn++;
    }
    if (verbal=1) {
        printState();
    }

}
void Game::printWinner()
{
    string winner("");
    string winner2("");
    for (int i=0;i<NumOfPlayers;i++)
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
int Game::getVerbal()
{
    return verbal;
}
int Game::getTurn()
{
    return turn;
}
int Game::getNumOfPlayrs()
{
    return NumOfPlayers;
}
Deck& Game::getDeck()
{
    return deck;
}



Game::~Game() {

	// TODO Auto-generated destructor stub
}

