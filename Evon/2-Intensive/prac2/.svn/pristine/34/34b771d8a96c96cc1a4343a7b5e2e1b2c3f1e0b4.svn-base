#include <iostream>
using namespace std;

void reverse(int[],int);

int main() {

	int size;
	//prompt user for number of times to enter value
	cout<<"Enter the number of values to store: ";
	cin>>size;
	
	//declare array
	int values[size];
	
	//prompt user no. of time for values to store
	//based on input array size by user
	for (int i = 0; i<size; i++) {
	
		cout<<"Enter number "<<(i+1)<<": ";
		cin>>values[i];
	}
	
	//call reverse function
	reverse(values,size);
	
	//print out array of values 
	for (int i=0; i<size;i++){
		cout<<values[i]<<" ";
	}

}

void reverse(int v[], int sz){
	
	for (int i=0;i<sz;i++) {
		
		//allow swapping only when array value[0] is less than value[9]
		//or array position is different; same position = no other position to swap 
		if ((v[i] < v[sz-1]) || (v[i] != v[sz-1])) {
		 
			//store 1st value into temp
			int temp = v[i];
			//swap 1st value with the last value
			v[i] = v[sz-1];
			v[sz-1] = temp;
			sz--;
		}
				
	}

}