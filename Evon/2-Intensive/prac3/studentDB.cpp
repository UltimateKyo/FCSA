#include <iostream>
#include <vector>
#include <string>
using namespace std;

const int DB_SIZE = 2;

//Struct is a function to create a new data type;
struct student_t {

	string name;
	double score;
	int age;	

};

void populateDatabase(vector<student_t> &);
void printDatabase(vector<student_t>);
double getScore(vector<student_t>,string); //based on selected student name

int main() {

	//declare vector
	//vector <DATA TYPE> VARIABLE;
	vector<student_t> student;

    //call populateDatabase function
	populateDatabase(student);
	
    cout<<"\n------------------------------------"<<endl;
    //prompt user for name to search
	string input;
	cout<<"Enter Student Name to search score :";
	cin>>input;
    
    //call getScore function
	double score = getScore(student,input);
	cout<<"Score for "<< input << ": "<< score <<endl;

    cout<<"\n------------------------------------"<<endl;
    //print all student records
	printDatabase(student);

	

}

//search for name in vector and return score when record in vector matched
//user input
double getScore(vector<student_t> s, string name){

	double score=0;
	
	for(int i=0;i<s.size();i++) {

		//if name input matches student name
		if (((s[i].name).compare(name)) == 0) {

            //return student score
			 score = s[i].score;
		}
	}
	
    return score;

}

//function to print all records from vector
void printDatabase(vector<student_t> s) {

	for (int i=0;i<s.size();i++) {

		cout<<"Name of Student "<<(i+1)<<": "<< s[i].name <<endl;
		cout<<"Score: "<< s[i].score <<endl;
		cout<<"Age: "<< s[i].age <<endl; 
		
	}
}

//function to prompt user for inputs and store to vector
void populateDatabase(vector<student_t> & s) {

	student_t temp;

	for (int i=0;i<DB_SIZE;i++) {

		cout<<"Enter Student "<< (i+1) << "'s Name: ";
		cin >> temp.name;

		cout<<"Enter Score: ";
		cin >> temp.score;

		cout<<"Enter Age: ";
		cin >> temp.age;

        //store temp into vector
		s.push_back(temp);
		
	
	}

}
