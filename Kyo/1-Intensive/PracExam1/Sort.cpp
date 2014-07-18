#include <iostream>

using namespace std;
void sort(int, int, int);
int num1, num2, num3;
int main(){
cout << "Please enter 3 integers below: "<< endl;
cout << "Integer 1: ";
cin >> num1;
cout << "Integer 2: ";
cin >> num2;
cout << "Integer 3: ";
cin >> num3;
sort (num1,num2,num3); //This is call the function sort with the 3 parameters num1, num2 and num3
}

void sort(int x, int y, int z){ //This function will display the result in descending orders.

	if (x > y) //To identify case whereby x is bigger than y
	{
		if (y > z) //After knowing x is bigger than y, there's only 3 scenario left. This is to determine the scenario, if y is bigger than z.
		{
			printf("The numbers entered will be show in descending orders as such: %i %i %i \n",x,y,z); //x being the biggest followed by y and z
		}
		else if ((y < z) && (z > x)) //Scenario 2: z is bigger than y and x.
		{
			printf("The numbers entered will be show in descending orders as such: %i %i %i \n",z,x,y); //z being the biggest followed by x and y.
		}
		else if ((y < z) && (z < x)) //Scenario 3: z is bigger than y but smaller than x
		{
			printf("The numbers entered will be show in descending orders as such: %i %i %i \n",x,z,y); //x being the biggest followed by z and y.
		}
		else
		{
			cout << "You cannot have dupulicate number!\n";
		}
	}

	else if (x < y) //To identify case whereby x is smaller than y
	{
		if (x > z) //After knowing y is bigger than x, there's only 3 scenario left. This is to determine the scenario, if x is bigger than z.
		{
			printf("The numbers entered will be show in descending orders as such: %i %i %i \n",y,x,z); //y being the biggest followed by x and z
		}
		else if ((x < z) && (y < z)) //Scenario 2: z is bigger than x and y.
		{
			printf("The numbers entered will be show in descending orders as such: %i %i %i \n",z,y,x); //z being the biggest followed by y and x.
		}
		else if ((x < z) && (z < y)) //Scenario 3: z is bigger than x but smaller than y
		{
			printf("The numbers entered will be show in descending orders as such: %i %i %i \n",y,z,x); //y being the biggest followed by z and x.
		}
		else
		{
			cout << "You cannot have dupulicate number!\n";
		}

	}
	else //if x isn't smaller or bigger than y, it most probably means duplicate, therefore this sentence will be displayed.
	{
		cout << "You cannot have dupulicate number!\n";
	}
}
