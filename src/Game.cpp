/*
 * Game.cpp
 *
 *  Created on: Nov 20, 2016
 *      Author: topaz
 */

#include "../include/Game.h"
#include <sstream>

/*Game::Game() {}
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
                deck = Deck(answer);
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
            i++;
            }


        }


void Game::printState()
{

    cout<<"Deck: " <<deck.toString()<<endl;
    for (auto it=players.begin(); it!=players.end();it++)
    {
        it.operator*()->toString();
        cout<<endl;
    }
}
int Game::Winner()
{
    int winner=-1;
    for (auto it=players.begin(); it!=players.end();it++)
    {
       if (it.operator*()->getNumberOfCards()==0)
       {
           winner=1;
       }
    }
    return winner;
}





Game::~Game() {
	// TODO Auto-generated destructor stub
}
*/
