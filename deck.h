//
//  deck.hpp
//  card_deck_hand
//
//  Created by Chris on 1/15/20.
//  Copyright © 2020 Green Drake. All rights reserved.
//

#ifndef deck_h
#define deck_h

#include <iostream>
#include "card.h"

class Deck {
    static const int NUM_CARDS = 52;
 
    Card cards[NUM_CARDS];
    int numCards;
    
    public:
        Deck();
        Deck(const Deck& d);
        void dealCard();
        void shuffleCard();
};

#endif /* deck_h */
