//
//  CS110C - Group5
//  Project1
//
//  main.cpp
//  01/20/2020
//

#include <iostream>
#include <string>

#include "card.h"
#include "deck.h"
#include "hand.h"
#include "game.h"
#include "player.h"

using namespace std;

int main() {

	Game theGame("High Card");
	Player player1("Afsarah");
	Player player2("Blodwyn");
	Player player3("Cadence");
	Player player4("Dulcinea");

	theGame.addPlayer(player1);
	theGame.addPlayer(player2);
	theGame.addPlayer(player3);
	theGame.addPlayer(player4);

	theGame.initGame();

}
