#include <iostream>
using namespace std;

void populate(int[],int);
void display(int[],int);
int max(int[],int);
int sum(int[],int);

int main()
{
	const int SIZE=10;
	int values[SIZE];
	populate(values,SIZE);
	display(values,SIZE);
	printf("The largest values in the array is: %i\n",max(values,SIZE));
	printf("The total values sumed up in the array is: %i\n",sum(values,SIZE));
}

void populate(int values[], int sz)
{
	for (int i=0;i<sz;i++)
	{
		cout<<"Enter value: ";
		cin>>values[i];
	}

}

void display(int values[],int sz)
{
	for (int i=0;i<sz;i++)
	{
		printf("Value of [%i] = %i\n",i,values[i]);
	}	
}

int max(int values[],int sz)
{
	int largest=values[0];
	for(int i=0;i<sz;i++)
	{

		if(values[i]>largest)
		{
			largest=values[i];
		}
	}
	return largest;
}

int sum(int values[],int sz)
{
	int total = 0;
	for (int i=0;i<sz;i++)
	{
		total+=values[i];
	}
	return total;
}	
