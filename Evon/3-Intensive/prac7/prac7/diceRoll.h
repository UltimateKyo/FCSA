//
//  diceRoll.h
//  prac7
//
//  Created by Evon on 30/6/14.
//  Copyright (c) 2014 Kyovon Production. All rights reserved.
//

#ifndef diceRoll_h
#define diceRoll_h

#include "dice.h"
using namespace std;

class diceRoll {
    
private:
    //create dice object array to store 5 dices
    dice diceArray[5];
    
public:
    //Default Constructor - stores default parameters
    diceRoll();
    //Overloaded Constructor - accepts parameters
    diceRoll(int,int,int,int,int);
    int getFaceValues(int);
    bool threeOfAKind();
    bool fourOfAKind();
    bool fullHouse();
    bool yahtzee();
    int getScore();
    
};



#endif
