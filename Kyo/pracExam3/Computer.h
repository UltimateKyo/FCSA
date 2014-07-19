#ifndef COMPUTER_H
#define COMPUTER_H

#include <string>

using namespace std;

class Computer
{
	private:
	//Making attribute as private so that it can only be called out using method or access using constructor
	string brand;
	bool desktop;

	public:
	Computer(); //Default Constructor
	Computer(Computer &); //Copy Constructor
	//Method
	string getBrand();
	bool isDesktop();
	void setBrand(string);
	void setIsDesktop(bool);
	
};

#endif
