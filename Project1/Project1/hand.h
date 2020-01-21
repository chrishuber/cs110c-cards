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

class Hand {
private:
    std::string owner;
    std::vector<Card> cards;

public:
    Hand(std::string owner="Unknown");
    Card playCard();
    void drawCard(const Card);
    void displayHand();
    void foldHand();
};

#endif /* hand_h */
