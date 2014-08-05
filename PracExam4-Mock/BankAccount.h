#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>
using namespace std;

class BankAccount
{
	private:
	string accHolderName;
	float accBalance;

	public:
	BankAccount();
	BankAccount(string,float);
	~BankAccount();
	string getAccHolderName();
	float getAccBalance();
	bool withdrawMoney(float);
	float depositMoney(float);


};

#endif
