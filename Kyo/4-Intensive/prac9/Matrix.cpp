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

/*

	//Destructor
	~Matrix();
	//Methods
	void display();
	Matrix& operator=(const Matrix&);
	Matrix& operator+(const Matrix&);
	Matrix& operator*(const Matrix&);
*/
Matrix::Matrix() {
	row = 2;
	col = 4;
}

Matrix::Matrix(string fn,int r,int c)
{
	row = r;
	col = c;
	ifstream fin;
	fin.open(fn.c_str());
	//r = 2 // c = 4
	float msg;
	int i = 0;
	while (fin >> msg)
	{
		data[i] = msg;
		i++;
	}
	fin.close();
}

Matrix::Matrix(const Matrix& other)
{
	row = other.row;
	col = other.col;
	for (int i = 0; i < (row*col); i ++)
	{
		data[i] = other.data[i];
	}
}

int Matrix::getRow()
{
	return row;
}

int Matrix::getCol()
{
	return col;
}

void Matrix::populate(string fn,int r,int c)
{
	row = r;
	col = c;
	ifstream fin;
	fin.open(fn.c_str());
	//r = 2 // c = 4
	double msg;
	float *data = new float[row*col];
	int i = 0;
	while (fin >> msg)
	{
		//cout << msg << endl;
		data[i] = msg;
		i++;
	}

}

void Matrix::set(int rpos,int cpos,float d)
{
	//data[k]=d
	//0 1 2 3
	data[rpos*col+cpos] = d;

}

float Matrix::get(int rpos,int cpos)
{
	return data[rpos*col+cpos];
	//return data[k];
}

void Matrix::display()
{
	int colCount = 0;
	for (int i = 0; i < (row*col); i ++)
	{
		cout << data[i] << " ";
		colCount++;
		if (colCount == (col))
		{
			cout << endl;
			colCount = 0;
		}
	}
}

Matrix& Matrix::operator+(const Matrix& other)
{

		Matrix *tmp = new Matrix();
		for (int i = 0; i < (row*col); i ++)
		{
			tmp->data[i] = data[i] + other.data[i];
		}
		tmp->col = col;
		tmp->row = row;

		return *tmp;

}

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
	tmp->col = other.col;
	tmp->row = row;
	if (row == other.col)
	{
		int rowData1 = 0, rowData2 = 0;
		int colData1 = 0, colData2 = 0;
		int rowCount = 0;
		float tmpData = 0;
			for (int i = 0; i < (row*other.col); i ++)
			{
				tmpData = 0;
				while (colData1 < col)
				{
					tmpData += data[rowData1*col+colData1]*other.data[rowData2*other.col+colData2];
					rowData2++;
					colData1++;
					//cout << tmpData << endl;
				}
					tmp->data[i] = tmpData;
					rowCount++;
					rowData2 = 0;
					colData1 = 0;
					colData2++;
					//cout << tmp->data[i] << endl;
				if (rowCount==other.col)
				{
					rowData1++;
					colData2 = 0;
				}
			}
	}
	/*for (int i = 0; i < (tmp->col * tmp->row); i++)
	{
		cout << tmp->data[i] << endl;
	}*/
	return *tmp;

}
Matrix::~Matrix() {

}
