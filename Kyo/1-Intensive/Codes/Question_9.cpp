#include <iostream>
using namespace std;

double Fahrenheit = 0.0;
int Celsius;

int main(){
	for (Celsius = 0; Celsius <= 100; Celsius+= 5){
		Fahrenheit = Celsius * 9 / 5 + 32;
		printf ("Celsius is %d and in Fahrenheit, it will be %3.2f\n", Celsius,Fahrenheit);
	}
}
