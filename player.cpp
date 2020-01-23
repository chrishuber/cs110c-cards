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





void Player::ante(int inAnte) {
    chips = chips - inAnte;
    // inGame.setPot(inGame.getPot() + inGame.ante);
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



//void Player::drawCard() {
//    
//}
//
//void Player::makeBet(Game inGame, int bet) {
//    chips = chips - bet;
//    inGame.setPot(inGame.getPot() + bet);
//}
//
//
//
//
//
//
//void Player::raise(Game inGame, int raise) {
//    // chips = chips - bet;
//    // inGame.setPot(inGame.getPot() + bet);
//}
//
//
//
//
//
//
//void Player::call(Game inGame) {
//    // chips = chips - bet;
//    // inGame.setPot(inGame.getPot() + bet);
//}
//
//
//
//
//
//void Player::fold(Game inGame) {
//    playerHand.foldHand();
//}
//
//
//
//
//void Player::showHand() {
//    /*
//     Displays the owner name and a list of the cards in their hand. If there are no cards in the
//     hand, it also displays that information.
//     */
//    int handSize = playerHand.getHandsize();
//        
//    cout << name << "'s Hand: ";
//        
//    if (handSize == 0) {
//        cout << "no cards";
//    }
//    else {
//        for (int i = 0; i < handSize; i++) {
//            cout << playerHand.getCard(i).getSuit() << playerHand.getCard(i).getValue() << " ";
//        }
//    }
//    cout << endl;
//}
