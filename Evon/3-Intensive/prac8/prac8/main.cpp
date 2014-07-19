//
//  main.cpp
//  prac8
//
//  Created by Evon on 9/7/14.
//  Copyright (c) 2014 Kyovon Production. All rights reserved.
//

#include <iostream>
#include "Card.h"
#include <string>
using namespace std;
//This function will create a deck of 52 card objects, modify the objects then display them out.
int main()
{
    //Creating deck of 52 card object using default constructor
    card deck[52];
    
    //Generate & store correct card information in deck object array
    string rank[13] = {"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
    string suite[4] = {"Diamond","Club","Heart","Spade"};
    int s = 0, r = 0;
    for (int i = 0; i < 52; i ++)
    {
        
        deck[i].setRank(rank[r]);
        r++;
        deck[i].setSuite(suite[s]);
        
        if (i == 12 || i == 25 || i == 38)
        {
            r = 0;
            s++;
        }
    }
    
    //Printing of entire deck
    for (int x = 0; x < 52; x ++)
    {
        printf("%s of %s\n",(deck[x].getRank().c_str()),(deck[x].getSuite().c_str()));
    }
    
}

