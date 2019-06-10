#pragma once
#include "std_lib_facilities.h"

enum class Suit {clubs=0,diamonds,spades,hearts};
enum class Rank{two=2,three,four,five,six,seven,eight,nine,ten,jack,queen,king,ace};


string suitToString(Suit suit);
string rankToString(Rank rank);

string intToString(int number);

struct CardStruct { Suit s; Rank r; };

string toString(struct CardStruct card);
string toStringShort(struct CardStruct card);
void testClass();


class Card {
private:
	Rank r;
	Suit s;
	bool valid;

public:
	Card();
	Card(Rank r, Suit s);
	bool getValid();
	Suit getSuit();
	Rank getRank();
	string toString();
	string toStringShort();

};
