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
    gameDeck = new Deck;
}





Game::~Game(){
	// delete this->gameDeck;
}





/*
 Sets the Game to it's initial state.
*/
void Game::initGame(string inName, int numCards) {
    name = inName;
	gameInProgress = true;
	currentPlayer = 0;
}



/*
 Allows access to the card deck being used for the game.
 */

Deck* Game::deck() {
    return gameDeck;
}




/*
 Main game logic.
*/
void Game::gameLoop(){


	this->gameDeck->shuffleDeck();
	this->gameDeck->displayDeck();

}



void Game::addPlayer(Player *inPlayer) {
    players.push_back(inPlayer);
    cout << inPlayer->getName() + " has joined " << name << endl;
}




void Game::dealCards() {
    cout << "Dealing cards..." << endl;
    for (int i = 0; i < players.size(); i++) {
        for (int j = 0; j < numStartCards; j++) {
            players.at(i)->drawCard(gameDeck, false);
        }
    }
}


/*
 Displays all cards played during the game
 */

void Game::showPlayed() {
    // to implement
}




string Game::getName() const {
    return name;
}




void Game::setName(const string inName){
    name = inName;
}




int Game::getPot() const {
    return pot;
}




void Game::setPot(const int inPot){
    pot = inPot;
}


