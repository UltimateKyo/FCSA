#include "dice.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int count = 0;
	//Create 1 dice
	Dice* d1 = new Dice();
	
	//Rolling dice until faceValue = 6
	bool faceValue6 = false;
	while (!faceValue6)
	{
		d1->roll();
		count++;
		if ((d1->getValue()) == 6)
		{
			faceValue6 = true;
		}
	}

	printf("You need to roll %i times to achieve facevalue of 6\n",count);

	Dice *d2 = new Dice();
	
	bool sameValue = false;
	int scount = 0;
	while (!sameValue)
	{
		d1->roll();
		d2->roll();
		scount++;
		if ((d1->getValue()) == (d2->getValue()))
		{
			sameValue=true;
		}
	}
	printf("You have rolled %i times to have both dice having the same face value.\n",scount);

}
