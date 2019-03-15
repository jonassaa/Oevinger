#include "Matrix.h"
#include "Func.h"
#include <iostream>
#include <string>
using namespace std;

Matrix::Matrix()
{
	mat=nullptr;
	N = 0;
	M = 0;
}

Matrix::Matrix(int nRows, int mColumns) {
	int** mat = new int*[nRows];
	for (int row = 0; row < nRows; row++) {
		mat[row] = new int[mColumns];
	}
	N = nRows;
	M = mColumns;
}

Matrix::Matrix(int nRows) : Matrix(nRows, nRows) {
	for (int i = 0; i < nRows; i++) {
		for (int j = 0; j < nRows; j++) {
			mat[i][j] = 0;
		}
	}
	for (int i = 0; i < nRows; i++) {
		mat[i][i] = 1;
	}
}


Matrix::~Matrix()
{
	for (int i = 0; i < N; i++) {
		delete[] mat[i];
	}
	delete[] mat;
}


int Matrix::getRow() {
	return N;
}

int Matrix::getColumn() {
	return M;
}

int* Matrix::operator[](int n){
	return mat[n];
}

ostream& operator<<(ostream& os, Matrix m){

	for (int i = 0; i < m.getRow(); i++) {
		for (int j = 0; j < m.getColumn(); j++) {
			os << m[j][i] << " ";
		}
		os << endl;
	}
	return os;
}


