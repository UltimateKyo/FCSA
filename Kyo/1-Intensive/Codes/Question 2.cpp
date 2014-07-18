#include <iostream> //Directive; include system library
using namespace std; //needed for cin, cout
int main(){ //main function for C++
int one,two,three,total;
double average;

cout<<"Enter 1st number: ";
cin>>one;
cout<<"Enter 2nd number: ";
cin>>two;
cout<<"Enter 3rd number: ";
cin>>three;
total = one+two+three;
cout<<"The sum is "<<total<<endl;
average = total/3.0;
cout<<"The average is "<<average<<endl;
}
