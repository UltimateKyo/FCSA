#include <iostream>

using namespace std;

//Declare function display with parameter of 2D array
void display(int [][3],int);
const int SIZE = 2;
int DbArray[SIZE][3];

int main()
{
	for(int i = 0;i<SIZE;i++)
	{
		for(int x = 0; x < 3;x++)
		{
			cout << "Enter Number: ";
			cin >> DbArray[i][x];
		}
	}
	display(DbArray,SIZE);

}

void display(int values[][3],int sz)
{
	for(int i = 0;i<sz;i++)
	{
		for(int x = 0; x < 3;x++)
		{
			printf("The number in [%i][%i] is : %i \n",i,x,DbArray[i][x]);
		}
	}
}
