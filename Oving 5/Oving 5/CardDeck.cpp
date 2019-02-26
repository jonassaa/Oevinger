#include "CardDeck.h"
#include "std_lib_facilities.h"
#include "Card.h"
#include "Utilities.h"



CardDeck::CardDeck()
{
	for (int suit = 0; suit < 4; suit++) {
		for (int rank = 2; rank < 15; rank++) {
			Rank r{ static_cast<Rank>(rank) };
			Suit s{ static_cast<Suit>(suit) };
			this->cards.push_back(Card::Card(r, s));
		}
	}
	this->currentCardIndex = 0;
}


CardDeck::~CardDeck()
{
}

void CardDeck::swap(int n1,int n2){
	Card temp = this->cards[n2-1];
	this->cards[n2-1] = this->cards[n1-1];
	this->cards[n1-1] = temp;
}

void CardDeck::print() {
	for (Card c : this->cards) {
		cout << c.toString() << endl;
	}
}

void CardDeck::printShort() {
	for (Card c : this->cards) {
		cout << c.toStringShort() << endl;
	}
}

void CardDeck::shuffle() {
	for (unsigned int i = 0; i < this->cards.size()*5; i++) {
		int randomA;
		int randomB;
		getTwoRandomNumbers(randomA, randomB, 0, this->cards.size());
		swap(randomA,randomB);
	}
}
const Card& CardDeck::drawCard() {
	Card temp=this->cards[0];
	this->cards.erase(cards.begin());
	this->currentCardIndex++;
	return temp;
}