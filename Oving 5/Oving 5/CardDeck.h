#pragma once
#include "std_lib_facilities.h"
#include "Card.h"

class CardDeck
{
public:
	CardDeck();
	~CardDeck();
	void print();
	void printShort();
	void shuffle();
	const Card& drawCard();
	
private:
	vector<Card> cards;
	int currentCardIndex;
	void swap(int,int);
};

