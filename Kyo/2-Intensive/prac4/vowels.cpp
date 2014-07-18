#include <iostream>
#include <vector>
using namespace std;

bool containsVowel(char* txt, int sz);
char* getVowels(char* txt, int sz);
int main(){
	char* msg = new char[11];
	msg = "hello world";
	//char* vowels = getVowels(msg,11);
	if (containsVowel(msg,11))
	{
	cout << "Any Vowels: Yes" << endl;
	}
	else
	{
	cout << "Any Vowels: No" << endl;
	}
	int length = 11;
	if ((getVowels(msg,length)!=NULL))
	{
		char* vowel = getVowels(msg,length);
		cout << vowel << endl;
	}
	

}

bool containsVowel(char* txt, int size)
{
	for(int i = 0; i < size; i ++)
	{
		if(txt[i] == 'a' || txt[i] == 'e' || txt[i] == 'i' || txt[i] == 'o' || txt[i] == 'u')
		{
			return true;
		}
	}
	return false;
}

char* getVowels(char* txt, int sz)
{
	int count = 0;
	if (!containsVowel(txt,sz)) return NULL;
	for(int i = 0; i < sz; i ++)
	{
		if(txt[i] == 'a' || txt[i] == 'e' || txt[i] == 'i' || txt[i] == 'o' || txt[i] == 'u')
		{
			count++;
		}
	}
	char* vowelArray = new char[count];
	int x = 0;
	count = sz;
	for(int i = 0; i < count; i ++)
	{
		if(txt[i] == 'a' || txt[i] == 'e' || txt[i] == 'i' || txt[i] == 'o' || txt[i] == 'u')
		{
			vowelArray[x++] = txt[i];
		}
	}

	return vowelArray;
}
