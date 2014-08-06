#include "Bank.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

Bank::Bank(const std::string &name)
{
	m_name = name;
	cout<< m_name <<endl;
}


void Bank::addAccount(const BankAccount &newAccount)
{
	m_accounts.push_back(newAccount);
	cout<< m_accounts[0].getAccHolder() <<endl;
}
  
int Bank::getNumberOfAccounts()
{
	
}
  
float Bank::getTotalFunds()
{

}

float Bank::getBalance(const std::string &name)
{

}

