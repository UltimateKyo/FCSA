#include <iostream>
#include <vector>
using namespace std;

//int & sz contains the actual size of array
// int* = return array
int * odds(vector<int> vals, int & sz);

int main() {

	vector<int> num;
	num.push_back(1);
	num.push_back(4);
	num.push_back(8);
	num.push_back(5);
	num.push_back(24);
	num.push_back(13);

	int len=0;
	
	int* arr = odds(num,len);

	for (int i=0;i<len;i++) {

		cout<< arr[i] << " ";
	}
	
	cout<<endl;


	// in c++, pointer must all be deleted when program ends, eat memory space
	delete [] arr; //delete dynamic array
	//delete * = delete only 1 allocation

}

int* odds(vector<int> vals, int& sz) {

	int count=0;
	for (int i=0;i<vals.size();i++) {

		//count how many odds
		if (vals[i]%2 == 1) {
			count++; //how many odd
		}
	}
	sz=count;
	//populate array with only odd values
	//create dynamic version of array
	//static cannot be passed back, only dynamic can
	int * oddValues = new int[count];
	int j=0;

	for (int i=0;i<vals.size();i++) {
		if (vals[i]%2 == 1){
		oddValues[j++]= vals[i];
		 }
	}
	

	return oddValues;
}
