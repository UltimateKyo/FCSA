#ifndef STUDENT_H
#define STUDENT_H
#include <string>

using namespace std;

class Student
{
	private:
	string firstName,lastName;
	int age;
	double score;

	public:
	Student(string, string, int, double);
	string getFirstName();
	void setFirstName(string);
	string getLastName();
	void setLastName(string);
	int getAge();
	void setAge(int);
	double getScore();
	void setScore(double);
};

#endif
