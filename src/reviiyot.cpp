#include <iostream>
#include <sstream>

#include "../include/Game.h"

using namespace std;

int main(int argc, char **argv) {


    char* configurationFile = argv[1];

   /* Card *cardi1= new FigureCard(Ace,Diamond);
    Card *cardi2= new FigureCard(Ace,Club);
    Card *cardi3= new FigureCard(Jack,Diamond);
    Card *cardi4= new NumericCard(3,Heart);
    Card *cardi5= new FigureCard(King,Diamond);
    Card *cardi6= new FigureCard(Queen,Spade);
    Card *cardi7= new FigureCard(Queen,Diamond);
    Card *cardi8= new NumericCard(2,Club);
    Card *cardi9= new NumericCard(2,Diamond);
    Card *cardi10= new NumericCard(5,Club);
    Card *cardi11= new NumericCard(12,Diamond);
    Card *cardi12= new NumericCard(3,Heart);
    Hand handy;
    handy.addCard(*cardi1);
    handy.addCard(*cardi2);
    handy.addCard(*cardi3);
    handy.addCard(*cardi4);
    handy.addCard(*cardi5);
    handy.addCard(*cardi6);
    handy.addCard(*cardi7);
    handy.addCard(*cardi8);
    handy.addCard(*cardi9);
    handy.addCard(*cardi10);
    handy.addCard(*cardi11);
    handy.addCard(*cardi12);
    bool ans=3<12;
   cout<<ans;
    int a;
    istringstream("124D")>>a;
   cout<<a;
  cout<<handy.compare1(cardi12,cardi11);*/
	Game game = Game(configurationFile);
	game.init();
 	Game initializedGame=game;
    game.play();
    cout << std::endl;
 	game.printWinner();
	game.printNumberOfTurns();
	cout << "----------" << endl;
	cout<<"Initial State:"<<endl;
  	initializedGame.printState();
	cout<<"----------"<<endl;
	cout<<"Final State:"<<endl;
	game.printState();
	return 0;
}

