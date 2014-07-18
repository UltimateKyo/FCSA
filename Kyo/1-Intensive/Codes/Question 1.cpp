#include <iostream> //Directive; include system library
using namespace std; //needed for cin, cout
int main(){ //main function for C++
double celsius,fahrenheit;
cout<<"Please enter the Fahrenheit Temperature: ";
cin>>fahrenheit;
celsius =(fahrenheit-32)*5/9;
cout<<"This is the temperature in Celsius after conversion: "<<celsius<<endl;
}
