#ifndef BANK_H
#define BANK_H

// ???????? include files ???????
#include <string>
#include <vector>
#include "BankAccount.h"
using namespace std;

class Bank {

 public:

  Bank(const std::string &name);

  void addAccount(const BankAccount &newAccount); // add a new account
  int getNumberOfAccounts(); // get number of accounts held in the bank
  float getTotalFunds(); // get the total funds held in the bank
  float getBalance(const std::string &name); // get the amount of funds in Bank Account of name
    
 private:

  //??? 
	string m_name; // name of this bank
  //??? 
	vector<BankAccount> m_accounts; // collection of Bank Accounts held at this bank
};

#endif
