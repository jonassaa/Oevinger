#include "Blackjack.h"
#include "std_lib_facilities.h"
#include "Card.h"
#include "Player.h"



Blackjack::Blackjack()
{
	cout << "Welcome to Blackjack!\n";
	do {
		this->players.push_back(Player::Player());
	} while (this->players.back().getName() != "");
	this->players.erase(this->players.end()-1);
	this->players.push_back(Player::Player(true));

	this->deck = CardDeck::CardDeck();
	
	this->deck.shuffle();


}


Blackjack::~Blackjack()
{
}


void Blackjack::playBlackJack() {
	this->dealCards();
	do {
		for (Player & p : this->players) {
			if (p.isDealer == false) {
				if (p.getLost() == false) {
					cout << p.getName() << ", you've got the total value of :" << p.getValue() << "with the cards: " << endl;
					for (Card & c : p.getCards()) {
						cout << c.toString() << "\t";
					}
					string ans="";
					do {
						cout << "Do you want to draw another card? (y for YES, n for NO) ";
						cin >> ans;
					} while (ans != "y" && ans != "n");
					if (ans == "y") {
						p.giveCard(deck.drawCard());
					}
					if (p.getValue() > 21) {
						cout << "You lost you dummy!!!" << endl;
						p.setLost(true);
					}
				}
			}
			else {
				cout << "The dealer's face up card is: " << p.getFirstCard().toString() << endl;
				if (p.makeDecision()) {
					cout << "The dealer drew a card." << endl;
					p.giveCard(deck.drawCard());
				}
				else {
					cout << "The dealer stands" << endl;
				}
				if (p.getValue() > 21) {
					cout << "The dealer is bust!" << endl;
				}
			}

		}
		
	} while (this->players.back().getValue()<22);
}

void Blackjack::dealCards() {
	for (Player& p : this->players) {
		p.giveCard(this->deck.drawCard());
	}
	for (Player& p : this->players) {
		p.giveCard(this->deck.drawCard());
	}
	cout << "The dealer's face up card is: " << this->players.back().getFirstCard().toString() << endl;
}

