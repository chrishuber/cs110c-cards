//
//  CS110C - Group5
//  Project1
//
//  player.cpp
//  01/23/2020
//

#include <iostream>
#include <vector>

#include "deck.h"
#include "card.h"
#include "game.h"
#include "player.h"

using namespace std;


Player::Player(string inName){
    name = inName;
}





void Player::addChips(int inChips) {
    chips = chips + inChips;
}




/* Outputs a message displaying the number of chips the player has and returns
 the integer value. */

int Player::countChips() {
    cout << name << " has " << chips << " chips." << endl;
    return chips;
}





string Player::getName() {
    return name;
}







void Player::drawCard(Deck *gameDeck) {
    const Card drawnCard = gameDeck->dealCard();
    playerHand.drawCard(drawnCard);
}






void Player::playCard(int cardIndex) {
    const Card inPlayCard = playerHand.getCard(cardIndex);
    cout << name << " plays " << playerHand.getCard(cardIndex).getSuit() << playerHand.getCard(cardIndex).getValue() << endl;
    playerHand.playCard(cardIndex);
    playedCards.drawCard(inPlayCard);
}




void Player::fold() {
    playerHand.foldHand();
}




void Player::showHand() {
    /*
     Displays the owner name and a list of the cards in their hand. If there are no cards in the
     hand, it also displays that information.
     */
    int handSize = playerHand.getHandsize();
        
    cout << name << "'s Hand: ";
        
    if (handSize == 0) {
        cout << "no cards";
    }
    else {
        for (int i = 0; i < handSize; i++) {
            cout << playerHand.getCard(i).getSuit() << playerHand.getCard(i).getValue() << " ";
        }
    }
    cout << endl;
}

