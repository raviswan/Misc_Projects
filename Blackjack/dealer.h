#ifndef _DEALER_H_
#define _DEALER_H_
#include <iostream>
#include <array>
#include <vector>
#include <stack>
#include <dequeue>
#include "player.h"

using namespace std;
const int PlayerCount = 3;
const int DeckCount = 1;
const int Rounds = 10;

using suit = array<int,13>;
suit spades = {1,2,3,4,5,6,7,8,9,10,11,12,13};
suit clubs = {1,2,3,4,5,6,7,8,9,10,11,12,13};
suit diamond = {1,2,3,4,5,6,7,8,9,10,11,12,13};
suit hearts = {1,2,3,4,5,6,7,8,9,10,11,12,13};

         
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
	dequeue<int> deck;
	vector<int> drawnCards;

}


#endif
