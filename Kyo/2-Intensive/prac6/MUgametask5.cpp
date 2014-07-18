#include <iostream>
#include <string>
#include <fstream>
using namespace std;

//Task 1
bool isaMUString(char* sequence, int size); //Part (a)
bool canApplyRule1(char* sequence, int size); //Part (b)
bool canApplyRule2(char* sequence, int size); //Part (c)

//Task 3
char* applyRule1(char* sequence, int size); //Part (a)
char* applyRule2(char* sequence, int size); //Part (b)

int main() 
{
	//Task 2
	//Part (a)
	//Ask for user to input the size of the string they going to key in and also the string they will be using for the MU game.
	int sizeOfSequence = 0;
	cout << "Please enter the size of your input: ";
	cin >> sizeOfSequence; //Determine the size to allocate for the dynamic array
	cout << "Please enter the string to use for MU game: ";
	char* word = new char[sizeOfSequence]; //To allocate the declared size for the dynamic array
	cin >> word;
	cout << "Please choose from the following option: \n \t1. Apply Rule 1 \n \t2. Apply Rule 2 \n \t3. No rules to apply \n";
	cout << "Please enter your choice: ";
	int choice;
	cin >> choice;
	
	if (choice == 1) 
	{
	//Task 2 - Part (b)
	//To check if the string is a valid for MU.
		if(isaMUString(word, sizeOfSequence))
		{
			if (canApplyRule1(word, sizeOfSequence))
			{
				cout << "Choice 1 selected!\nBefore Rule 1 applied, the word is : " << word << endl;
				word = applyRule1(word, sizeOfSequence);
				cout << "After applying Rule 1, the Word is : " << word << endl;
			}
			else cout << "Sorry, as rule 1 cannot be applied due to unmet condition! Therefore the word remain as "<<word<<endl;
		}
	}
	
	else if (choice == 2) 
	{
		if(isaMUString(word, sizeOfSequence))
		{
			if (canApplyRule2(word, sizeOfSequence))
			{
				cout << "Choice 2 selected!\nBefore Rule 2 applied, the word is : " << word << endl;
				word = applyRule2(word, sizeOfSequence);
				cout << "After applying Rule 2, the Word is : " << word << endl;
			}
			else cout << "Sorry, as rule 2 cannot be applied due to unmet condition! Therefore the word remain as "<<word<<endl;
		}
	}		
	
	else if (choice == 3)
	{
		cout << "Choice 3 selected! \n No rule applied, therefore the word is now : " << word << endl;
	}
	
	else cout << "Invalid choice selected!"<< endl;
	
	//Task 2 - Part (b)
	delete[] word; //Deallocate memory that aren't required any more.

}

//Task 1 - Part (a)
//This function have the ability to determine whether the passed in string is an MUstring or not.
bool isaMUString(char* sequence, int size)
{
	int total = 0; //This is used to store the number of M, I, U stored in the string
	for (int i = 0; i < size; i++) //This loop will run through the entire string to check for M, I or U, if found, it will increase total by 1.
	{
		if (sequence[i] == 'M') total++;
		if (sequence[i] == 'I') total++;
		if (sequence[i] == 'U') total++;
	}

	if (total == size) return true; //If total is equal to size means that all the character are only M, U or I which means a valid MU string. 
	else return false; //When total isn't equal to size, it will means that there are some characters that doesn't belong to M, U or I.
}

//Task 1 - Part (b)
//This function have the ability to determine whether the passed in string is able to apply rule 1 which is only applicable if the last letter is equal to 'I'.
bool canApplyRule1(char* sequence, int size)
{
	int lastIndex = size - 1; //As the last array of the index is 1 value smaller than the size therefore variable lastIndex is declared as norm.
	if (sequence[lastIndex] == 'I') return true; 
	else return false;
}

//Task 1 - Part (c)
//This function have the ability to determine whether rule 2 is applicable.
bool canApplyRule2(char* sequence, int size)
{
	if (sequence[0] == 'M') return true; //First letter of the character is always situated at [0] index.
	else return false;
}

//Task 3 - Part (a)
//This function will apply the rule to the string passed in.
char* applyRule1(char* sequence, int size)
{
	if (canApplyRule1(sequence, size)) //As stated, this function will also have to check whether the rule can be applied or else return NULL
	{
		char* newSequence = sequence; //This is to declare a new dynamic array to store the previous array
		int newSize = size + 1; //Since we are going to add in a new char due to the rule, the size will increase by 1
		newSequence[newSize-1] = 'U'; 
		newSequence[newSize] = '\0'; //This is to put a end to the char array so that the print out will not have extra symbol
		return newSequence;
	}
	else return NULL;
}

char* applyRule2(char* sequence, int size)
{
	if (canApplyRule2(sequence, size))
	{
		int newSize = size + (size-1);
		char* newSequence = sequence;
		int loopForNewSequence = size;
		for (int i = 1; i < newSize; i ++)
		{
			newSequence[loopForNewSequence++] = sequence[i];
		}
		newSequence[newSize] = '\0';
		return newSequence;
	}
	else return NULL;
}