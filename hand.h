//
//  CS110C - Group5
//  Project1
//
//  hand.h
//  01/20/2020
//

#ifndef hand_h
#define hand_h

#include <iostream>
#include <vector>

#include "card.h"
#include "deck.h"

class Hand {
private:
    std::vector<Card> cards;

public:
    Card getCard(int index);
    Card playCard(int num);
    void drawCard(const Card);
    int getHandsize();
    void foldHand();
};

#endif /* hand_h */
