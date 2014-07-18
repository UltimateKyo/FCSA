#include <iostream>
#include <vector>

using namespace std;

//Creating function to return a reverse array by taking in a vector as parameter
int* reverse(const vector<int>);


//Main function will request user to input the size of the vector and push the int from 0 to the size-1 that the user keyed in.
int main()
{
	int size;
	cout << "Please enter the number to determine the size: ";
	cin >> size;
	vector<int> initialVec;
	for (int i = 0; i < size; i ++)
	{
		initialVec.push_back(i);
	}
	int *revArr = new int [size];
	revArr = reverse(initialVec);
	for (int x = 0; x < size; x++)
	{
		cout << revArr[x] << endl;
	}
}
/*
 * A function which will take in the vector which consist of 0 to size-1 int. Then by looping through in a reverse way and store in them a array.
 * Eventually return the array which consist of all the reverse element of the vector.
 */
int* reverse(const vector<int> copyMe)
{
	int* revArray = new int[copyMe.size()];
	int lastIndex = copyMe.size();

	for (int i = 0; i < copyMe.size(); i++)
	{
		revArray[i] = copyMe[--lastIndex];
	}
	return revArray;
}
