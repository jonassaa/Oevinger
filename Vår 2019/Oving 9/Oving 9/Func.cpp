using namespace std;
#include "Func.h"
#include <iostream>
#include <string>

void fillInFibonacciNumbers(int result[], int length) {

	result[0] = 0;
	result[1] = 1;

	for (int i = 2; i < length; i++) {
		result[i] = result[i - 1] + result[i - 2];
	}

}

void printArray(int arr[], int length) {
	for (int i = 0; i < length; i++) {
		cout << arr[i] << endl;
	}
}

void createFibonacci() {
	int* fib;
	int n;
	cout << "How many numbers in the fibonacci sequence?: ";
	cin >> n;
	fib = new int[n];

	fillInFibonacciNumbers(fib, n);
	printArray(fib, n);

	delete[] fib;
}