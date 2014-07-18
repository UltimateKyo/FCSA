#include<iostream>
using namespace std;

//Declare fix numofStudents which is 15 as the array size.
const int numofStudents = 15;

//Declare populateDatabase function with the parameters String 2D Array and a int to store the size of the array
void populateDatabase(string[][3],int);

//Declare printDatabase function with the parameters String 2D Array and a int to store the size of the array
void printDatabase(string[][3],int);

//Declare getScore function with the parameters String 2D Array,int to store the size of the array and a string to store the name user are looking for.
string getScore(string[][3],int,string);

//This program will ask for 15 Sets of student information containing Name, Age and Score. Afterwhich allowing the user to key in the student they are looking for and print the score of the student. Lastly, to print the entire student database out in a readable manner.
int main()
{

	string StudentDB[numofStudents][3];


	populateDatabase(StudentDB,numofStudents);


	cout << "What is your name? ";
	string name;
	cin >> name;
	
	if (getScore(StudentDB,numofStudents,name)!="")
	{
		cout << "Your score is : " << getScore(StudentDB,numofStudents,name)<<endl;
	}
	else
		cout << "No such student found!"<<endl;


	printDatabase(StudentDB,numofStudents);
}

//This will ensure that the student information are recorded in the db
void populateDatabase(string sDB[][3],int sz)
{
	for(int i = 0;i<sz;i++)
	{
		for(int x = 0; x < 3;x++)
		{
			if (x == 0)
			{
				cout << "Please enter the name of Student "<<i+1<<" :";
				cin >> sDB[i][x];
			}
			if (x == 1)
			{
				cout << "Please enter the age of "<< sDB[i][0]<<" :";
				cin >> sDB[i][x];
			}		
			if (x == 2)
			{
				cout << "Please enter the score of "<< sDB[i][0]<<" :";
				cin >> sDB[i][x];
			}		
		}
	}
}

//This function will print out all the db records
void printDatabase(string sDB[][3],int sz)
{
	for(int i = 0;i<sz;i++)
	{
		for(int x = 0; x < 3;x++)
		{
			if (x == 0)
			{
				cout <<"Student "<<i+1<<" Name: " <<sDB[i][x]<<endl;
			}
			if (x == 1)
			{
				cout <<"Student "<<i+1<<" Age: " <<sDB[i][x]<<endl;
			}		
			if (x == 2)
			{
				cout <<"Student "<<i+1<<" Score: " <<sDB[i][x]<<endl;
			}		
		}
	}
}

//This function will provide the score for the particular name of the student.
string getScore(string sDB[][3],int sz,string name)
{
	string Score ="";
	for(int i = 0;i<sz;i++)
	{
		if ((sDB[i][0].compare(name))==0)
		{
			Score = sDB[i][2];
		}
	}
	return Score;
}
