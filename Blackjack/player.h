#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <iostream>
#include <vector>
#include "dealer.h"

using namespace std;
class Dealer;

class Player{
	Player(int, Dealer*);
	void setBet(int);
	int getBet() const;
	void getHand();
	void drawCard();
	private:
		int index;
		Dealer* dealer;
		vector<int>* cards;
		vector<int> bet;
};

#endif
