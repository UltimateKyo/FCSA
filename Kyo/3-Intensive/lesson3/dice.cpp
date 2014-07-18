#include "dice.h"
#include <string>

using namespace std;


Dice::Dice()
{
	//Generate a long list of random numbers
	srand(time(NULL));
	faceValue = (rand() % 6) + 1;
}

void Dice::roll()
{
	//srand(time(NULL));
	faceValue = (rand() %6 ) + 1;
}

int Dice::getValue()
{
	return faceValue;
}
