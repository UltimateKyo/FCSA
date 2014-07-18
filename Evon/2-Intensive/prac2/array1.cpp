#include <iostream>
using namespace std;

void reverse(int[],int);

int main() {

	const int SIZE = 10;
	int values[SIZE];
	
	//prompt user for 10 inputs
	for (int i = 0; i<SIZE; i++) {
	
		cout<<"Enter number "<<(i+1)<<": ";
		cin>>values[i];
	}
	
	//call reverse function
	reverse(values,SIZE);
	
	//print out array of values 
	for (int i=0; i<SIZE;i++){
		cout<<values[i]<<" ";
	}

}

void reverse(int v[], int sz){
	
	for (int i=0;i<sz;i++) {
		
		//store 1st value into temp
		int temp = v[i];
		//swap 1st value with the last value
		v[i] = v[sz-1];
		v[sz-1] = temp;
		sz--;
				
	}

}
