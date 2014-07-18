#include <iostream>
using namespace std;

//Function Declaration
//declaring a 
void sort(int,int,int);


int main() {

	// Variable Declaration
	int num1, num2, num3;
	
	//Get user input
	cout<<"Enter First number : ";
	cin>>num1;
	cout<<"Enter Second number : ";
	cin>>num2;
	cout<<"Enter Third number : ";
	cin>>num3;
	
	//Call function to sort and print input
	sort(num1,num2,num3);

}


//Function Initialisation
void sort(int x, int y, int z){
	
	int first = 0, second = 0, third = 0;

	if (x>=y && x>=z) 
	{
		first += x;
		if (y>=z) 
		{		
			//cout<< x << " ," << y << " ," << z ;
			second += y;
			third += z;
		}
		else {
			//cout<< x << " ," << z << " ," << y ;
			second += z;
			third += y;
		}
		
	}

	else if (y>=x && y>=z) 
	{		
		first += y;
		if (x>=z) 
		{
			//cout<< y << " ," << x << " ," << y;
			second += x;
			third += z;
		}
		else {
			//cout<< y << " ," << z << " ," << x;
			second += z;
			third += x;
		}
	}

	else 
	{
		//first += z;
		if (x>=y) 
		{
			//cout<< z << " ," << x << " ," << y ;
			//cout<< z << " ," << x << " ," << y <<endl;
			second += x;
			third += y;
		}
		else 
		{			
			//cout<< z << " ," << y << " ," << x ;
			second += y;
			third += x;
		}
	}

	cout<< first <<" ,"<<second<<" ,"<< third <<endl;

}
