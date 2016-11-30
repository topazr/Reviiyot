#include "../include/Hand.h"
#include <algorithm>
#include <sstream>


Hand::Hand() {
    pHand=new vector<Card*>();
	}
Hand::Hand(const vector<Card*>& myHand)
    :pHand(new vector<Card*>( myHand)){
    sort(begin(*pHand), end(*pHand), compare);
    }
Hand::Hand( Hand& other)  {
    pHand=other.pHand;
    sort(begin(*pHand), end(*pHand), compare);
}

void Hand::setHand(vector<Card*>& other)
        {
            pHand=new vector<Card*>(other);
            sort(begin(*pHand), end(*pHand), compare);
        }
Hand& Hand::operator=(const Hand &other)
{
    if (this!=&other)
    {
        for (unsigned int i=0;i<pHand->size();i++)
            delete (&pHand[i]);
        for (unsigned int i=0; i<other.pHand->size();i++) {
          pHand->push_back(other.getHand()[i]);
        }

    }
    return *this;
}
const Hand& Hand::operator=( Hand &&other)
{
    if (this!=&other)
    {

        for (unsigned int i=0;i<pHand->size();i++)
            delete (&pHand[i]);
        for (unsigned int i=0; i<other.pHand->size();i++) {
            pHand->push_back(other.getHand()[i]);
        }
    }
    return *this;

}
    bool Hand::compare(Card* card1, Card* card2){//compares what card is higher
        int val1=card1->getValue();
        int val2=card2->getValue();
        if(val1==val2)
            return card1->getShape()<card2->getShape();
        else{
            if((val1<0 & val2<0) || (val1>0 & val2>0))
                return val1<val2;
            else if(val1<0 & val2>0)
                return false;
            else if(val1>0 & val2<0)
                return true;
        }
}


bool Hand::addCard(Card &card) {
    pHand->push_back(&card);
    sort(pHand->begin(), pHand->end(), compare);

    return true;


}
bool Hand::removeCard(Card &myCard) {
    int index=searchHand(myCard.toString());
    if(index==-1)
        return false;//the card is not in this hand
    else {
        auto it=pHand->begin();
        advance(it, index);//make sure the iterator get to the right place
        pHand->erase(it);
    }

    return true;

}
int Hand::searchHand(string myCard) {//searches hand : returns -1 if card not found otherwise the index
    int size =(int)pHand->size();
    for (int i = 0; i < size; i++){
        if(pHand->at(i)->toString()==myCard)
            return i;
    }
    return -1;
}


string Hand::toString() {
    string ans("");
    int size=(int)pHand->size();
    for(int i=0;  i<size; i++) {
        ans.append(pHand->at((unsigned long) i)->toString()+" ");
    }
    ans=ans.substr(0, ans.size()-1);
    return ans;
}

int Hand::getNumberOfCards() {
    return (int)pHand->size();
}

vector<Card*>& Hand::getHand() const{
    return *pHand;
}

Hand::~Hand() {

}

