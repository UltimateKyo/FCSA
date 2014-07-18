/*
 * DiceRoll.h
 *
 *  Created on: 29 Jun, 2014
 *      Author: Kyo
 */

#ifndef DICEROLL_H
#define DICEROLL_H
#include "Dice.h"
#include <string>

using namespace std;

class DiceRoll
{
	public:
	//Default Constructor
	DiceRoll();
	//Overload Constructor
	DiceRoll(int,int,int,int,int);

	//Below are the methods
	int getDiceFaceValue(int);
	bool threeOfaKind();
	bool fourOfaKind();
	bool fullHouse();
	bool yahtzee();
	int getScore(int);


	private:
	//Creation of 5 Dice object kept in the array dice
	Dice dice[5];

};



#endif /* DICEROLL_H_ */
