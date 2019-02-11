#include "std_lib_facilities.h"
#include "Card.h"

int randomWithLimits(int lower,int upper) {
	return lower + rand() % (upper - lower)+1;
}
void getTwoRandomNumbers(int& a, int& b, int lower, int upper) {
	a = randomWithLimits(lower, upper);
	do {
		b = randomWithLimits(lower, upper);
	} while (a == b);
}