#include <iostream>
using namespace std;
int entered;
bool even(int);
int max(int, int);

void q11();
void q12();
void q13();

int main(){
	bool menuloop=true;
	int option;
	while (menuloop){
		cout<<"Please select the following option: "<<endl;
		cout<<"0. Quit"<<endl;
		cout<<"1. Question 11"<<endl;
		cout<<"2. Question 12"<<endl;
		cout<<"3. Question 13"<<endl;
		cout<<"Enter your option: ";
		cin>>option;
		if (option==0){
			menuloop=false;
		}
		else if (option==1){
			q11();
		}
		else if (option==2){
			q12();
		}
		else if (option==3){
			q13();
		}
		else {
		cout<<"Your option is invalid!!"<<endl;
		}
	}	
}

bool even(int Number){
	if (Number%2 == 0){
	printf("The number %d is a even number",Number);
	return true;
	}
	else{
	printf("The number %d is a odd number",Number);
	return false;
	}
}

int max(int num1, int num2){
	if (num1 > num2){
		return num1;
	}
	else if (num1 < num2){
		return num2;
	}
		
}

char getGrade(double grade){
	if (grade >= 75){
		return 'D';
	}
	else if (grade >= 50){
		return 'C';
	}
	else if (grade < 50){
		return 'F';
	}
}
void q11(){
	int entered;
	cout<<"Please enter a number to check if it's even or odd number: ";
	cin>>entered;
	even(entered);
}

void q12(){
	int entered1,entered2,entered3;
	cout<<"Please enter 3 number to check which is bigger: "<<endl;
	cin>>entered1>>entered2>>entered3;
	printf("The biggest number is %d",max(max(entered1,entered2),entered3));
	
}

void q13(){
	double score = 0.0;
	bool loop=true;
	while (loop){
		cout<<"Please enter your score to obtain the grade: "<<endl;
		cin>>score;
		if(score>= 0 && score <101){
			printf("Your grade is %c!\n",getGrade(score));
			loop = false;
		}
		else{
			cout<<"Invalid! Please only enter score between 0 to 100!"<<endl;
		}
		
	}
}
