#include <iostream>
using namespace std;

double accountBalance = 1000.0, interest = 1.025;

int main(){
	for (int i = 1; i <= 10; i++){
		accountBalance*=interest;
		printf ("With interest rate of 2.5%, Your account balance at the end of Year %d will be : $%5.2f\n", i,accountBalance);
	}
}
