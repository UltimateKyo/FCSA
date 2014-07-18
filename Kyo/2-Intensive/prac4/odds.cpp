#include <iostream>
#include <vector>
using namespace std;

int* odds(vector<int> &vals, int& sz);

int main()
{
	vector<int> values;
	values.push_back(1);
	values.push_back(2);
	values.push_back(5);
	values.push_back(10);
	values.push_back(7);
	int length = 0;
	int* oddArrays = odds(values,length);
	for (int i = 0; i < length; i++)
	{
		cout<<oddArrays[i]<<endl;
	}
	delete [] oddArrays; //delete a dynamic array
}

int* odds(vector<int> &vals, int& sz)
{
	int count = 0;
	for(int i = 0; i< vals.size(); i++)
	{
		if(vals[i]%2 == 1)
		{
			count++;
		}
	}
	sz = count;
	int* oddValues = new int[count];
	int j = 0;
	for(int i = 0; i< vals.size(); i++)
	{
		if(vals[i]%2 == 1)
		{
			oddValues[j++]=vals[i];
		}
	}
	return oddValues;
}
