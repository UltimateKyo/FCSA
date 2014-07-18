#include <iostream>
#include <ctime>
#include <stdio.h>

using namespace std;

void numberOfTwos(int,int,int);
void numberOfXs(int,int,int,int);
void totalOfXs(int,int,int,int);
const int numOfCases = 5;

int main(){
	cout << "\tDemonstration of part 2"<<endl;
	for (int scenario = 1; scenario <= numOfCases; scenario ++)
	{
		printf("==========For Test Case %i==========\n",scenario);
		if (scenario == 1)
		{
		cout << "In the case of dice roll a = 2, b = 1 and c = 1" <<endl;
		numberOfTwos(2,1,1);
		}
		if (scenario == 2)
		{
		cout << "In the case of dice roll a = 3, b = 2 and c = 2" <<endl;
		numberOfTwos(3,2,2);
		}
		if (scenario == 3)
		{
		cout << "In the case of dice roll a = 2, b = 2 and c = 2" <<endl;
		numberOfTwos(2,2,2);
		}
		if (scenario == 4)
		{
		cout << "In the case of dice roll a = 4, b = 6 and c = 2" <<endl;
		numberOfTwos(4,6,2);
		}
		if (scenario == 5)
		{
		cout << "In the case of dice roll a = 4, b = 6 and c = 3" <<endl;
		numberOfTwos(4,6,3);
		}
	}
	cout << "\n\n\tDemonstration of part 3" <<endl;
	for (int scenario = 1; scenario <= numOfCases; scenario ++)
	{
		printf("==========For Test Case %i==========\n",scenario);
		if (scenario == 1)
		{
		cout << "In the case of dice roll a = 1, b = 1,c = 1 and x = 1 (Boundary Cases)" <<endl;
		numberOfXs(1,1,1,1);
		}
		if (scenario == 2)
		{
		cout << "In the case of dice roll a = 2, b = 2, c=2 and x = 3 (Equivalence cases)" <<endl;
		numberOfXs(2,2,2,3);
		}
		if (scenario == 3)
		{
		cout << "In the case of dice roll a = 6, b = 6, c=6 and x = 6 (Boundary cases)" <<endl;
		numberOfXs(6,6,6,6);
		}
		if (scenario == 4)
		{
		cout << "In the case of dice roll a = 2, b = 3, c=2 and x = 2 (Equivalence cases)" <<endl;
		numberOfXs(2,3,2,2);
		}
		if (scenario == 5)
		{
		cout << "In the case of dice roll a = 2, b = 2, c=3 and x = 2 (Equivalence cases)" <<endl;
		numberOfXs(2,2,3,2);
		}
	}
	cout << "\n\n\tDemonstration of part 4" <<endl;
	for (int scenario = 1; scenario <= numOfCases; scenario ++)
	{
		int x = 0;
		printf("==========For Test Case %i==========\n",scenario);
		if (scenario == 1)
		{
		cout << "In the case of dice roll a = 1, b = 1,c = 1 and x = sum of a,b,c (Boundary Cases)" <<endl;
		int a = 1, b = 1, c = 1;
		x = a+b+c;
		totalOfXs(a,b,c,x);
		}
		if (scenario == 2)
		{
		cout << "In the case of dice roll a = 6, b = 6,c = 6 and x = sum of a,b,c (Boundary Cases)" <<endl;
		int a = 6, b = 6, c = 6;
		x = a+b+c;
		totalOfXs(a,b,c,x);
		}		
		if (scenario == 3)
		{
		cout << "In the case of dice roll a = 3, b = 4,c = 5 and x = sum of a,b,c (Equivalence Cases)" <<endl;
		int a = 3, b = 4, c = 5;
		x = a+b+c;
		totalOfXs(a,b,c,x);
		}		
		if (scenario == 4)
		{
		cout << "In the case of dice roll a = 1, b = 2,c = 3 and x = sum of a,b,c (Boundary Cases)" <<endl;
		int a = 1, b = 2, c = 3;
		x = a+b+c;
		totalOfXs(a,b,c,x);
		}	
	}

}


//Part 2
void numberOfTwos(int a, int b, int c)
{
	int count = 0;
	if (a == 2)  count ++;
	if (b == 2) count ++;
	if (c == 2) count++;
	printf("The number of Twos that appear in your combination is : %i\n",count);
}

//Part 3

void numberOfXs(int a,int b,int c,int x)
{
	int count = 0;
	if (a == x) count ++;
	if (b == x) count ++;
	if (c == x) count ++;
	printf("The numbers of %i appearing in your combination is : %i\n",x,count);
}

//Part 4
void totalOfXs(int a, int b, int c, int x)
{
	int combination = 0;
	for (int a = 1; a <= 6 ; a ++)
	{
		for (int b = 1; b <= 6 ; b ++)
		{
			for (int c = 1; c <= 6 ; c ++)
			{
				if ((a+b+c)==x)  combination++;
			}
		}
	}
	cout << "The total number of combination which return you " << x<<" is: "<< combination<<endl;
}