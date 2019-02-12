#include "Player.h"
#include "std_lib_facilities.h"
#include "Card.h"
#include "CardDeck.h"



Player::Player()
{
	this->cardValue = 0;
}
Player::Player(bool deal)
{
	isDealer = deal;
	this->cardValue = 0;
}


Player::~Player()
{
}



int Player::getValue() {
	int value;
	bool ace = false;
	for (Card c:this->cards){
		int temp{ static_cast<int>(c.getRank) };
		if (temp < 14 && temp>9) {
			value += 10;
		}
		else if(temp==14){
			value += 11;
			ace = true;
		}
		else {
			value += temp;
		}
	}
	if (value > 21 && ace) {
		value = value - 10;
	}
	return value;
}



const Card& Player::getFirstCard() {
	return this->cards[0];
}
bool Player::makeDecision(){
	if (this->getValue>16){
		return false;
	}
	else {
		return true;
	}
}
void Player::giveCard(Card c) {
	this->cards.push_back(c);
}


