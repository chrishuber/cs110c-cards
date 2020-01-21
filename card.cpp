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


bool Card::operator==(Card card_) const{
	/* Comparison operator for Card object. Assumes there is no such thing as a
	duplicate card in the same deck.
	*/

	if ((this->suit == card_.suit) && (this->value == card_.value)){
		return true;
	}


	return false;


}


