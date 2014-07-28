/*
 * MatrixMain.cpp
 *
 *  Created on: 27 Jul, 2014
 *      Author: Kyo
 */
#include <iostream>
#include "Matrix.h"
using namespace std;

int main()
{
	/*
	Matrix *m1 = new Matrix("input_a.txt",2,4);
	//m1->display();

	Matrix *m2 = new Matrix("input_b.txt",2,4);
	//m2->display();

	Matrix *m3 = new Matrix();
	//*m3 = *m1+*m2;
	//m3->display();
	*/
	Matrix *m4 = new Matrix("input_c.txt",2,2);
	//m4->display();
	Matrix *m5 = new Matrix("input_d.txt",2,2);
	//m5->display();
	Matrix *m6 = new Matrix();
	*m6 = *m4 *(*m5);
	//m6->get(0,0);
	m6->display();
}
