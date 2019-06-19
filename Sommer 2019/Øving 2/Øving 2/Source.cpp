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
