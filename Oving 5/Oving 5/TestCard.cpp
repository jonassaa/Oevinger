#include "Card.h"
#include "std_lib_facilities.h"

void testCardFunctions() {

	CardStruct testCard;
	testCard.s = Suit::clubs;
	testCard.r = Rank::two;

	cout << "testcard to string: " << toString(testCard) << " shortString: " 
		<< toStringShort(testCard) << endl;
}

Card test = Card::Card();

void testClass() {
	cout << test.getValid();
}