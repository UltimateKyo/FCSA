#include "student.h"
#include <iostream>
using namespace std;
Student::Student(string fName, string lName, int a, double sc)
{
	firstName = fName;
	lastName = lName;
	age = a;
	score = sc;
}

string Student::getFirstName()
{
	return firstName;
}

void Student::setFirstName(string fName)
{
	firstName = fName;
}

string Student::getLastName()
{
	return lastName;
}

void Student::setLastName(string lName)
{
	lastName = lName;
}


int Student::getAge()
{
	return age;
}

void Student::setAge(int a)
{
	age = a;
}

double Student::getScore()
{
	return score;
}

void Student::setScore(double s)
{
	score = s;
}


