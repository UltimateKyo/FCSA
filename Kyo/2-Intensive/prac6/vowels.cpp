#include <iostream>
#include <vector>
using namespace std;

bool containsVowel(char* txt, int sz);
char* getVowels(char* txt, int sz);
int main(){
    char* msg = new char[11];
    msg="hello world";
    if (containsVowel(msg,11))
	cout<<"vowel found"<<endl;
    else
        cout<<"no vowel"<<endl;
    char* txt = getVowels(msg,11);
    cout<<txt<<endl;
    delete [] txt,msg;
}
//accepts a sequence of char and an int size and
//returns a new array of char containing all the
//vowels in txt
char* getVowels(char* txt, int sz){
  int count=0;
  if (!containsVowel(txt,sz)) return NULL;
  for (int i=0;i<sz;i++){
    	if (txt[i] == 'a' ||
	    txt[i] == 'e' ||
	    txt[i] == 'i' ||
	    txt[i] == 'o' ||
	    txt[i] == 'u' )
	  count++;
  }
  //create a new array with length count
  char* tmp = new char[count];
  int j=0;
 for (int i=0;i<sz;i++){
    if (txt[i] == 'a' ||
	    txt[i] == 'e' ||
	    txt[i] == 'i' ||
	    txt[i] == 'o' ||
	    txt[i] == 'u' )
       tmp[j++]=txt[i];
 }
 return tmp;
}

//accepts a sequence of char and a int size and
//return true if txt has any vowel
bool containsVowel(char * txt, int size){
    for (int i=0;i<size;i++){
	if (txt[i] == 'a' ||
	    txt[i] == 'e' ||
	    txt[i] == 'i' ||
	    txt[i] == 'o' ||
	    txt[i] == 'u' )
 	   return true;
    }
    return false;
}
