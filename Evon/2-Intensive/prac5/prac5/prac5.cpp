#include <iostream>
#include <vector>
using namespace std;

int* reverse(const vector<int>);

int main() {

	//declare vector which takes in integers, named copyMe.
	vector<int> copyMe;
	
	//prompt user to input the size of vector
	int size = 0;
	cout<<"Enter the number of values you want to store: ";
	cin>>size;
	
	for (int i=0;i<size;i++) {
	
		copyMe.push_back(i);
	
	}

	//declare a new array to store the returned array
	int* reArray = new int [size];
	reArray = reverse(copyMe);
	
	//print out the result
	for (int i=0;i<size;i++) {
	
		cout<< reArray[i] << " ";
		
	}
	
	cout<<endl;
	
}

//a function that takes in a vector and returns an array
int* reverse(const vector<int> c) {

	//declare a new array
	int* reArray = new int [c.size()];
	int vecLastindex = c.size()-1;
	
	for (int a=0;a< c.size(); a++) {
	
		//reArray[0] = vector last index
		reArray[a] = c[vecLastindex--];
	
	}
	
	return reArray;
	
}