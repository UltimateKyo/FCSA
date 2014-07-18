/*
 * Dice.h
 *
 *  Created on: 29 Jun, 2014
 *      Author: Kyo
 */

#ifndef DICE_H
#define DICE_H

#include <string>
using namespace std;

class Dice
{
	public:
	Dice(); //Default Constructor
	void roll();
	int getValue();
	void setValue(int);
	private:
	unsigned int faceValue;
};



#endif /* DICE_H_ */
