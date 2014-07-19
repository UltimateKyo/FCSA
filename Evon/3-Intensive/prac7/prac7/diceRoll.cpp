//
//  diceRoll.cpp
//  prac7
//
//  Created by Evon on 30/6/14.
//  Copyright (c) 2014 Kyovon Production. All rights reserved.
//

#include "diceRoll.h"
using namespace std;


//contructors

//create DiceRoll object to store 5 dice rolls at 1 time
diceRoll::diceRoll()
{
    for (int i=0; i<5; i++)
    {
        diceArray[i].roll();
    }
    
}

diceRoll::diceRoll(int d1,int d2,int d3,int d4,int d5)
{
    diceArray[0].setValue(d1);
    diceArray[1].setValue(d2);
    diceArray[2].setValue(d3);
    diceArray[3].setValue(d4);
    diceArray[4].setValue(d5);
}

//Methods Declarations
//return the value of each dice roll, using Dice function : getValue()
int diceRoll::getFaceValues(int d)
{
    
    return diceArray[d].getValue();
    
}

//check if there is 3 same dice value in the dice array, return true or false
bool diceRoll::threeOfAKind()
{
    
    int count=0;
    
    // from value 1-6, if each dice roll (dr) in dice array matches, count + 1
    for (int value=1; value <= 6; value ++)
    {
        for (int dr = 0; dr < 5; dr++)
        {
            if (diceArray[dr].getValue() == value)
            {
                count++;
            }
        }
        
        //After looping each dice value to match value, if count = 3 return true
        if (count == 3)
        {
            return true;
        }
       
        //if count of value not = 3, reset count
        count = 0;
        
        
    }
        return false;

}

//check if there is 4 same dice value in the dice array, return true or false
bool diceRoll::fourOfAKind()
{
    int count=0;
    
    // from value 1-6, if each dice roll (dr) in dice array matches, count + 1
    for (int value=1; value <= 6; value ++)
    {
        for (int dr = 0; dr < 5; dr++)
        {
            if (diceArray[dr].getValue() == value)
            {
                count++;
            }
        }
        
        //After looping each dice value to match value, if count = 4 return true
        if (count == 4)
        {
            return true;
        }
        
        //if count of value not = 4, reset count
        count = 0;
        
        
    }
    return false;
    
}

//check if there is 3 + 2 same dice value in the dice array, return true or false
bool diceRoll::fullHouse()
{
    int count=0,count2=0;
    
    // from value 1-6, if each dice roll (dr) in dice array matches, count + 1
    for (int value=1; value <= 6; value ++) //
    {
        for (int dr = 0; dr < 5; dr++)
        {
            if (diceArray[dr].getValue() == value)
            {
                count++;
                
            }

        }
        
        if (count == 2)
        {
            count2 = count;
        }
        
        //After looping each dice value to match value, if count = 3 and count2 = 2 return true
        if (count == 3 && count2 == 2)
        {
            return true;
        }
        
        //if count of value not = 3 & count value2 not = 2, reset count
        count = 0;
        
    }
    return false;
}

//check if all the 5 dice object in the array is the same
bool diceRoll::yahtzee()
{
    int count=0;
    
    //loop to match dice object with previous dice object, if match count + 1
    for (int dr=1; dr < 5; dr++)
    {
        if (diceArray[dr].getValue() == diceArray[dr-1].getValue())
        {
            count++;
        }
    }
    
    //return true when count = 4
    if (count == 4)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

//return score based on Rules of game (e.g. yahtzee, fullhouse, or chance)
int diceRoll::getScore()
{
    int score = 0;
    
    if (yahtzee())
    {
        score = 50;
    }
    else if (fullHouse())
    {
        score = 25;
    }
    else
    {
        for (int dr=0; dr < 5; dr++)
        {
            score += diceArray[dr].getValue();
        }
    }
    
    return score;
}



