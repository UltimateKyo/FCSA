//
//  Matrix.h
//  prac9
//
//  Created by Evon on 28/7/14.
//  Copyright (c) 2014 Kyovon Production. All rights reserved.
//

#ifndef MATRIX_H_
#define MATRIX_H_
#include <string>

using namespace std;

class Matrix {
private:
	int row = 10;
	int col = 10;
	float* data = new float[row*col];
    
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
