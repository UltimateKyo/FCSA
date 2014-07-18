#include <iostream>
#include <string>
#include <fstream>
using namespace std;

bool isaMUString(char* sequence, int size);

bool canApplyRule1(char* sequence, int size);

bool canApplyRule2(char* sequence, int size);

char* applyRule1(char* sequence, int size);

char* applyRule2(char* sequence, int size);

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
		//cout << fin;
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
				if(isaMUString(word, sizeOfSequence))
				{
					if (canApplyRule1(word, sizeOfSequence))
					{
						cout << "Executing test path 1 (Applying Rule 1)!\nBefore Rule 1 applied, the word is : " << word << endl;
						word = applyRule1(word, sizeOfSequence);
						cout << "After applying Rule 1, the Word is : " << word << "\n"<<endl;
					}
					else cout << "Sorry, as rule 1 cannot be applied due to unmet condition! Therefore the word remain as "<<word<<"\n"<<endl;
					fout << word;

				}
			}
			else if (x == 1)
			{
				if(isaMUString(word, sizeOfSequence))
				{
					if (canApplyRule2(word, sizeOfSequence))
					{
						cout << "Executing test path 2 (Applying Rule 2)!\nBefore Rule 2 applied, the word is : " << word << endl;
						word = applyRule2(word, sizeOfSequence);
						cout << "After applying Rule 2, the Word is : " << word <<"\n"<< endl;

					}
					else cout << "Sorry, as rule 2 cannot be applied due to unmet condition! Therefore the word remain as "<<word<<"\n"<<endl;
					fout << word;
				}
			}
			else if (x == 2)
			{
				cout << "Executing test path 3 (Applying No Rules)! \nNo rule applied, therefore the word is now : " << word <<"\n"<< endl;
				fout << word;
			}
			fout.close();
		}
		fin.close();
		//delete[] word;
	}


}

bool isaMUString(char* sequence, int size)
{
	int total = 0;
	for (int i = 0; i < size; i++)
	{
		if (sequence[i] == 'M') total++;
		if (sequence[i] == 'I') total++;
		if (sequence[i] == 'U') total++;
	}

	if (total == size) return true;
	else return false;
}

bool canApplyRule1(char* sequence, int size)
{
	int lastIndex = size - 1;
	if (sequence[lastIndex] == 'I') return true;
	else return false;
}

bool canApplyRule2(char* sequence, int size)
{
	if (sequence[0] == 'M') return true;
	else return false;
}

char* applyRule1(char* sequence, int size)
{
	if (canApplyRule1(sequence, size))
	{
		char* newSequence = sequence;
		int newSize = size + 1;
		newSequence[newSize-1] = 'U';
		newSequence[newSize] = '\0';
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
