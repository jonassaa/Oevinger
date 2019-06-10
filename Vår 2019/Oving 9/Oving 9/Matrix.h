#pragma once

#include <iostream>
using namespace std;

class Matrix
{
private:
	int M;
	int N;
	int** mat;

public:
	Matrix();
	Matrix(int, int);
	explicit Matrix(int);
	~Matrix();
	int getRow();
	int getColumn();
	int* operator[](int);



};

ostream& operator<<(ostream& os, Matrix m);

