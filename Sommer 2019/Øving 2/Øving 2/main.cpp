#include "std_lib_facilities.h"
#include "Source.h"

int main() {
	int sumOfOneAndTwo = add(1, 2);
	cout << "1 + 2 = " << sumOfOneAndTwo << '\n';
	cout << "2 + 2 = " << add(2, 2) << '\n';
	inputIntegersAndPrintProduct();
	inputAndPrintInteger();
}