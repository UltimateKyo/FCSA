//
//  main.cpp
//  demo-arg
//
//  Created by Evon on 17/7/14.
//  Copyright (c) 2014 Kyovon Production. All rights reserved.
//

#include <iostream>
#include <String>
using namespace std;

int main(int argc, const char * argv[])
{
    
    //display "successful" when entering "demo -test" in the cmd
    //display "unsuccessful" if other
    
    string v1 = "demo", v2 = "-test";
    int s = 0;
    if (argc > 1)
    {
    
        for (int i =0; i<argc; i++)
        {
            
            if (argv[i] == v2)
            {
                cout<< "Successful" <<endl;
                s++;
            }
            /*else
            {
                cout <<"Unsuccessful" <<endl;
            }*/
            
        }
        
        if (s==0)
        {
            cout <<"Unsuccessful" <<endl;
        }
    
    }
    else
    {
        cout << "Compilation completed with only 1 arguement"<< endl;
    }
    
}


