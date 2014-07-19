//
//  main.cpp
//  prac7
//
//  Created by Evon on 30/6/14.
//  Copyright (c) 2014 Kyovon Production. All rights reserved.
//

//#include "dice.h" = Dont need becos alrdy included in DiceRoll.h
#include "diceRoll.h"
#include <iostream>
#include <String>
using namespace std;

int main(int argc, const char * argv[])
{
    //declare diceroll object that holds 5 dice roll value
    diceRoll d;
    
    string value = "-test", value2 = "-case1", value3 = "-case2", value4 = "-case3", value5 = "-case4";
    
    if (argc > 1)
    {
        if (argv[1] == value)
        {
            cout<<"Test Case Avaliable: "<<endl;
            cout<<"\tCase 1 -- Three of a Kind"<<endl;
            cout<<"\tCase 2 -- Four of a Kind"<<endl;
            cout<<"\tCase 3 -- Full House"<<endl;
            cout<<"\tCase 4 -- Yahtzee\n"<<endl;
            
            
            if (argv[2] == value2)
            {
                cout<<"Test Case 1 - Three of a Kind :"<<endl;
                diceRoll de(3,3,3,2,1);
                d = de;
            }
            else if (argv[2] == value3)
            {
                cout<<"Test Case 2 - Four of a Kind :"<<endl;
                diceRoll de(3,3,3,3,1);
                d = de;
            }
            else if (argv[2] == value4)
            {
                cout<<"Test Case 3 - Full House :"<<endl;
                diceRoll de(3,3,3,1,1);
                d = de;
            }
            else if (argv[2] == value5)
            {
                cout<<"Test Case 4 - Yahtzee :"<<endl;
                diceRoll de(3,3,3,3,3);
                d = de;
            }
        }
    }
    
    //display value of object
    
    cout<<"Value of 5 Dice : ";
    for (int i=0; i<5; i++)
    {
        cout<< d.getFaceValues(i) <<" ";
    }
    cout<<endl;
        

    //check which Rules is applicable
    if (d.fullHouse())
    {
        cout<<"You have got a Full House."<<endl;
    }
    else if (d.yahtzee())
    {
        cout<<"You have got a Yahtzee."<<endl;
    }
    else if (d.fourOfAKind())
    {
        cout<<"You have got a Four Of A Kind."<<endl;
    }
    else if (d.threeOfAKind())
    {
        cout<<"You have got a Three Of A Kind."<<endl;
    }
    else
    {
        cout<<"You have got a Chance."<<endl;
    }
    
    printf ("And your score is %i\n",d.getScore());
    
}


