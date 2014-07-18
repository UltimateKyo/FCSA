#include<iostream>
#include<ctime>
using namespace std;

int genNumber,tries = 0, guess;
bool loop = true;

int main(){
	srand (time(NULL));
	genNumber = rand()%10+1;
	while(loop){
		tries++;
		cout<<"Please guess the number that the computer generated (1 to 10): ";
		cin>>guess;
		if (guess == genNumber){
		loop = false;
		printf("Congrats! You had guess it correctly after %d tries!\n",tries);
		}
		else if (guess > genNumber){
		printf("Sorry, after %d tries, you still guess it wrongly. Please guess something smaller\n",tries);
		}
		else if (guess < genNumber){
		printf("Sorry, after %d tries, you still guess it wrongly. Please guess something bigger\n",tries);
		}
	}
}
