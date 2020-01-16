//
//  card.hpp
//  card_deck_hand
//
//  Created by Chris on 1/15/20.
//  Copyright © 2020 Green Drake. All rights reserved.
//

#ifndef card_h
#define card_h

#include <iostream>

class Card {
    private:
        char suit;
        char value;

    public:
        Card();
        Card(char suit, char value);
        // ~Card();
        char getSuit() const;
        char getValue() const;
        void setSuit(const char inSuit);
        void setValue(const char inValue);
        void displayCard();
};

#endif /* card_h */
