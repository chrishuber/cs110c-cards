//
//  game.cpp
//  Project1
//
//  Created by Chris on 1/23/20.
//  Copyright © 2020 Green Drake. All rights reserved.
//

#include <iostream>
#include <vector>

#include "card.h"
#include "deck.h"
#include "game.h"
#include "player.h"

using namespace std;



Game::Game(string inName) {
    name = inName;
}





Deck Game::initDeck() {
    // gameDeck.init();
    
    int size = 10;
    Card* cards = new Card[size];

    cards[0].setSuit('D');
    cards[0].setValue('0');
    
    cards[1].setSuit('D');
    cards[1].setValue('1');

    cards[2].setSuit('C');
    cards[2].setValue('2');

    cards[3].setSuit('C');
    cards[3].setValue('3');

    cards[4].setSuit('H');
    cards[4].setValue('4');

    cards[5].setSuit('H');
    cards[5].setValue('5');

    cards[6].setSuit('S');
    cards[6].setValue('6');

    cards[7].setSuit('S');
    cards[7].setValue('7');

    cards[8].setSuit('D');
    cards[8].setValue('8');

    cards[9].setSuit('C');
    cards[9].setValue('9');

    Deck testDeck(cards, size);
    return testDeck;
}





void Game::addPlayer(Player inPlayer) {
    players.push_back(inPlayer);
    cout << inPlayer.getName() + " has joined " << name << endl;
}




int Game::getPot() const {
    return pot;
}




void Game::setPot(const int inPot){
    pot = inPot;
}
