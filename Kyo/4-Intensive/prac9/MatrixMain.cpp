/*
 * MatrixMain.cpp
 *
 *  Created on: 27 Jul, 2014
 *      Author: Kyo
 */
#include <iostream>
#include <stdio.h>>
#include "Matrix.h"
using namespace std;

int main()
{

	//Declaring m1 with Overloaded Constructor
	Matrix *m1 = new Matrix("input_a.txt",2,4);
	cout << "Matrix 1:" << endl;
	m1->display();

	//Declaring m2 with default constructor.
	Matrix *m2 = new Matrix();
	//Populate m2
	m2->populate("input_b.txt",2,4);
	cout << "Matrix 2:" << endl;
	m2->display();

	//Declaring m3 with copy constructor.
	Matrix *m3 = new Matrix(*m2);
	cout << "Displaying M3 after copying from M2" << endl;
	m3->display();
	//Making m3 same as m1 + m2;
	*m3 = *m1+*m2;
	cout << "Matrix 3 = Matrix 1 * Matrix 2" << endl;
	m3->display();
	cout << "Checking M3(1,1) value: " << m3 ->get(1,1) << endl;
	//Changing value of m3
	m3->set(1,1,50);
	cout << "Checking new M3(1,1) value: " << m3 ->get(1,1) << endl;
	//Checking row & col of M3
	printf("M3 have %i rows & %i cols\n",m3->getRow(),m3->getCol());

	//Declaring m4 & m5 to be used in multiplication
	Matrix *m4 = new Matrix("input_c.txt",2,2);
	cout << "Matrix 4:" << endl;
	m4->display();

	Matrix *m5 = new Matrix("input_d.txt",2,2);
	cout << "Matrix 5:" << endl;
	m5->display();
	Matrix *m6 = new Matrix();

	//Applying result of Multiplication m4 * m5 to m6 & display
	*m6 = *m4 *(*m5);

	cout << "Matrix 6:" << endl;
	m6->display();

	//Delocating class memory using destructor
	m1->~Matrix();
	m2->~Matrix();
	m3->~Matrix();
	m4->~Matrix();
	m5->~Matrix();
	m6->~Matrix();
}
