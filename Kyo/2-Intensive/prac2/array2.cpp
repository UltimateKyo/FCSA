#include<iostream>
using namespace std;

void reverse(int[],int);
void populateArray(int[],int);
const int SIZE = 20;
int values[SIZE];

//This function will ask for the array size, record down the values in each array slot and eventually print them out in reverse order.
int main()
{

	int sz = -1;
	while((sz<0) || (sz>20))
	{
		cout<<"Please only enter the size of array between 1 to 20: ";
		cin>>sz;
	}
	populateArray(values,sz);
	reverse(values,sz);
	cout <<"[";
	for (int i = 0; i < sz; i++)
	{
		cout<<values[i]<<" ";
	}
	cout <<"]"<<endl;
}

//This function is to allow user to key in information to the array
void populateArray(int values[],int sz)
{
	for (int i = 0; i < sz; i++)
	{
		cout<<"Enter a value: ";
		cin>>values[i];
	}
}

//This function will use a temp int to store the array[i] record then replaced the first array index storage with the last then 2nd with the last 2nd via the swapping method using the temp int
void reverse(int values[], int sz)
{
	int replaceIndex = sz - 1;
	int tempArrayStorage = 0;
	for (int i = 0; i <= sz; i++)
	{
		tempArrayStorage = values[i];
		if ((i == replaceIndex) || (i == (replaceIndex - 1))) //To check if the loop is overwritting array that are replaced previously
		{
			i = sz; //To stop the for loop
		}
		else
		{
			values[i] = values[replaceIndex];
			values[replaceIndex] = tempArrayStorage;
			replaceIndex--;
		}

	}

}
