//
//  dice.cpp
//  prac7
//
//  Created by Evon on 30/6/14.
//  Copyright (c) 2014 Kyovon Production. All rights reserved.
//

#include "dice.h"
#include <string>
#include <time.h>
#include <stdlib.h>

using namespace std;

dice::dice()
{
    
    srand(time(NULL));
    faceValue = (rand()%6+1);
    
}

void dice::roll()
{
    faceValue = (rand()%6+1);
}

void dice::setValue(int d)
{
    faceValue = d;
}

int dice::getValue()
{
    return faceValue;
}