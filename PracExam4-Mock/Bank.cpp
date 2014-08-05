#include "Bank.h"
#include <iostream>
#include <string>
using namespace std;

Bank::Bank(const string &name)
{
	m_name = name;
}
  
void Bank::addAccount(const BankAccount &newAccount)
{
	m_accounts.push_back(newAccount);
}

int Bank::getNumberOfAccounts()
{
	return m_accounts.size();
}

float Bank::getTotalFunds()
{
	float total = 0;
	for (int i = 0; i < m_accounts.size(); i ++)
	{
		total += m_accounts[i].getAccBalance();
	}
	return total;
}

float Bank::getBalance(const string &name)
{
	for (int i = 0; i < m_accounts.size(); i ++)
	{
		if (m_accounts[i].getAccHolderName() == name)
		{
			return m_accounts[i].getAccBalance();
		}
	}
}
