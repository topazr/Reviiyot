#include <iostream>
#include "../include/Deck.h"
using namespace std;

int main() {

    Card *cardy=new FigureCard(Ace,Club);
    cout<<cardy->toString();
    return 0;

}