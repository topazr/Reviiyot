/*
 * Game.cpp
 *
 *  Created on: Nov 20, 2016
 *      Author: topaz
 */

#include "../include/Game.h"
#include <sstream>

Game::Game() {}
Game::Game(char* configurationFile) {


    {
        configurationFile++;

        for (int i=0;i<4;i++) {
            string answer("");
            while (*configurationFile != '\n') {
                configurationFile++;            }
            while (*configurationFile != '#'&& *configurationFile != nullptr) {
                answer.append(configurationFile);
            }
            if (i==0)
            {
                istringstream(answer.substr(0,1)) >> verbal;
            }
            else
                if (i==2)
                {
                    deck=Deck(answer);
                }
                else
                    if (i==3)
                    {


                            int count=0;

                            int playerStrategy;
                            int numofplayers=1;
                            while (answer.at(count)!=nullptr) {
                                if (answer.at(count) == '\n') {
                                    numofplayers++;
                                }
                                count++;
                            }
                            while (answer!= nullptr){
                                int position=0;
                            count=answer.find(" ");
                            string temp=answer.substr(0,count);
                            playerStrategy=answer.at(count+1)-'0';
                            if (playerStrategy==1){
                                players.push_back(new PlayerType1(temp,deck.dealCards(),position));
                                position++
                            }



                        }
                    }



        }



    }
}

Game::~Game() {
	// TODO Auto-generated destructor stub
}

