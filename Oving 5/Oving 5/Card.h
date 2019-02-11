#pragma once
#include "std_lib_facilities.h"

enum class Suit {clubs,diamonds,spades,hearts};
enum class Rank{two,three,four,five,six,seven,eight,nine,ten,jack,queen,king,ace};


string suitToString(Suit suit);
string rankToString(Rank rank);

string intToString(int number);

struct CardStruct { Suit s; Rank r; };

string toString(struct CardStruct card);
string toStringShort(struct CardStruct card);

class Card {
private:
	Rank r;
	Suit s;
	bool valid;

public:
	Card();
	Card(Rank r, Suit s);
	bool getValid();
};
