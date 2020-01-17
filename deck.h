//
//  CS110C - Group5
//  Project1
//
//  deck.h
//  01/15/2020
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
