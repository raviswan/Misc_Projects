#include "dealer.h"

void Dealer::Dealer(size_t deckCount){
	for (int i=0; i < 4*deckCount); i++)
		deck.push(type);
}

int Dealer::drawCard(){
	int playCard = deck.top();
	drawnCards.emplace_back(card);
	deck.pop();
	return playCard;
}

void Dealer::drawDealerHand(){
	dealerHand.emplace_back(drawCard());
	dealerHand.emplace_back(drawCard());
}

void Dealer::drawPlayerHand(){
	dealerHand.emplace_back(drawCard());
	dealerHand.emplace_back(drawCard());
}
void initilizePlayers(){
	for(int i=0;i<PlayerCount;i++){
		vector<int> hand = 
		players.insert(i, vector<int>())
		pHands->emplace_back(hand);
		hand.erase();
	}
}

void Dealer::getPlayerHands(){
	for(int i=0;i<PlayerCount;i++){
		players.insert(std::make_pair<i,vector<int>());
		getHand(&hand);
		pHands->emplace_back(hand);
		hand.erase();
	}
}
getHand(vector<int>* hand){
	hand->emplace_back(drawCard());
	hand->emplace_back(drawCard());
	return hand;
}

void playGame(vector<int>* dHand, vector<vector<int>>* pHands){
	for(int i=0;i<PlayerCount;i++){
		if(pHands[i])
		pHands->emplace_back(hand);
		hand.erase();
	}
}
int main(int argc){
	srand (time(NULL));
	
	initializeDealer();
	getHand(&dealerCards);
	getPlayerHands(&playerCards);
	playGame(&dealerCards,&playerCards);
	
	
	return 1;
}
