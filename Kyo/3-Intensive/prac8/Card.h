/*
 * card.h
 *
 *  Created on: 30 Jun, 2014
 *      Author: Kyo
 */

#ifndef CARDS_H
#define CARDS_H
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <ctime>
using namespace std;

class card
{
	private:
	string rank;
	string suite;


	public:
	card(); //Constructor
	card(int, int); //Overload Constructor
	void getCard(); //To obtain the value of the card
	void setRank(int); //To set the rank of the card using the parameter given
	void setSuite(int); //To set the suite of the card using the parameter given.
};



#endif /* POKERCARDS_H_ */
