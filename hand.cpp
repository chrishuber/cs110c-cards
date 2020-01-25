//
//  CS110C - Group5
//  Project1
//
//  hand.cpp
//  01/20/2020
//


#include <cassert>
#include "card.h"
#include "hand.h"

using namespace std;


/*
 Class Abstract: Hand holds an arbirary number of cards. The hand is guaranteed to always have
 an owner name and a Vector container for Card objects on initialization.
 */



/* Simple getter for number of cards in hand */

int Hand::getHandsize() {
    return cards.size();
}







/* Simple getter for specific card at given vector index */

Card Hand::getCard(int index) {
    return cards[index];
}







/*
 Plays the last card in the vector stack, removing it from the hand at the indicated
 index and returning it. Also shifts all remaining cards in the index down one and throws
 away the last element in the vector using pop_back().
 */

Card Hand::playCard(int handIndex)
{
    assert(cards.size() >= 1);
    
    int handSize = getHandsize();
    Card playOne = cards[handIndex];
    for (int i = handIndex; i < handSize - 1; i++)
    {
        cards[i] = cards[i+1];
    }
    cards.pop_back();
    return playOne;
}







/*
 Adds a cards to the end of the hand with no defined bounds using a vector. Could be potentially
 further linked to Deck object to less passively accept cards as input.
 */
void Hand::drawCard(const Card inCard) {
    cards.push_back(inCard);
}







/*
 Clears the contents of the vector to avoid any memory issues.
 */
void Hand::foldHand() {
    cards.clear();
}






