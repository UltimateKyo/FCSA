/*
 * DiceRollMain.cpp
 *
 *  Created on: 29 Jun, 2014
 *      Author: Kyo
 */

#include "DiceRoll.h"
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

/*This main method do the following
 * First, check for the argument keyed in
 * if there isn't any argument passed in, the program will advise the user
 * if there's -test argument passed in, the program will run normally
 * if there's -test and a testcase number [1 to 4] passed in, the program will create a sequence of dice that suit the testcase then run the program.
 */
int main(int argc, char* argv[])
{
	//When the program is just run as compile, ie compile as drm, run using drm
	if (argc == 1)
	{
		printf("Please kindly enter either of the parameters in order to run the program.\n");
		printf("For example: dr -test //This will run test the application normally\n");
		printf("To test a certain dice roll pattern, you may use this syntax. dr -test <testcase>\n");
		printf("For example: dr -test 1 //This will generate a Three of a kind dice roll. \n");
		printf("Test Case availiable: \n\t1 - Three of a Kind\n\t2 - Four of a Kind\n\t3 - Full House\n\t4 - Yahtzee\n");
	}
	string launcher= "-test";
	//To check if there's more than 1 argument
	if (argc > 1)
	{
		//Run normally if -test is presented
		if (argv[1] == launcher && argc == 2)
		{
			printf("Rolling all 5 dice now\n");
			DiceRoll gameOn;
			cout << "The dice rolled value of : ";
			for (int i = 0; i < 5; i ++)
			{
				cout << gameOn.getDiceFaceValue(i) << "  " ;
			}
			cout << endl;

			if (gameOn.yahtzee())
			{
				printf("Congratulation!! You have gotten a Yahtzee Combination!!!\nTherefore your score is: %i",gameOn.getScore(3));
			}
			else if (gameOn.fullHouse())
			{
				printf("Congratulation!! You have gotten a Full House Combination!!!\nTherefore your score is: %i\n",gameOn.getScore(2));
			}
			else if (gameOn.fourOfaKind())
			{
				printf("Congratulation!! You have gotten a Four of a Kind Combination!!!\nTherefore your score is: %i\n",gameOn.getScore(1));
			}
			else if (gameOn.threeOfaKind())
			{
				printf("Congratulation!! You have gotten a Three of a Kind Combination!!!\nTherefore your score is: %i\n",gameOn.getScore(0));
			}
			else
			{
				printf("Sorry!! You have gotten a no bonus Combination....\nTherefore due to chance your score is: %i\n",gameOn.getScore(4));
			}
		}
		//Check if there's more than just -test in parameter, there's the <testcase> int being pass in.
		else if (argv[1] == launcher && argc > 2)
		{
			DiceRoll gameOn;
			bool msg = false;
			string case1 = "1", case2 = "2",case3="3",case4="4";
			//Checking for <testcase> then set the diceroll according to the relevant dice combination
			if (argv[2] == case1)
			{
				//Create Tok Dice Roll
				DiceRoll tmp(1,1,1,2,3);
				gameOn = tmp;
				msg = true;
			}

			else if (argv[2] == case2)
			{
				//Create Tok Dice Roll
				DiceRoll tmp(4,4,4,4,3);
				gameOn = tmp;
				msg = true;
			}

			else if (argv[2] == case3)
			{
				//Create Tok Dice Roll
				DiceRoll tmp(5,5,5,2,2);
				gameOn = tmp;
				msg = true;
			}

			else if (argv[2] == case4)
			{
				//Create Tok Dice Roll
				DiceRoll tmp(6,6,6,6,6);
				gameOn = tmp;
				msg = true;
			}
			if (msg)
			{
				cout << "The dice rolled value of : ";
				for (int i = 0; i < 5; i ++)
				{
					cout << gameOn.getDiceFaceValue(i) << "  " ;
				}
				cout << endl;

				if (gameOn.yahtzee())
				{
					printf("Congratulation!! You have gotten a Yahtzee Combination!!!\nTherefore your score is: %i",gameOn.getScore(3));
				}
				else if (gameOn.fullHouse())
				{
					printf("Congratulation!! You have gotten a Full House Combination!!!\nTherefore your score is: %i\n",gameOn.getScore(2));
				}
				else if (gameOn.fourOfaKind())
				{
					printf("Congratulation!! You have gotten a Four of a Kind Combination!!!\nTherefore your score is: %i\n",gameOn.getScore(1));
				}
				else if (gameOn.threeOfaKind())
				{
					printf("Congratulation!! You have gotten a Three of a Kind Combination!!!\nTherefore your score is: %i\n",gameOn.getScore(0));
				}
				else
				{
					printf("Sorry!! You have gotten a no bonus Combination....\nTherefore due to chance your score is: %i\n",gameOn.getScore(4));
				}
			}
			else
			{
				cout<<"Invalid Parameter, Please try other parameter!"<<endl;
			}

		}
	}
}


