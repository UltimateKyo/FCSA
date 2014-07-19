//
//  Card.h
//  prac8
//
//  Created by Evon on 9/7/14.
//  Copyright (c) 2014 Kyovon Production. All rights reserved.
//

#ifndef Card_h
#define Card_h
#include <string>

using namespace std;

class card
{
private:
    string rank, suite;
    
public:
    //Declaration of default Constructor
    card();
    //Declaration of getter method
    string getRank();
    string getSuite();
    
    //Declaration of setter method
    void setRank(string);
    void setSuite(string);
    
};


#endif
