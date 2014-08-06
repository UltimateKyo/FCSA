#ifndef BANNKACCOUNT_H
#define BANKACCOUNT_H
#include <string>
using namespace std;

class BankAccount
{

	private:
	 string accHolder;
	 double amt;

	public:
	 BankAccount();
	 BankAccount(string,double);
	 string getAccHolder();
	 bool withdrawal(double);
	 bool deposit(double);
	 double getAccBalance(string);


};

#endif
