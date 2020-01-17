//
//  CS110C - Group5
//  Project1
//
//  card.cpp
//  01/15/2020
//

#include "card.h"

using namespace std;

Card::Card(char inSuit, char inValue) {
    suit = inSuit;
    value = inValue;
}

void Card::displayCard() {
    cout << value << suit << endl;
}
