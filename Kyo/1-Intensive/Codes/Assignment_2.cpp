#include <iostream>
using namespace std;

int main(){

int number, total = 0, loop = 0;

	/*for (int i = 0; i <= 9; i++){
		cout<<"Enter number: "<<endl;
		cin>>number;
		total+=number;
	}
	*/
	while (loop <= 9)
	{
		cout<<"Enter number: "<<endl;
		cin>>number;
		total+=number;
		loop++;
	}
	cout<<"Total is : "<<total<<endl;
}
