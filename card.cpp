//
//  card.cpp
//  card_deck_hand
//
//  Created by Chris on 1/15/20.
//  Copyright © 2020 Green Drake. All rights reserved.
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
