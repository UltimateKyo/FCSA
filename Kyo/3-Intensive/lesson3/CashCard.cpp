#include "CashCard.h"
#include <string>
using namespace std;

CashCard::CashCard(string i, double v)
{
	id = i;
	value = v;
}

string CashCard::getId()
{
	return id;
}

void CashCard::setId(string i)
{
	id = i;
}

double CashCard::getValue()
{
	return value;
}

void CashCard::topUp(double v)
{
	value+=v;
	//return value;
}

bool CashCard::deduct(double v)
{
	if (value > v)
	{
		value-=v;
		return true;
	}
	else return false;
}

