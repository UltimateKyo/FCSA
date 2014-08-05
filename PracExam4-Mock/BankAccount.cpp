#include "BankAccount.h"
#include <iostream>
#include <string>

using namespace std;

BankAccount::BankAccount()
{
	accHolderName = "NA";
	accBalance = 0.0;
}

BankAccount::BankAccount(string name, float amt)
{
	accHolderName = name;
	accBalance = amt;
}

BankAccount::~BankAccount()
{

}

string BankAccount::getAccHolderName()
{
	return accHolderName;
}

float BankAccount::getAccBalance()
{
	return accBalance;
}

bool BankAccount::withdrawMoney(float amt)
{
	if (amt < accBalance)
	{
		accBalance -= amt;
		return true;
	}
	else
		return false;
}

float BankAccount::depositMoney(float amt)
{
	if (amt > 0)
	{
		accBalance += amt;
		return accBalance;
	}
	else
	{
		cout << "Unable to deposit amount lesser or equal to 0!" << endl;
		return accBalance;
	}
}
