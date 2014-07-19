//
//  Card.cpp
//  prac8
//
//  Created by Evon on 9/7/14.
//  Copyright (c) 2014 Kyovon Production. All rights reserved.
//

#include "Card.h"

//Initialize default constructor
card::card()
{
    rank = "A";
    suite = "Diamond";
}


//Initialize of getter method
string card::getRank()
{
    return rank;
}

string card::getSuite()
{
    return suite;
}

//Initialize of setter method
void card::setRank(string r)
{
    rank = r;
}

void card::setSuite(string s)
{
    suite = s;
}