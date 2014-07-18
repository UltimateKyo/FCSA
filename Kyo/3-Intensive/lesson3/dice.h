#ifndef DICE_H
#define DICE_H

#include <string>
using namespace std;

class Dice
{
	public:
	Dice();
	void roll();
	int getValue();

	private:
	unsigned int faceValue;	
};


#endif
