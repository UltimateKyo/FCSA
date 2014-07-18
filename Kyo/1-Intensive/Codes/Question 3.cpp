#include <iostream> //Directive; include system library
using namespace std; //needed for cin, cout

int main(){ //main function for C++
	double height,weight,bmi;
	bool loop1=true,loop2=true,weightloop=true,heightloop=true;
	char answer;
	while(loop1)
	{
		while(weightloop){
			cout<<"Please enter your weight in kilograms(kg): ";
			cin>>weight;
			if (weight>0){
				weightloop=false;
			}
			else{
				cout<<"Your weight cannot be less than or equal to 0kg"<<endl;
			}
		}
		while(heightloop){
			cout<<"Please enter your height in metre(m): ";
			cin>>height;
			if (height>0){
				heightloop=false;
			}
			else{
				cout<<"Your height cannot be less than or equal to 0m"<<endl;
			}
		}
		bmi=weight/(height*height);
		cout<<"Your BMI is: "<<bmi<<endl;

		while(loop2){
			cout<<"Do you want to do it again? (Y/N)";
			cin>>answer;
			if (answer=='N'||answer=='n'){
			loop1=false;
			loop2=false;
			cout<<"Thank you for using this idiot proof BMI calculator"<<endl;
			}
			else if(answer=='Y'||answer=='y'){
			loop2=false;
			}
			else{
			cout<<"You had entered an invalid response!!!"<<endl;
			}
		}
	}

}
