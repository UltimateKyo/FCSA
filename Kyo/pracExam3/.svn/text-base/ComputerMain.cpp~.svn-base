#include "Computer.h"
#include <iostream>
#include <string>

using namespace std;
/* This main function will perform the following action
	- Create a computer object com1
	- Print out the attributes by using .getBrand() and .isDesktop
	- Create a computer object oldcom1 which uses a copy constructor
	- Modify com1 attribute using setBrand(string) & setIsDestkop(bool)
	- Print out oldcom1 and com1
*/
int main()
{

	Computer com1; //Creating a Computer object known as com1 using default constructor
	cout<<"Printing object Com1"<<endl;
	cout << "Brand of Com1 : " << com1.getBrand() << endl;
	if (com1.isDesktop())
	{
		cout <<"Com1 is a Desktop" << endl;
	}
	else
	{
		cout <<"Com1 is not a Desktop" << endl;
	}
	
	Computer oldcom1(com1); //Creating a computer object oldcom1 which copy the attributes of com1 using copy constructor
	cout <<"Modifying object Com1" << endl;
	com1.setBrand("ASUS"); //Changing Brand of com1 to "Asus"
	com1.setIsDesktop(false); //Changing com1 desktop = false;
	cout << "Previous Brand: " << oldcom1.getBrand() << endl; //Making use of oldcom1 object to get the previous brand of com1
	cout << "Current Brand: " << com1.getBrand() << endl; //Using com1 object to print out the modified brand
	cout << "Previously: " << endl;
	//Using oldcom1 to call out the previous com1 bool desktop = true or false
	if (oldcom1.isDesktop())
	{
		cout <<"Com1 is a Desktop" << endl;
	}
	else
	{
		cout <<"Com1 is not a Desktop" << endl;
	}
	cout << "Currently: " << endl;
	//Using com1 to call out com1 bool desktop
	if (com1.isDesktop())
	{
		cout <<"Com1 is a Desktop" << endl;
	}
	else
	{
		cout <<"Com1 is not a Desktop" << endl;
	}
	
}
