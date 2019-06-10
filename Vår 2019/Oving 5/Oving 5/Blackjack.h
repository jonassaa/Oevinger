#pragma once
#include "std_lib_facilities.h"
#include "Card.h"
#include "CardDeck.h"
#include "Player.h"

class Blackjack
{
private:
	vector<Player> players;
	CardDeck deck;

public:
	Blackjack();
	~Blackjack();
	void playBlackJack();
	void dealCards();

};

