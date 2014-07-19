//
//  dice.h
//  prac7
//
//  Created by Evon on 30/6/14.
//  Copyright (c) 2014 Kyovon Production. All rights reserved.
//

#ifndef dice_h
#define dice_h


#include <string>
using namespace std;

class dice {
    
private:
    unsigned int faceValue;
    
    
public:
    dice();
    void roll();
    void setValue(int);
    int getValue();
    
    
};


#endif
