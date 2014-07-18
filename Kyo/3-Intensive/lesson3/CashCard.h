#ifndef CASHCARD.H
#define CASHCARD.H

#include<string>

using namespace std;

class CashCard
{
	private:
	string id;
	double value;

	public:
	CashCard(string,double);
	string getId();
	void setId(string);
	double getValue();
	void topUp(double);
	bool deduct(double);

};

#endif
