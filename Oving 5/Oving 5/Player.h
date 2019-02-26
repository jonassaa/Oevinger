#pragma once
#include "std_lib_facilities.h"
#include "Card.h"
#include "CardDeck.h"
class Player
{
private:
	vector<Card> cards;
	int cardValue;
	
	string name;
	bool lost;
public:
	Player();
	Player(bool);
	~Player();
	int getValue();
	Card getFirstCard();
	bool makeDecision();
	void giveCard(Card);
	void setName();
	string getName();
	vector<Card> getCards();
	bool getLost();
	void setLost(bool);
	bool isDealer;
};
