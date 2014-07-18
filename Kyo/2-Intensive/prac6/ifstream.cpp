#include <iostream>
#include <fstream>
using namespace std;

int main () {
  ifstream myfile;
  myfile.open ("example.txt");
  string input;
  while(!myfile.eof()){
   getline(myfile, input); 
   cout << input << endl;
  }
   myfile.close();
  return 0;
}