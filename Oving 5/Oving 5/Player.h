#pragma once
#include "std_lib_facilities.h"
#include "Card.h"
#include "CardDeck.h"
class Player
{
private:
	vector<Card> cards;
	int cardValue;
	bool isDealer;
public:
	Player();
	Player(bool)
	~Player();
	int getValue();
	const Card& getFirstCard();
	bool makeDecision();
	void giveCard(Card);
};
