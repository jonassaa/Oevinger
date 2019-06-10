#include "utilities.h"
#include "std_lib_facilities.h"

int incrementByValueNumTimes(int startValue, int increment, int numTimes) {
	for (int i = 0; i < numTimes; i++) {
		startValue += increment;
	}
	return startValue;
}
void incrementByValueNumTimesRef(int& startValue, int increment, int numTimes) {
	for (int i = 0; i < numTimes; i++) {
		startValue += increment;
	}
}
void swapNumbers(int& first, int& second) {
	int temp = first;
	first = second;
	second = temp;
}
void randomizeVector(vector<int>& aVector,int n) {
	for (int i = 0; i < n; i++) {
		aVector.push_back(randomWithLimits(0,100));
	}
}
int randomWithLimits(int lower, int upper) {
	return lower + rand() % (upper + 1 - lower);
}
void printVectorInt(vector<int> aVector) {
	for (int i = 0; i < aVector.size(); i++) {
		cout << aVector[i] << " ";
	}
	cout << endl;
}
vector<int> sortVector(vector<int> aVector) {
	for (int i = 0; i < aVector.size(); i++) {
		for (int j = 1; j < aVector.size(); j++) {
			if (aVector[j - 1] > aVector[j]) {
				swapNumbers(aVector[j - 1], aVector[j]);
			}
		}
	}
	return aVector;
}
void sortVectorRef(vector<int>& aVector) {
	for (int i = 0; i < aVector.size(); i++) {
		for (int j = 1; j < aVector.size(); j++) {
			if (aVector[j - 1] > aVector[j]) {
				swapNumbers(aVector[j - 1], aVector[j]);
			}
		}
	}
}
bool isEven(int number) {
	if (number % 2 == 0) {
		return true;
	}
	else {
		return false;
	}
}
double medianOfVector(vector<int> aVector) {
	sortVectorRef(aVector);
	if (isEven(aVector.size())) {
		int upper = aVector.size() / 2 ;
		int lower = aVector.size() / 2 - 1;
		double ans = (aVector[upper] + aVector[lower]) / 2;
		return ans;
	}
	else {
		int index = aVector.size() / 2 - 0.5;
		return aVector[index];
	}
}
string randomizeString(int length, char upper, char lower) {
	string ans;
	for (int i = 0; i < length; i++) {
		char letter = randomWithLimits(lower, upper);
		ans.push_back(letter);
	}
	return ans;
}
bool checkString(string aString, int length, char max, char min) {
	if (aString.length() > length) { 
		return false; 
	}
	for (char c : aString) {
		if (!isalpha(c)) {
			return false;
		}
		if (c<min || c>max) {
			return false;
		}
	}
	return true;
}
string readInputToString(int n, char lower, char upper) {
	string ans;
	do {
		cout << "Skriv inn en streng med bokstaver med " << n << " tegn: ";
		cin >> ans;
		cout << ans << endl;
	} while (!checkString(ans, n, upper, lower));
	return ans;
}
int countChar(string aString,char aChar) {
	int counted=0;
	for (char c : aString) {
		if (c == aChar) {
			counted += 1;
		}
	}
	return counted;
}
string getUnique(string aString) {
	string unique;
	for (char c : aString) {
		if (unique.find(c) == -1) {
			unique.push_back(c);
		}
	}
	return unique;
}