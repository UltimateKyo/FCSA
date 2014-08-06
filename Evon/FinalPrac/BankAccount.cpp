#include "BankAccount.h"
#include <iostream>
#include <string>
using namespace std;

//Default Constructor - assign default value to account
BankAccount::BankAccount()
{
	accHolder = ("Account");
	amt = 0;

}

//Overloaded Constructor
BankAccount::BankAccount(string ah,double a)
{
	accHolder = ah;
	amt = a;

}

string BankAccount::getAccHolder()
{
	return accHolder;

}
	 
bool BankAccount::withdrawal(double a)
{

	if (a <= amt)
	{
		amt -= a;
	    return true;
	}
	else
	{
		return false;
	}

}
	 
bool BankAccount::deposit(double a)
{
	if (a > 0)
	{
		amt += a;
		return true;
	}
	else
	{
		return false;
	}
}
	 
double BankAccount::getAccBalance(string ah)
{
	if (accHolder == ah)
	{
		return amt;
	}
	else
	{
		cout<<"Sorry. Account Name not found."<<endl;
	}
}
