//
//  CS110C - Group5
//  Project1
//
//  card.cpp
//  01/18/2020
//

#include "card.h"

using namespace std;

Card::Card(){

}


Card::Card(char inSuit, char inValue) {
    suit = inSuit;
    value = inValue;
}

void Card::displayCard() const{
    cout << value << suit << endl;
}


void Card::setSuit(const char inSuit){
	this->suit = inSuit;	
}


void Card::setValue(const char inValue){
	this->value = inValue;
}



