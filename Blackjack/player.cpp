#include "player.h"
#include "blackjack.h"
#include <iostream>
#include <vector>


Player::Player(int index,Dealer* dealer):index(index),dealer(dealer){};

void Player::drawHand(){
	cards = dealer->getHand();
}

void Player::setBet(int amount) {
	bet.push_back(amount);
}

