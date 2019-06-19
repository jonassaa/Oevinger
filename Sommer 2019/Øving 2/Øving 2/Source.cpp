#include "std_lib_facilities.h"

int add(int a, int b) {
	return a + b;
}
// Funksjonen tar ikke inn noe og returnerer ingenting
// Input kommer fra brukeren av programmet: cin,
// og output skrives til brukeren av programmet: cout.
void inputIntegersAndPrintProduct() {
	int x = 0;
	int y = 0;
	cout << "Skriv inn to heltall: ";
	cin >> x;
	cin >> y;
	int product = x * y;
	cout << x << " * " << y << " = " << product << '\n';
}

void inputAndPrintInteger() {
	int a;
	cout << "Input an integer: ";
	cin >> a;
	cout << "Integer = " << a << endl;
}
int inputInteger() {
	int a;
	cout << "Input an integer: ";
	cin >> a;
	return a;
}

void inputIntegersAndPrintSum() {
	int a = inputInteger();
	int b = inputInteger();
	cout << "The sum is: " << a + b << endl;
}

bool isOdd(int a) {
	if (a % 2 != 0) {
		return true;
	}
	else {
		return false;
	}
}

void printHumanReadableTime(int time) {
	int hr = time / 3600;
	int min = (time % 3600) / 60;
	int sec = (time % 3600) % 60;
	cout << "The time is: " << hr << ":" << min << ":" << sec << endl;
}