#ifndef BANK_H
#define BANK_H

// ???????? include files ???????

class Bank {

 public:

  Bank(const std::string &name);

  void addAccount(const BankAccount &newAccount); // add a new account
  int getNumberOfAccounts();  // get number of accounts held in the bank
  float getTotalFunds();     // get the total funds held in the bank
  float getBalance(const std::string &name);  // get the amount of funds in Bank Account of name
    
 private:

  ??? m_name;      // name of this bank
  ??? m_accounts;  // collection of Bank Accounts held at this bank
};

#endif
