#include <iostream>
using namespace std;

int num1,biggest;

int main(){
	for(int i = 1; i <= 3; i++){
	printf("Please enter number (%d out of 3):",i);
	cin>>num1;
		if (i==1){
			biggest = num1;
		}
		else{
			if(biggest<num1)
			{
				biggest = num1;
			}
		}
	}
	printf("The biggest number is %d\n",biggest);
}
