#include "std_lib_facilities.h"
#include "Card.h"
#include "Utilities.h"

map<Rank, int> Numbers = { {Rank::two,2},{Rank::three,3},{Rank::four,4},{Rank::five,5},{Rank::six,6},{Rank::seven,7},{Rank::eight,8},{Rank::nine,9},{Rank::ten,10},{Rank::jack,11},{Rank::queen,12},{Rank::king,13},{Rank::ace,14} };


string suitToString(Suit suit) {
	switch (suit) {
	case  Suit::clubs:
		return "clubs";
		break;

	case Suit::diamonds:
		return "diamonds";
		break;

	case Suit::hearts:
		return "hearts";
		break;

	case Suit::spades:
		return"spades";
		break;

	default:
		return "";
	}
}

string rankToString(Rank rank) {
	switch (rank) {
	case Rank::ace:
		return "ace";
		break;

	case Rank::two:
		return "two";
		break;

	case Rank::three:
		return "three";
		break;

	case Rank::four:
		return "four";
		break;

	case Rank::five:
		return "five";
		break;

	case Rank::six:
		return "six";
		break;

	case Rank::seven:
		return "seven";
		break;

	case Rank::eight:
		return "eight";
		break;

	case Rank::nine:
		return "nine";
		break;

	case Rank::ten:
		return "ten";
		break;
	case Rank::jack:
		return "jack";
		break;

	case Rank::queen:
		return "queen";
		break;

	case Rank::king:
		return "king";
		break;

	default:
		return "";
	}
}

string intToString(int number) {
	ostringstream os;
	os << number;
	return os.str();
}


string toString(struct CardStruct card) {
	string ans;
	ans = rankToString(card.r)+" of "+suitToString(card.s);
	return ans;
}

string toStringShort(struct CardStruct card) {
	return intToString(Numbers[card.r]) + suitToString(card.s)[0];
}


Card::Card() {
	valid = false;
}

Card::Card(Rank r, Suit s) {
	this->r = r;
	this->s = s;
}

bool Card::getValid() {
	return this->valid;
}

Suit Card::getSuit() {
	return this->s;
}

Rank Card::getRank() {
	return this->r;
}

string Card::toString() {
	string ans;
	ans = rankToString(this->getRank()) + " of " + suitToString(this->getSuit());
	return ans;
}

string Card::toStringShort() {
	return intToString(rankToString(this->r)[0]) + suitToString(this->s)[0];
}


