#include "Blackjack.h"
#include "std_lib_facilities.h"
#include "Card.h"
#include "Player.h"



Blackjack::Blackjack()
{
	Player player=Player::Player();
	Player dealer=Player::Player(true);

	vector<Player> players = { player,dealer };
}


Blackjack::~Blackjack()
{
}

void Blackjack::start() {

}

void Blackjack::playBlackJack() {

}

