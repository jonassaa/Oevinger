#pragma once
#include "std_lib_facilities.h"

int incrementByValueNumTimes(int startValue, int increment, int numTimes);

void incrementByValueNumTimesRef(int& startValue, int increment, int numTimes);

void swapNumbers(int& first, int& second);

void randomizeVector(vector<int>& aVector,int n);

int randomWithLimits(int lower, int upper);

void printVectorInt(vector<int> aVector);

vector<int> sortVector(vector<int> aVector);

void sortVectorRef(vector<int>& aVector);

double medianOfVector(vector<int> aVector);

bool isEven(int number);

string randomizeString(int length, char upper, char lower);

string readInputToString(int n, char lower, char upper);

bool checkString(string aString,int length, char max, char min);

int countChar(string aString, char aChar);

string getUnique(string aString);