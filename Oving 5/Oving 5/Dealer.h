#pragma once
#include "std_lib_facilities.h"
#include "Card.h"
class Dealer
{
private:
	vector<Card> cards;
	int cardValue;
	void makeDecision();
public:
	Dealer();
	~Dealer();
	int getValue();
	Card getFirstCard();
	void makeDecision();
};

