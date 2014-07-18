/*
 * DiceRoll.cpp
 *
 *  Created on: 29 Jun, 2014
 *      Author: Kyo
 */

#include "DiceRoll.h"
#include <string>

using namespace std;
//Default constructor that will automatically roll all 5 dice at 1 go
DiceRoll::DiceRoll()
{
	for (int i = 0; i < 5; i ++)
	{
		dice[i].roll();
	}
}
//Overload constructor which will assign the value of dice base on d1 - d5
DiceRoll::DiceRoll(int d1,int d2,int d3,int d4,int d5)
{
	dice[0].setValue(d1);
	dice[1].setValue(d2);
	dice[2].setValue(d3);
	dice[3].setValue(d4);
	dice[4].setValue(d5);

}
//getDiceFaceValue method will return the faceval of the dice which are indicated in int a
int DiceRoll::getDiceFaceValue(int a)
{
	return dice[a].getValue();
}
//threeofakind method to check if there's 3 dices of the same facevalue then return if there is.
bool DiceRoll::threeOfaKind()
{
	int counterForThrees = 0;
	bool threes = false;

	for (int i = 1; i <= 6; i ++)
	{
		for (int x = 0; x < 5; x ++)
		{
			if ((dice[x].getValue())== i)
			{
				counterForThrees++;
			}
		}
		if(counterForThrees == 3)
		{
			threes = true;
		}
		counterForThrees = 0;
	}
	if (threes)
	{
		return true;
	}
	else
	{
		return false;
	}
}
//fourofakind method to check if there's 4 dices of the same facevalue then return if there is.
bool DiceRoll::fourOfaKind()
{
	int counterForFours = 0;
	bool fours = false;

	for (int i = 1; i <= 6; i ++)
	{
		for (int x = 0; x < 5; x ++)
		{
			if ((dice[x].getValue())== i)
			{
				counterForFours++;
			}
		}
		if(counterForFours == 4)
		{
			fours = true;
		}
		counterForFours = 0;
	}
	if (fours)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//Fullhouse method to check if there's 3 dices of the same facevalue + 2 dices of the same facevalue then return if there is.
bool DiceRoll::fullHouse()
{
	int counterForThrees = 0, counterForTwos = 0;
	bool threes = false, twos = false;

	for (int i = 1; i <= 6; i ++)
	{
		for (int x = 0; x < 5; x ++)
		{
			if ((dice[x].getValue())== i)
			{
				counterForThrees++;
				counterForTwos++;
			}
		}
		if(counterForThrees == 3)
		{
			threes = true;
		}

		if(counterForTwos == 2)
		{
			twos = true;
		}
		counterForThrees = 0;
		counterForTwos = 0;
	}
	if ((threes) && (twos))
	{
		return true;
	}
	else
	{
		return false;
	}
}
//yahtzee will check if all the dices are of the same value
bool DiceRoll::yahtzee()
{
	int diceValue = dice[0].getValue(), count = 1;
	for (int i = 1; i < 5; i ++)
	{
		if (diceValue == dice[i].getValue())
		{
			count ++;
		}
	}
	if (count == 5)
	{
		return true;
	}
	else
	{
		return false;
	}
}
//getScore method will return the score of each combination as stated in the int combination
int DiceRoll::getScore(int combination)
{
	/*
	 * Combination Legend:
	 * 0 = Three of a Kind
	 * 1 = Four of a Kind
	 * 2 = Full House
	 * 3 = Yahtzee
	 * 4 = Null (Chance)
	 */
	if (combination == 0 || combination == 1 || combination == 4)
	{
		int score = 0;
		for (int i = 0; i < 5; i ++)
		{
			score += dice[i].getValue();
		}
		return score;
	}

	if (combination == 2) return 25;
	if (combination == 3) return 50;
}
