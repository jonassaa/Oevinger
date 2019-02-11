#include "std_lib_facilities.h"
#include "utilities.h"


int checkCharactersAndPosition(string guess, string code) {
	int count = 0;
	for (int i = 0; i < guess.size(); i++) {
		if (guess[i] == code[i]) {
			count++;
		}
	}
	return count;
}
int checkCharacters(string guess, string code) {
	int count = 0;
	string unique = getUnique(guess);
	for (char c : unique) {
		int inCode = countChar(code, c);
		int inGuess = countChar(guess, c);

		int diff = inCode - inGuess;

		if (diff <= 0) {
			count += inCode;
		}
		else {
			count += inGuess;
		}
	}
	return count;
}


void playMastermind() {
	constexpr int size = 4;
	constexpr int letters = 5;
	string code;
	string guess;
	int trys = -1;
	code = randomizeString(size, letters - 1+65, 65);
	cout << code << endl;
	while (true) {
		trys++;
		cout << "You have " << 10 - trys << " trys left";
		guess = readInputToString(size, 65, letters - 1 + 65);
		int corrPos = checkCharactersAndPosition(guess, code);
		int corrLet = checkCharacters(guess, code);
		cout << "You guessed " << corrLet << " correct letters, of which " << corrPos << " was in the right position";
		if ((checkCharactersAndPosition(guess, code) == size) || (trys > 10)) {
			break;
		}
	}
	if ((checkCharactersAndPosition(guess, code) == size) && (trys < 10)){
		cout << "Congratulations";
	}
	else {
		cout << "Sorry lou lost!";
	}
}

