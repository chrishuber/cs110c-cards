//
//  CS110C - Group5
//  Project1
//
//  card.h
//  01/18/2020
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
        char getSuit() const;
        char getValue() const;
        void setSuit(const char inSuit);
        void setValue(const char inValue);
        void displayCard() const;
};

#endif /* card_h */
