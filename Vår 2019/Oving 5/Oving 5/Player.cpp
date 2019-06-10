#include "Player.h"
#include "std_lib_facilities.h"
#include "Card.h"
#include "CardDeck.h"



Player::Player()
{
	this->name = "";
	this->isDealer = false;
	this->cardValue = 0;
	setName();
	lost = false;
}
Player::Player(bool deal)
{
	isDealer = deal;
	this->cardValue = 0;
	this->name = "Dealer";
}


Player::~Player()
{
}



int Player::getValue() {
	int value=0;
	bool ace = false;
	for (Card c:this->cards){
		int temp{ static_cast<int>(c.getRank()) };
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



Card Player::getFirstCard() {
	return this->cards[0];
}
bool Player::makeDecision(){
	if (this->getValue()>16){
		return false;
	}
	else {
		return true;
	}
}
void Player::giveCard(Card c) {
	this->cards.push_back(c);
}

void Player::setName() {
	cout << "Enter player name: ";
	getline(cin,this->name);
	cout << endl;
}

string Player::getName() {
	return this->name;
}
vector<Card> Player::getCards() {
	return this->cards;
}
bool Player::getLost() {
	return this->lost;
}
void Player::setLost(bool aBool) {
	this->lost = aBool;
}
