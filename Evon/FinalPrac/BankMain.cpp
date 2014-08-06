#include <iostream>
#include <string>
#include "Bank.h"
using namespace std;

int main()
{

	BankAccount* b = new BankAccount("Account1",150.50);
//void addAccount(const BankAccount &newAccount);
	Bank *KyovonBank = new Bank("Kyovon Banking Pte Ltd");
	KyovonBank->addAccount(*b);



}
