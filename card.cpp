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


char Card::getSuit() const {
    return suit;
}


char Card::getValue() const {
    return value;
}


void Card::setSuit(const char inSuit){
    suit = inSuit;
}


void Card::setValue(const char inValue){
    value = inValue;
}



