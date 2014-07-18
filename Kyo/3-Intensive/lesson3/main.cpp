#include <iostream>
#include "student.h"

using namespace std;

int main()
{
	//Creating Student Object
	Student* s = new Student("Ken","Lim",30,95.0);
	//Student* t = new Student("Lara","Timberland",20,99);
	
	//Display first name of student
	cout << s->getFirstName() << endl;

	//Modify first name of student
	s->setFirstName("Kenny");
	

	//Display Last Name of Student
	cout << s->getLastName() << endl;

	//Modify Last Name of Student
	s->setLastName("Michael");
	
	//Display Age of Student
	cout << s-> getAge() << endl;

	//Modify Age of Student
	s->setAge(18);
	
	//Display Score of Student
	cout << s->getScore() << endl;

	//Modify Score of Student
	s -> setScore(99.5);


	//Display student
	printf("Displaying student modified details: \nFirst Name: %s\nLast Name: %s\nAge: %i\nScore: %3.2f\n",(s->getFirstName()).c_str(),(s->getLastName()).c_str(),s->getAge(),s->getScore());
	
	
	delete s;
}
