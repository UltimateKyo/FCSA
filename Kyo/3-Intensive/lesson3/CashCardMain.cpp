#include "CashCard.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	//Declaring new CashCard object c1
	CashCard c1 = new CashCard("c1",20.0);
	
	//Display the ID of the CashCard
	printf("Displaying Information of CashCard:\nCard ID: %s",(c1->getId()).c_str());
	
	//Changing ID of CashCard
	c1 -> setId("c10");
	
	//Display the ID of the CashCard
	printf("New Card ID: %s\nValue: %3.2f",(c1->getId()).c_str(),c1->getValue());

	//Topping up cashCard
	c1->topUp(50.50);

	//Display new value
	printf("After top up, New Value: %3.2f",c1->getValue());

	//Deduct Value
	if (c1->deduct(100))
	{
		printf("After deducting $100, new Value: %3.2f",c1->getValue());
	}
	else
		printf("The amount cannot be deducted, value remain as : %3.2f",c1->getValue());
}
