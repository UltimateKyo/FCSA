#include <iostream>

using namespace std;

void numberOfTwos(int,int,int);
void numberOfXs(int,int,int,int);
void totalOfXs(int,int,int,int);

int main(){
	int numOfCases = 5;
	/*
	 * Part 2
	 * Total numOfCases is 5.
	 */
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

	/*
	 * Part 3
	 * Number of cases = 5
	 * Boundary Cases will be scenario 1 & 3. Whereby when x is 0< & <7 so boundary number will be 1 and 6.
	 * Equivalence Cases will be scenario 2, 4 & 5. Whereby x is between 2 to 5.
	 * White Box testing is to see if the print out are formatted as coded
	 * Black Box testing we will just have to see if the print out result is correct.
	 */
	cout << "\n\n\tDemonstration of part 3" <<endl;
	numOfCases = 5;
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

	/*
	 * Part 4
	 * Number of cases = 4
	 * Boundary Cases will be scenario 1 & 2. Whereby when x is >=3 & <=18 so boundary number will be 3 and 18.
	 * Equivalence Cases will be scenario 3 & 4. Whereby x is between 4 to 17.
	 * White Box testing is to see if the print out are formatted as coded
	 * Black Box testing we will just have to see if the print out result is correct.
	 */
	cout << "\n\n\tDemonstration of part 4" <<endl;
	numOfCases = 4;
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
		cout << "In the case of dice roll a = 1, b = 2,c = 3 and x = sum of a,b,c (Equivalence Cases)" <<endl;
		int a = 1, b = 2, c = 3;
		x = a+b+c;
		totalOfXs(a,b,c,x);
		}
	}

}


/*
 * Part 2
 * This function will check on how many 2 are there in your 3 dice roll a, b & c respectively and print out the number of twos appearing
 */
void numberOfTwos(int a, int b, int c)
{
	int count = 0;
	if (a == 2)  count ++;
	if (b == 2) count ++;
	if (c == 2) count++;
	printf("The number of Twos that appear in your combination is : %i\n\n",count);
}

/*
 * Part 3
 * This function will check on how many x are there in your 3 dice rolls then print out the total time x appeared in your 3 dice roll
 */

void numberOfXs(int a,int b,int c,int x)
{
	int count = 0;
	if (a == x) count ++;
	if (b == x) count ++;
	if (c == x) count ++;
	printf("The numbers of %i appearing in your combination is : %i\n\n",x,count);
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
	cout << "The total number of combination which return you " << x<<" is: "<< combination<<"\n"<<endl;
}
