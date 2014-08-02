//
//  main.cpp
//  prac9
//
//  Created by Evon on 28/7/14.
//  Copyright (c) 2014 Kyovon Production. All rights reserved.
//

#include "Matrix.h"
#include <iostream>
using namespace std;

int main()
{
    cout<<"----------------------------------------------------------"<<endl;

    Matrix* m1 = new Matrix("input_a.txt",2,4);
    
     cout<<"Matrix 1: "<<endl;
    m1->display();
    Matrix* m2 = new Matrix("input_b.txt",2,4);
    cout<<"Matrix 2: "<<endl;
    m2->display();
    
    //*m1 = *m2;
    cout<<"New Matrix 1: "<<endl;
    m1->display();
    
    cout<<"----------------------------------------------------------"<<endl;
    
    Matrix* m3 = new Matrix();
    
    *m3 = *m1+*m2;
    cout<<"Matrix 1 + Matrix 2: "<<endl;
    m3->display();
    
    cout<<"----------------------------------------------------------"<<endl;
 
    Matrix* m4 = new Matrix();
    
    m1->populate("input_c.txt", 2, 2);
    m2->populate("input_d.txt", 2, 2);
    

    
    cout<<"Matrix 1: "<<endl;
    m1->display();
    
    cout<<"\nMatrix 2: "<<endl;
    m2->display();
    *m4 = ((*m1) * (*m2));    
    cout<<"\nMatrix 1 * Matrix 2: "<<endl;
    m4->display();
    
    cout<<"----------------------------------------------------------"<<endl;
     
    
}

