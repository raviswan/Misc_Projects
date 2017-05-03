#ifndef _DEALER_H_
#define _DEALER_H_
#include <iostream>
#include <array>
#include <vector>
#include <stack>
#include "player.h"

using namespace std;
const int PlayerCount = 3;
const int DeckCount = 1;
const int Rounds = 10;

 using suit = array<int,13>;
// suit spades = {1,2,3,4,5,6,7,8,9,10,11,10,10};
// suit clubs = {1,2,3,4,5,6,7,8,9,10,10,10,10};
// suit diamond = {1,2,3,4,5,6,7,8,9,10,10,10,10};
// suit hearts = {1,2,3,4,5,6,7,8,9,10,10,10,10};

suit type = {2,3,4,5,6,7,8,9,10,10,10,10,11};
stack<suit> deck;

class Dealer{
	Dealer(int deckCount);
	drawCard();
	drawDealerHand();
	drawPlayerHand();
	shuffleCards();
private:
	int cardCount;
	vector<int> dealerHand;
	map<int,vector<int>> players;
	stack<int> deck;

}


#endif
