#include "Bank.h"
#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;

int main()
{
	Bank *Kyovon = new Bank("Kyovon Banking");
	BankAccount *Kyo = new BankAccount("Kyo",1960.50);
	BankAccount *Evon = new BankAccount("Evon",9990.88);
	Kyovon->addAccount(*Kyo);
	Kyovon->addAccount(*Evon);
	cout << "Kyo's Account Balance: " << Kyovon->getBalance("Kyo") << endl;
	printf("Kyovon Bank Total Funds: %3.2f\n",Kyovon->getTotalFunds());
	if(Kyo->withdrawMoney(500.35))
	{
		printf("Successfully deducted $500.35 from Kyo's Account! Account Balance now is: %3.2f\n", Kyovon->getBalance("Kyo"));
	}
	else
		cout << "Unable to withdraw $500.35 from Kyo's Account as the amount is greater than account Balance" << endl;

}
