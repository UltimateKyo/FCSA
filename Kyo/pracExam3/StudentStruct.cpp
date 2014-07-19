#include <string>
#include <iostream>
using namespace std;

//struct name
struct name{
	string firstName;
	string secondName;
	string initials;
};

//struct student
struct student{
	name n;
	int age;
};

void genInitials(student & stu);

//Main function create a s student datatype with the firstname John and secondname Howard include the age of 21. Using that to generate the intial by using function genInitials(s) then print out the initial
int main(){
	int age = 21;
	student s= {{"John","Howard"},age};
	genInitials(s); //Calling function genInitials to get the initial of s
	cout << s.n.initials << endl; //Printing initial of s
}

void genInitials(student & stu)
{
	string n1, n2,initial;
	n1 = stu.n.firstName;
	n1 = n1.substr(0,1); //Determine the first letter of first name which start from position 0 and getting 1 letter which is 1. This will give J
	n2 = stu.n.secondName;
	n2 = n2.substr(0,1); //Determine the first letter of first name which start from position 0 and getting 1 letter which is 1. This will give H
	stu.n.initials = n1 + n2; //Adding 2 letters together and set it to the address block of s which change the intials of s to JH
}
