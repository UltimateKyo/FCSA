#include "Computer.h"
#include <string>
#include <iostream>

using namespace std;

Computer::Computer() //Default Constructor which assign brand as Dell and is a desktop
{
	brand = "Dell";
	desktop = true;
}

Computer::Computer(Computer &com) //Obtaining attributes of "com" which is the object pass in then assign the attribute to the source object. Eventually making it a copy constructor
{
	brand = com.brand; //Change the current brand to the source brand literal value
	desktop = com.desktop; //Change the desktop to the source desktop literal value
} 

string Computer::getBrand()
{
	return brand; //Simply return the brand which is private
}

bool Computer::isDesktop()
{
	return desktop; //Simply return the desktop which is private
}

void Computer::setBrand(string b)
{
	brand = b; //Modifying the pirvate attribute brand to b
}

void Computer::setIsDesktop(bool d)
{
	desktop = d; //Modifying the private attribute desktop to d
}

