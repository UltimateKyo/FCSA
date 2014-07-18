#include <iostream>
#include <string>
#include <fstream>
using namespace std;

bool isaMUString(char* sequence, int size);

bool canApplyRule1(char* sequence, int size);

bool canApplyRule2(char* sequence, int size);

char* applyRule1(char* sequence, int size);

char* applyRule2(char* sequence, int size);
/*
	* This function will load in all the 4 scenarios via the 4 text file. Run them through the 3 possible option
	* 1. Apply Rule 1
	* 2. Apply Rule 2
	* 3. Apply No rules
	*Then  print them on a new text file with the scenario<number>_path<number>.txt
*/
int main()
{
	//Creating all the files for all possible scenario and path
	string fileOutput[4][3];
	fileOutput[0][0] = "Scenario1_path1.txt";
	fileOutput[0][1] = "Scenario1_path2.txt";
	fileOutput[0][2] = "Scenario1_path3.txt.";
	fileOutput[1][0] = "Scenario2_path1.txt";
	fileOutput[1][1] = "Scenario2_path2.txt";
	fileOutput[1][2] = "Scenario2_path3.txt.";
	fileOutput[2][0] = "Scenario3_path1.txt";
	fileOutput[2][1] = "Scenario3_path2.txt";
	fileOutput[2][2] = "Scenario3_path3.txt.";
	fileOutput[3][0] = "Scenario4_path1.txt";
	fileOutput[3][1] = "Scenario4_path2.txt";
	fileOutput[3][2] = "Scenario4_path3.txt.";


	//Allocating files for reading.
	string fileInput[4];
	fileInput[0] = "Scenario1.txt";
	fileInput[1] = "Scenario2.txt";
	fileInput[2] = "Scenario3.txt.";
	fileInput[3] = "Scenario4.txt";

	//for loop to trigger all scenarios

	for (int i = 0; i < 4; i++)
	{
		ifstream fin;
		char* finput = new char[fileInput[i].length()];
		strncpy (finput, fileInput[i].c_str(),fileInput[i].length());
		fin.open(finput);
		string msg;
		int sizeOfSequence;
		fin >> msg;
		sizeOfSequence = msg.length();
		char* word = new char[msg.length()+1];
		cout << "=======================TESTING ON FILE INPUT " << i+1 << " =========================================" << endl;
		for (int x = 0; x < 3; x++)
		{
			ofstream fout;
			char* foutput = new char[fileOutput[i][x].length()];
			strncpy (foutput, fileOutput[i][x].c_str(),fileOutput[i][x].length());
			fout.open(foutput);
			msg.copy(word,msg.length());
			word[sizeOfSequence] = '\0';
			if (x == 0)
			{
				if (isaMUString(word,sizeOfSequence))
				{
					if (canApplyRule1(word, sizeOfSequence))
					{
						cout << "Executing test path 1 (Applying Rule 1)!\nBefore Rule 1 applied, the word is : " << word << endl;
						word = applyRule1(word, sizeOfSequence);
						cout << "After applying Rule 1, the Word is : " << word << "\n"<<endl;
					}
					else 
					{
						cout << "Sorry, as rule 1 cannot be applied due to unmet condition! Therefore the word remain as "<<word<<"\n"<<endl;
					}
					fout << word;
					fout.close();
				}
				else 
				{
					cout << "Sorry, as rule 1 cannot be applied due to unmet condition! Therefore the word remain as "<<word<<"\n"<<endl;
					fout << word;
					fout.close();
				}
				
			}
			else if (x == 1)
			{
				if (isaMUString(word,sizeOfSequence))
				{
					if (canApplyRule2(word, sizeOfSequence))
					{
						cout << "Executing test path 2 (Applying Rule 2)!\nBefore Rule 2 applied, the word is : " << word << endl;
						word = applyRule2(word, sizeOfSequence);
						cout << "After applying Rule 2, the Word is : " << word <<"\n"<< endl;

					}
					else
					{
						cout << "Sorry, as rule 2 cannot be applied due to unmet condition! Therefore the word remain as "<<word<<"\n"<<endl;
					}
					fout << word;
					fout.close();
				}
				else 
				{
					cout << "Sorry, as rule 1 cannot be applied due to unmet condition! Therefore the word remain as "<<word<<"\n"<<endl;
					fout << word;
					fout.close();
				}
			}
			else if (x == 2)
			{
				cout << "Executing test path 3 (Applying No Rules)! \nNo rule applied, therefore the word is now : " << word <<"\n"<< endl;
				fout << word;
				fout.close();
			}

			delete[] foutput;
		}
		fin.close();
		delete[] word,finput;
	}


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