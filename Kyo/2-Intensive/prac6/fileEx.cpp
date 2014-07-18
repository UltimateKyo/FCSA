#include <iostream>
#include <fstream>
using namespace std;
// simple file input output stream
int main(){
    ifstream fin;  //file input stream
    ofstream fout; //file output stream
    fin.open("example.txt");
    fout.open("example.out");
    string msg;
    while (fin>>msg){//read until eof
      cout<<"read in "<<msg<<endl;
      cout<<"size of "<<msg<<" is "<<msg.length()<<endl;
      fout<<msg<<" ";
    }
    fin.close();
    fout.close();
}
