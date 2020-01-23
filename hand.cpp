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
 Plays the last card in the vector stack, removing it from the hand and returning it. Should
 probably be expanded to allow playing of a selected card from the hand. Asserts that the hand
 has cards in it requiring that the game check that condition first or this will throw an error.
 */
Card Hand::playCard(int num)
{
    assert(cards.size() >= 1);
    
    int handSize = getHandsize();
    Card playOne = cards[num];
    handSize = handSize - 1;
    /*
     for (int i = (num + 1); i < handsize(); i++)
     {
     cards[i] = cards[i+1];
     }
     */
    for (int i = num; i < handSize; i++)
    {
        cards[i] = cards[i+1];
    }
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






