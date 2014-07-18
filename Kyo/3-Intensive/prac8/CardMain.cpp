/*
 * PokerCardMain.cpp
 *
 *  Created on: 30 Jun, 2014
 *      Author: Kyo
 */
#include "Card.h"
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;
void displayAllCards();

/*
 * This function will create a random seed to random pick a card known as testerCard and test. Display the 2 cards and also display the entire deck of cards.
 */
int main()
{
	srand (time(NULL));
	//Testing of overload constructor
	card testerCard((rand()%13),(rand()%4));

	//Testing of default constructor
	card demoCard;

	//Testing of getCard function
	demoCard.getCard();
	testerCard.getCard();

	//Testing setRank and setSuite function
	displayAllCards();
}

/*
 * This function will loop through card from Ace to K and diamond to spade then print them out
 */
void displayAllCards()
{
	int rank = 0, suite = 0;
	card Card[53];
	for (int i = 0; i < 52; i ++)
	{
		Card[i].setRank(rank);
		Card[i].setSuite(suite);
		rank ++;
		if ((rank == 13)||(rank == 25)||(rank == 33))
		{
			suite++;
			rank = 0;
		}
	}
	for (int x = 0; x < 52; x ++)
	{
		Card[x].getCard();
	}
}



