#include "std_lib_facilities.h"
#include "utilities.h"
void testCallByValue() {
	int v0 = 5;
	int increment = 2;
	int iterations = 10;
	int result = incrementByValueNumTimes(v0, increment, iterations);
	cout << "v0: " << v0
		<< " increment: " << increment
		<< " iterations: " << iterations
		<< " result: " << result << endl;
}

void testCallByReference() {
	int v0 = 5;
	int increment = 2;
	int iterations = 10;
	cout << "v0(before): " << v0;
	incrementByValueNumTimesRef(v0, increment, iterations);
	cout<< " increment: " << increment
		<< " iterations: " << iterations
		<< " v0(after): " << v0 << endl;
}

void testVectorSorting() {
	vector<int> percentages;
	randomizeVector(percentages, 10);
	printVectorInt(percentages);
	swapNumbers(percentages[0], percentages[1]);
	printVectorInt(percentages);
	vector<int> sortedVector = sortVector(percentages);
	printVectorInt(sortedVector);
	cout << "median of Vector: " << medianOfVector(percentages)<<endl;
}

void testString() {
	string grades;
	grades = randomizeString(100, 70, 65);
	cout << grades<<endl;
	string a = readInputToString(5,65,70);
	vector<int> gradeCount = { 0,0,0,0,0,0 };
	for (int i = 0; i < 6;i++) {
		gradeCount[i] = countChar(grades, 65 + i);
	}
	printVectorInt(gradeCount);
	double snittkarakter=0;
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		snittkarakter += gradeCount[i] * (5 - i);
		sum += gradeCount[i];
	}
	snittkarakter = snittkarakter / sum;
	cout << "Snittkarakter: " << snittkarakter<<endl;
}