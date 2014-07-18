#include <iostream>
#include <string>
using namespace std;

//Function which takes in 2 parameter, a 2D Array and a int respectively
void populateDatabase(string[][3], int, int);

//Function to print Array
void printDatabase(string[][3],int,int);

//a String function, named getScore
string getScore(string[][3],int,string);

int main() {
	const int ROWS = 15, COLS = 3;
	
	//Declare 2D Array
	string student_DB[ROWS][COLS];
	
	//call populateDatabase function
	populateDatabase(student_DB,ROWS,COLS);
	
	//call getScore function
	cout<<"\n----------------------------------"<<endl;
	string name;
	cout<<"Enter Student Name to get score: ";
	cin>>name;
	string score = getScore(student_DB,ROWS,name);
	cout<<"Score for "<< name << " is "<< score <<endl;
	
	//Print Student Array in readable format
	cout<<"\n----------------------------------"<<endl;
	printDatabase(student_DB,ROWS,COLS);

}

string getScore(string student[][3], int row, string name){

	string score = "";
	for (int r=0;r<row;r++) {
	
		//match user input with array records
		if (((student[r][0]).compare(name)) == 0) {
		
			//store value from array to variable if match
			score = student[r][2];
		
		}
	}
	
	return score;
}

void printDatabase(string student[][3], int row, int col){

	for (int r=0;r<row;r++) {

		for (int c=0; c<col; c++) {
		
			//Print Student Name from array column 1
			if (c==0) { 
				
				cout<<"Student "<<(r+1)<<" name: "<< student[r][c] <<endl;
			}
			
			//Print Student Age from array column 2
			if (c==1) { 
				
				cout<<"Age: "<< student[r][c] <<endl;
			}
			
			//Print Student Score from array column 3
			if (c==2) { 
				
				cout<<"Score: "<< student[r][c] <<endl;
			}
		
		}
		
	cout<<endl;
		
	} 
	
	
}

void populateDatabase(string student[][3], int row, int col) {
	for (int r=0;r<row;r++) {

		for (int c=0; c<col; c++) {
	
			//Store Student Name to array column 1
			if(c == 0) {
				
				cout<<"Enter Student "<<(r+1)<<"'s Name: ";
				cin>> student[r][c];
			}
			
			//Store Student Age to array column 2
			if (c == 1) {
			
				cout<<"Enter Age: ";
				cin>> student[r][c];
				
			}
			
			//Store Student Score to array column 3
			if (c == 2) {
			
				cout<<"Enter Score: ";
				cin>> student[r][c];
			}
		}
	}
}