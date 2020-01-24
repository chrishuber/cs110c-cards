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


Game::~Game(){
	delete[] this->cards;
	delete this->gameDeck;
}

void Game::initGame(){
/* Sets the Game to it's initial state.
*/

	this->gameInProgress = true;
	this->currentPlayer = 0;
	this->ante = 1;

	this->cards = new Card[52];
	this->initCards();
	this->gameDeck = new Deck(this->cards, 52);
	this->gameLoop();

}


void Game::initCards() {
/* Initializes a standard deck of 52 playing cards.
*/

	for (int i = 0; i < 13; i++){
		this->cards[i].setSuit('D');
		this->cards[i+13].setSuit('H');
		this->cards[i+26].setSuit('C');
		this->cards[i+39].setSuit('S');
	}

	for (int i = 0; i < 52; i++){
		if (i%13 == 0) this->cards[i].setValue('2');
		if (i%13 == 1) this->cards[i].setValue('3');
		if (i%13 == 2) this->cards[i].setValue('4');
		if (i%13 == 3) this->cards[i].setValue('5');
		if (i%13 == 4) this->cards[i].setValue('6');
		if (i%13 == 5) this->cards[i].setValue('7');
		if (i%13 == 6) this->cards[i].setValue('8');
		if (i%13 == 7) this->cards[i].setValue('9');
		if (i%13 == 8) this->cards[i].setValue('T');
		if (i%13 == 9) this->cards[i].setValue('J');
		if (i%13 == 10) this->cards[i].setValue('Q');
		if (i%13 == 11) this->cards[i].setValue('K');
		if (i%13 == 12) this->cards[i].setValue('A');
	}
		

}


void Game::gameLoop(){
/* Main game logic.
*/

	this->gameDeck->shuffleDeck();
	this->gameDeck->displayDeck();
	
	

	

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
