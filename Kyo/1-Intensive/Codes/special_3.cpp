#include <iostream>
using namespace std;

int sumTo(int);

int main(){
	cout<<"Enter a number to sum: "<<endl;
	int Num = 0;
	cin>>Num;
	printf("The number after adding in 1 to %d  will be : %d\n",Num,sumTo(Num));
}

int sumTo(int Number){
	int Total = 0;
	for (int i = 1; i <= Number; i++)
	{
		Total+= i;
	}
	return Total;
}


