#include <iostream>
#include <string>
#include "Dummy.h"
using namespace std;

int Dummy::get() const {
	return *num;
}

Dummy::Dummy(const Dummy &other) : num{ nullptr } {
	this->num = new int{}; // Vi allokerer det vi trenger av minne
	*num = other.get(); // Vi kopierer verdier fra other til this
}Dummy &Dummy::operator=(Dummy rhs) {
	// Vi tar inn rhs som call-by-value
	std::swap(num, rhs.num); // Vi swapper pekere
		return *this;
}

void dummyTest() {
	Dummy a;
	*a.num = 4;
	Dummy b{ a };
	Dummy c;
	c = a;
	cout << "a: " << *a.num << endl;
	cout << "b: " << *b.num << endl;
	cout << "c: " << *c.num << endl;
	*b.num = 3;
	*c.num = 5;
	cout << "a: " << *a.num << endl;
	cout << "b: " << *b.num << endl;
	cout << "c: " << *c.num << endl;
	cin.get(); // For å hindre at
	// programmet avslutter med en gang
}