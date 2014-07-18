#include <iostream> //Directive; include system library
using namespace std; //needed for cin, cout

void question_1(){
	double celsius,fahrenheit;
	cout<<"Please enter the Fahrenheit Temperature: ";
	cin>>fahrenheit;
	celsius =(fahrenheit-32)*5/9;
	cout<<"This is the temperature in Celsius after conversion: "<<celsius<<endl;
}

void question_2(){
	int one,two,three,total;
	double average;

	cout<<"Enter 1st number: ";
	cin>>one;
	cout<<"Enter 2nd number: ";
	cin>>two;
	cout<<"Enter 3rd number: ";
	cin>>three;
	total = one+two+three;
	cout<<"The sum is "<<total<<endl;
	average = total/3.0;
	cout<<"The average is "<<average<<endl;
	
}

void question_3_7(){
	double height,weight,bmi;
	bool loop1=true,loop2=true,weightloop=true;
	int a = 0;
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
		for (int i = 0; i <= 1; a++){
			cout<<"Please enter your height in metre(m): ";
			cin>>height;
			if (height>0){
				i = 2;
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

void question_4_5(){
	int number1,number2;
	cout<<"Please enter the 2 number:"<<endl;
	cin>>number1>>number2;
	if (number1==number2){
	cout<<"The 2 numbers are the same"<<endl;
	}
	else if (number1 > number2){
	cout<<"The first number is bigger"<<endl;
	}
	else if (number1 < number2){
	cout<<"The first number is smaller"<<endl;
	}
}

void question_6(){
	bool q6loop=true;
	int entered;
	while(q6loop){
		cout<<"Please enter a number to check if it's a even or odd number or press 0 to exit: ";
		cin>>entered;
		if (entered==0){
			q6loop=false;
		}
		else if (entered%2==0){
			cout<<"The number "<<entered<<" is a even number"<<endl;
		}
		else{
			cout<<"The number "<<entered<<" is a odd number"<<endl;	
		}
	
	}
}

void question_8(){
	double score;
	cout<<"Please enter your score to see your grade: ";
	cin>>score;

	if (score>100 || score<0){
	cout<<"Score entered is invalid"<<endl;
	}
	else {
		if (score<50){
		cout<<"Your grade is : F"<<endl;
		}
		else if (score<65){
		cout<<"Your grade is: P"<<endl;
		}
		else if (score<75){
		cout<<"Your grade is: C"<<endl;
		}
		else if (score<85){
		cout<<"your grade is: D"<<endl;
		}
		else if (score<=100){
		cout<<"Your grade is: HD"<<endl;
		}
	}
}


int main(){ //main function for C++
	bool menuloop=true;
	int option;
	while (menuloop){
		cout<<"Please select the following option: "<<endl;
		cout<<"0. Quit"<<endl;
		cout<<"1. Question 1"<<endl;
		cout<<"2. Question 2"<<endl;
		cout<<"3. Question 3 & 7"<<endl;
		cout<<"4. Question 4 & 5"<<endl;
		cout<<"5. Question 6"<<endl;
		cout<<"6. Question 8"<<endl;
		cout<<"Enter your option: ";
		cin>>option;
		if (option==0){
			menuloop=false;
		}
		else if (option==1){
			question_1();
		}
		else if (option==2){
			question_2();
		}
		else if (option==3){
			question_3_7();
		}
		else if (option==4){
			question_4_5();
		}
		else if (option==5){
			question_6();
		}
		else if (option==6){
			question_8();
		}
		else {
		cout<<"Your option is invalid!!"<<endl;
		}
	}	

}
