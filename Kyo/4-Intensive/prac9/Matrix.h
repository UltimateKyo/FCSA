/*
 * Matrix.h
 *
 *  Created on: 26 Jul, 2014
 *      Author: Kyo
 */

#ifndef MATRIX_H
#define MATRIX_H
#include <string>

using namespace std;

class Matrix {
private:
	int row;
	int col;
	float data[];
public:
	//Default Constructor
	Matrix();
	//Overloaded Constructor
	Matrix(string,int,int);
	//Copy Constructor
	Matrix(const Matrix&);
	//Destructor
	~Matrix();
	//Methods
	int getRow();
	int getCol();
	void populate(string,int,int);
	void set(int,int,float);
	float get(int,int);
	void display();
	void operator=(const Matrix&);
	Matrix& operator+(const Matrix&);
	Matrix& operator*(const Matrix&);
};



#endif /* MATRIX_H_ */
