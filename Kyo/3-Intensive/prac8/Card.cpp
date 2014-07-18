/*
 * PokerCards.cpp

 *
 *  Created on: 30 Jun, 2014
 *      Author: Kyo
 */
#include "Card.h"
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;
string rankList[13] = {"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
string suiteList[4] = {"Diamond","Club","Heart","Spade"};

//Create a card with random rank and suite
card::card()
{
	srand (time(NULL));
	rank = rankList[rand()%13];
	suite = suiteList[rand()%4];
}
//Create a card with the rank and suite provided by parameter r and s
card::card(int r, int s)
{
	rank = rankList[r];
	suite = suiteList[s];
}


//Print the card rank and suite
void card::getCard()
{
	printf("Your Card is %s of %s!\n",rank.c_str(),suite.c_str());
}
//Change the value of rank from the parameter given
void card::setRank(int r)
{
	rank = rankList[r];
}
//Change the value of suite from the parameter given
void card::setSuite(int s)
{
	suite = suiteList[s];

}


