#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Creating new datatype student_t
struct student_t
{
	string name;
	int age;
	int score;
};

//Size of the class
const int numofStudents = 15;

vector<student_t> student_DB;

void populateDatabase(vector<student_t> &);
void printDatabase(vector<student_t>);
int getScore(vector<student_t>,string);

//This function will request for student name then try to get the score of student by calling function getScore then call out printDatabase function to print all student information
int main()
{
	populateDatabase(student_DB);
	cout<< "Enter Student name to obtain the score: ";
	string s_name;
	cin>> s_name;
	int student_Score = getScore(student_DB,s_name);
	if (student_Score!=-1)
	{
		cout << "Student "<<s_name <<" obtain a score of "<<student_Score<<endl;
	}
	else
	{
		cout <<"No such student found!";
	}
	printDatabase(student_DB);

}


//This function is to allow user to key in the student details and store in vector
void populateDatabase(vector<student_t> & sDB)
{
	student_t temp;
	for (int i = 0; i < numofStudents; i ++)
	{
		cout<<"Enter student "<<i+1<<" name: ";
		cin>>temp.name;
		cout<<"Enter student "<<temp.name<<" age: ";
		cin>>temp.age;
		cout<<"Enter student "<<temp.name<<" score: ";
		cin>>temp.score;
		sDB.push_back(temp);
	}
}
//This function will print out all the ifnormation in the vector
void printDatabase(vector<student_t> sDB)
{
	for (int i = 0; i < sDB.size(); i++)
	{
		cout << "Student " <<i+1<<" Name: "<<sDB[i].name<<endl;
		cout <<"Student " << sDB[i].name<<" age: "<<sDB[i].age<<endl;
		cout <<"Student " << sDB[i].name << " score: "<<sDB[i].score<<endl;
	}
}

//This fucntion will compare the keyed name of the student and check if there's a record, if there's then return the score else return -1
int getScore(vector<student_t> sDB, string student_name)
{
	int score = -1;
	for (int i = 0; i < sDB.size() ; i ++)
	{
		if (((sDB[i].name).compare(student_name))==0)
		{
			score = sDB[i].score;
		}
	}
	return score;
}
