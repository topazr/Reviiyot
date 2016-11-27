#include "../include/Hand.h"
#include <algorithm>
#include <sstream>


Hand::Hand() {
	}
Hand::Hand(const vector<Card*>& myHand)
:pHand(myHand){
    sort(begin(pHand), end(pHand), compare1);
}
Hand::Hand(Hand& other)
        :Hand(other.getHand()){
}
Hand& Hand::operator=(const Hand &other)
{
    if (this!=&other)
    {
        this=new Hand(other);
    }
    return *this;
}
Hand& Hand::operator=(const Hand &&other)
{
    if (this!=&other)
    {
        this->getHand()=other.getHand();
        other.getHand()= nullptr;
    }
    return *this;

}
    bool Hand::compare1(Card* card1, Card* card2){//compares what card is higher
    string str1=card1->toString();
    string str2=card2->toString();
    if(str1.at(0)=='K'){        //checks exceptions where lexicographically doesn't work
        if(str2.at(0)=='K')
            return str1 < str2;
        else if(str2.at(0)=='A')
            return true;
        else
            return false;
    }
    else if(str1.at(0)=='A'){
        if(str2.at(0)=='A')
            return str1 < str2;
        else
            return false;
    }
    else if(str2.at(0)=='K'){
        if(str1.at(0)=='K')
            return str1 < str2;
        else if(str1.at(0)=='A')
            return false;
        else
            return true;
    }
    else if(str2.at(0)=='A'){
        if(str1.at(0)=='A')
            return str1 < str2;
        else
            return true;
    }
    else if(str1.at(0)<=9 && str1.at(0)>=0 && (str2.at(0)<=9 && str2.at(0)>=0)) {
        int num1;
        istringstream(str1) >> num1;
        int num2;
        istringstream(str2) >> num2;
        return num1 < num2; //checks lexicographically
    }
    else
        return str1<str2;
}
bool Hand::addCard(Card &card) {
    pHand.push_back(&card);
    sort(pHand.begin(), pHand.end(), compare1);
    return true;


}
bool Hand::removeCard(Card &myCard) {
    int index=searchHand(myCard.toString());
    if(index==-1)
        return false;//the card is not in this hand
    else {
        auto it=pHand.begin();
        advance(it, index);//make sure the iterator get to the right place
        pHand.erase(it);
    }

    return true;

}
int Hand::searchHand(string myCard) {//searches hand : returns -1 if card not found otherwise the index
    int size =(int)pHand.size();
    for (int i = 0; i < size; i++)
        if(pHand.at(i)->toString()==myCard)
            return i;
    }
    return -1;
}


string Hand::toString() {
    string ans("");
    int size=(int)pHand.size();
    for(int i=0;  i<size; i++) {
        ans.append(pHand.at((unsigned long) i)->toString()+" ");
    }
    ans=ans.substr(0, ans.size()-1);
    return ans;
}

int Hand::getNumberOfCards() {
    return (int)pHand.size();
}

vector<Card*>& Hand::getHand()const {
    return pHand;
}

Hand::~Hand() {
	delete &pHand;
}

