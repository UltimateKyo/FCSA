/*
 * Matrix.cpp
 *
 *  Created on: 26 Jul, 2014
 *      Author: Kyo
 */

#include "Matrix.h"
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

Matrix::Matrix() {

	//Default Constructor
	//Created to use the default value for Row = 4 & Col = 4.
}

//Overloaded Constructor
//This will assigned row & col as passed in upon calling the constructor
//Data will be given by the filename provided upon calling the constructor
Matrix::Matrix(string fn,int r,int c)
{
	row = r;
	col = c;
	ifstream fin;
	fin.open(fn.c_str());
	int i = 0;
	float detail;
	while (fin >> detail)
	{
		data[i++] = detail;
	}
	fin.close();
}

//Copy Constructor to copy the row,col & data from another Matrix Object
Matrix::Matrix(const Matrix& other)
{
	row = other.row;
	col = other.col;
	for (int i = 0; i < (row*col); i ++)
	{
		data[i] = other.data[i];
	}
}

//Obtaining the row of the Matrix object
int Matrix::getRow()
{
	return row;
}

//Obtaining the col of the Matrix Object
int Matrix::getCol()
{
	return col;
}

//This method will change the row and col value based on the passed in value
//Data will also be replaced by the file from the file directory as stated upon calling this method
void Matrix::populate(string fn,int r,int c)
{
	row = r;
	col = c;
	ifstream fin;
	fin.open(fn.c_str());
	//r = 2 // c = 4
	double msg;
	int i = 0;
	while (fin >> msg)
	{
		data[i++] = msg;
	}
}

//To set the value of the matrix based on the matrix pattern m(r,c)
void Matrix::set(int rpos,int cpos,float d)
{
	data[rpos*col+cpos] = d;
}

//To get the value of the matrix based on the matrix pattern m(r,c)
float Matrix::get(int rpos,int cpos)
{
	return data[rpos*col+cpos];

}

//This function will print out all the value on the data by the row by col pattern.
void Matrix::display()
{
	int colCount = 0;
	for (int i = 0; i < (row*col); i ++)
	{
		cout << data[i] << "\t";
		colCount++;
		if (colCount == (col))
		{
			cout << endl;
			colCount = 0;
		}
	}
}

//This function will return a new object based on the addition of 2 matrix object (object 1 + object 2);
Matrix& Matrix::operator+(const Matrix& other)
{
	Matrix *tmp = new Matrix();
	if (row == other.row)
	{
		tmp->col = col;
		tmp->row = row;
		for (int i = 0; i < (row*col); i ++)
		{
			tmp->data[i] = data[i] + other.data[i];
		}
	}
	else
	{
		cout << "Sorry invalid operation as the 2 Matrix doesn't comply to the Matrix Addition Rules. Both Matrix must be of the same number of row & col! Default Matrix is returned!" << endl;
	}
	return *tmp;
}

//This function will work like a copy constructor, making both object identical after applying this method
void Matrix::operator=(const Matrix& other)
{
	col = other.col;
	row = other.row;
	for (int i = 0; i < (other.row*other.col); i++)
	{
		data[i] = other.data[i];
	}
}

Matrix& Matrix::operator*(const Matrix& other)
{
	Matrix *tmp = new Matrix();
	if (row == other.col)
	{
		tmp->col = other.col;
		tmp->row = row;
		//First Matrix
		int rowData1 = 0, colData1 = 0;
		//Second Matrix
		int rowData2 = 0, colData2 = 0;

		//For literation purpose
		int rowCount = 0;

		//Temporary storage to store the sum of M1 * M2
		float tmpData = 0;

		/*
		 * Based on Multiplication of Matrix Formula
		 * The result of 2 Matrix will be :
		 * 	The New Matrix will have the Same number of row as the FIRST Matrix & Same number of Col as the SECOND Matrix.
		 * Therefore this for loop will loop till i < Row of M1 * Col of M2
		 */
			for (int i = 0; i < (row*other.col); i ++)
			{
				tmpData = 0;
				while (colData1 < col)
				{
					//Every loop, Matrix 1 will move to the new col & matrix 2 will move to the new row
					tmpData += data[rowData1*col+(colData1++)]*other.data[(rowData2++)*other.col+colData2];
				}
				/*
				 *After running till the end of col for Matrix 1 which also means end of row for MAtrix 2, it will store the total sum to data[i] as the answer
				 *In addition, keep track of how many times this loop is going by using rowCount++
				 *In Before moving on to the same loop again, restart the colData1 back to 0 & rowdata2 to 0
				 */

					tmp->data[i] = tmpData;
					rowCount++;
					rowData2 = 0;
					colData1 = 0;
					colData2++;

				if (rowCount==other.col)
				{
					rowData1++;
					colData2 = 0;
				}
			}
	}
	else
	{
		cout << "Sorry invalid operation as the 2 Matrix doesn't comply to the Matrix Multiplication Rules. The row of 1st Matrix must be same with col of 2nd Matrix! Default Matrix is returned!" << endl;
	}

	return *tmp;

}
Matrix::~Matrix() {
 //Destructor

}
