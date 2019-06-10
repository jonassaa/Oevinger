#include "std_lib_facilities.h"
#include "utilities.h"
#include "tests.h"
#include "mastermind.h"
int main(){

	srand(static_cast<unsigned int>(time(nullptr)));
	/*
	testCallByValue();
	testCallByReference();
	testVectorSorting();
	testString();
	*/
	playMastermind();
	return 0;
}