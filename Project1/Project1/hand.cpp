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




/*
 Default constructor with 'Unknown' set as owner if no string is passed in on initialization
 */

Hand::Hand(string inOwner) {
    owner = inOwner;
}







/*
 Plays the last card in the vector stack, removing it from the hand and returning it. Should
 probably be expanded to allow playing of a selected card from the hand. Asserts that the hand
 has cards in it requiring that the game check that condition first or this will throw an error.
 */
Card Hand::playCard() {
    assert(cards.size() >= 1);
    
    int handSize = cards.size();
    Card playOne = cards[handSize - 1];
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
 Displays the owner name and a list of the cards in their hand. If there are no cards in the
 hand, it also displays that information.
 */
void Hand::displayHand() {
    int handSize = cards.size();
    
    cout << owner << "'s Hand: ";
    
    if (handSize == 0) {
        cout << "no cards";
    }
    else {
        for (int i = 0; i < handSize; i++) {
            cout << cards[i].getSuit() << cards[i].getValue();
            cout << " ";
        }
    }
    cout << endl;
}








/*
 Clears the contents of the vector to avoid any memory issues.
 */
void Hand::foldHand() {
    cards.clear();
}
