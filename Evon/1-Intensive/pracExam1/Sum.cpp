#include <iostream>
using namespace std;

// function declaration
int sum(int);


int main() {

	bool input = true;
	int value = 0;

	
	while (input) {

		cout<<"Enter an integer that is more than 1: ";
		cin>>value;

		input = false;
		
		//check if user input is more than 1
		if (value <= 1) {
		
			input = true;
			cout<<"Integer must be more than 1."<<endl;
		}	

	}


	//cout<<"Sum of Square of "<< value << " = " << (sum(value)) << " ." <<endl;
    printf("Sum of Square of %i = %i. \n",value,(sum(value)));
	

}


int sum(int x) {

	int sum = 0;

	// i will loop until it meets the integer input by user
	for (int i=1; i<=x; i++) {

		// sum up i and the square of i for each loop
		sum += (i*i);

	} 

	return sum;

}
