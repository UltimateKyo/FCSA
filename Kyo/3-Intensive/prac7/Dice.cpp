/*
 * Dice.cpp
 *
 *  Created on: 29 Jun, 2014
 *      Author: Kyo
 */

#include "Dice.h"
#include <string>
#include <time.h>
#include <stdlib.h>

using namespace std;
//Default Constructor whereby it will random the faceValue from 1 to 6
Dice::Dice()
{
	srand(time(NULL));
	faceValue = (rand() % 6) + 1;

}
//Roll method to perform reassignment of faceValue from random number 1 to 6
void Dice::roll()
{
	faceValue = (rand() % 6) + 1;

}
//getValue method to return the private variable, faceValue
int Dice::getValue()
{
	return faceValue;
}
//setValue method to set the dice value base on the parameter provided in int i
void Dice::setValue(int i)
{
	faceValue = i;
}
