//
//  Matrix.cpp
//  prac9
//
//  Created by Evon on 28/7/14.
//  Copyright (c) 2014 Kyovon Production. All rights reserved.
//

#include "Matrix.h"
#include <string>
#include <fstream>
#include <sstream>
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
	float num;
    int i = 0;
	while (fin >> num)
    {
        //fin >> msg;
		data[i] = num;
        //cout << msg <<endl;
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


Matrix::~Matrix() {
    
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
	float msg;
	//float *data = new float[row*col];
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
	data[rpos*col+cpos] = d;
    
}

float Matrix::get(int rpos,int cpos)
{
	return data[rpos*col+cpos];
	//return data[0];
}

void Matrix::display()
{
	int rowCount = 0;
	for (int i = 0; i < (row*col); i ++)
	{
		cout << data[i] << " ";
		rowCount++;
		if (rowCount == (col))
		{
			cout << endl;
			rowCount = 0;
		}
	}
}

void Matrix::operator=(const Matrix& other)
{
    row = other.row;
    col = other.col;
    
    for (int i=0; i< (row*col); i++)
    {
        data[i] = other.data[i];
    }
    
}


Matrix& Matrix::operator+(const Matrix& other)
{
    Matrix *m3 = new Matrix();
    m3->row = row;
    m3->col = col;
    
    if ((row == other.row) && (col == other.col))
    {
        for (int i=0; i< (row*col); i++)
        {
            m3->data[i] = data[i] + other.data[i];
            //data[i] += other.data[i];
        }
        
    }
    return *m3;
}

Matrix& Matrix::operator*(const Matrix& other)
{
    Matrix *m3 = new Matrix();
    m3->row = row;
    m3->col = other.col;
    
    if (row == other.col)
    {
        int r1=0, c1=0, r2=0, c2=0;
        float sum=0;
        
        for (int k=0; k < (row * other.col); k++)
        {
            
            for (int m=0; m < (col); m++)
            {
                printf("M1(%i,%i) X M2(%i,%i)\n",r1,c1,r2,c2);
                sum += ((data[(r1*col)+c1]) * (other.data[(r2 * other.col)+c2]));
                
                c1++;
                r2++;
                
            }
            
            m3->data[k] = sum;
            cout << "Adding Up" << endl;
            sum = 0;
            c1=0; r2=0;
            c2++;
           
            if (k == (other.col -1)) //new row of m3
            {
                r1++;
                c2=0;
            }
            
    
            
            
            
        }
        
    }
    
    return *m3;
    
}


