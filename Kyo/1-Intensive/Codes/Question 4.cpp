#include <iostream> //Directive; include system library
using namespace std; //needed for cin, cout

int main(){
	int number1,number2;
	cout<<"Please enter the 2 number:"<<endl;
	cin>>number1>>number2;
	if (number1==number2){
	cout<<"The 2 numbers are the same"<<endl;
	}
	else if (number1 > number2){
	cout<<"The first number is bigger"<<endl;
	}
	else if (number1 < number2){
	cout<<"The first number is smaller"<<endl;
	}
}


