#include <iostream>
using namespace std;

int sum(int);

int number = 0,total = 0;

int main(){
	cout << "Please enter a number: ";
	cin >> number;
	if (number > 1) //Fulfilling the question which asked for number more than 1
	{
		printf("The square sum of the number keyed in %i will be : %i\n",number,(sum(number)));
	}
	else
	{
		cout << "Please enter a number which is more than 1 !" << endl;
	}
}


int sum(int x){ // to get the sum square number till the number keyed in.
	for (int i = 1; i <= x; i++) //Since the square is starting from 1, therefore i will be 1 and every loop i will increase till the value become the same as x which is the end of the square number.
	{
		total += (i*i); //To fulfill 1*1 2*2... till x*x and get the total.
	}
	return total;
}
