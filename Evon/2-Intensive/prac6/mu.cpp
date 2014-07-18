#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

//Task 1(a) - 
bool isaMUString(char*, int );
//Task 1(b) -
bool canApplyRule1(char*, int);
//Task 1(c) -
bool canApplyRule2(char*, int);
//Task 3(a)
char *applyRule1(char*, int);
//Task 3(b)
char *applyRule2(char*, int);


int main() {

	int size = 0, choice = 0;
    
    ifstream myfileIn;
    myfileIn.open("case1.txt");
    
    ofstream myfileOut;
    myfileOut.open("case1result.txt");
    
    string characters;
    cout<< myfileIn<<endl;
    while (myfileIn >> characters) { //read until end of file
        
        size = characters.length();
        cout << size<<endl;
        // declare a array, with the size selected by user
        char* sequence = new char[size];
        
        //strcpy = string copy, c_str() = convert string
        //copy string(characters) into Array (sequence) by converting string to char
        strcpy(sequence, characters.c_str());
        myfileOut << sequence;
        
    }
    myfileIn.close();
    myfileOut.close();
}
    /*
	//prompt user to enter the size of their input sequence
	cout<<"Enter the Total number of characters to store: ";
	cin>>size;
	
	//based on user selected array size, prompt user for character(s) 
	//and store into array
	for (int i=0;i< size;i++) {
	
		cout<<"Enter Character "<<(i+1)<<" :";
		cin>>sequence[i];
	
	}
    */
	/*
	//prompt Error msg and end the program if user input consist of character
	//apart of 'M','U', and 'I'
	if (!(isaMUString(sequence,size))) {
	
		cout<<"ERROR! Character(s) input can only consist of 'M', 'U', and 'I'."<<endl;
		
		//if input only consist of 'M','U', and 'I', check for Rule(s) that can be applied
		if ((canApplyRule1(sequence,size)) && (canApplyRule2(sequence,size))) {
	
			cout<<"Both Rule 1 & 2 can be applied to the Character(s) entered!"<<endl;
            
            cout<<"Which Rule do you want to apply? "<<endl;
            cout<<"Choice 0: Apply NO Rules"<<endl;
            cout<<"Choice 1: Apply Rule 1"<<endl;
            cout<<"Choice 2: Apply Rule 2"<<endl;
            cout<<endl;
            cout<<"Enter your Choice: ";
            cin>>choice;
			
		}
		else if (canApplyRule1(sequence,size)) {
		
			cout<<"Only Rule 1 can be applied to the Character(s) entered!"<<endl;
            
            cout<<"Do you want to apply Rule?"<<endl;
            cout<<"Choice 0: Apply NO Rules"<<endl;
            cout<<"Choice 1: Apply Rule 1"<<endl;
            cout<<endl;
            cout<<"Enter your Choice: ";
            cin>>choice;
			
		}
		else if (canApplyRule2(sequence,size)) {
		
			cout<<"Only Rule 2 can be applied to the Character(s) entered!"<<endl;
            
            cout<<"Do you want to apply Rule?"<<endl;
            cout<<"Choice 0: Apply NO Rules"<<endl;
            cout<<"Choice 1: Apply Rule 2"<<endl;
            cout<<endl;
            cout<<"Enter your Choice: ";
            cin>>choice;
            
            if (choice == 1) {
                choice == 2;
            }
			
		}
		else {
		
			cout<<"Sorry. No Rule can be applied to the Character(s) entered!"<<endl;
            choice == 0;
		
		}
		
	}
    
    //Display new sequece base on user selection
    if (choice == 1) {
        
        cout<<"Character(s) entered: "<< sequence <<endl;
        applyRule1(sequence,size);
        cout<<"Character(s) AFTER applying Rule: "<< sequence <<endl;
    }
    else if (choice == 2) {
        
        cout<<"Character(s) entered: "<< sequence <<endl;
        applyRule2(sequence,size);
        cout<<"Character(s) AFTER applying Rule: "<< sequence <<endl;
        
    }
    else if (choice == 0) {
        
        cout<<"No Rule(s) was being applied. Good bye!"<<endl;
    }
    else {
     
        cout<<"Error! Invalid Choice!"<<endl;
    }
	
	//deallocate memory
	delete[] sequence;
}

//function which return true if sequence consist of only M, U, and I, else return false
bool isaMUString(char* sequence, int size) {

	int correct = 0;
	
	//loop Sequence to check to check for the times for "M","U","I" to appear
	// if appear, add 1 count to CORRECT
	for(int i=0;i<=size;i++) {
		
		if (sequence[i] == 'M' || sequence[i] == 'U' || sequence[i] == 'I') {
		
			correct ++;
		
		}
	}
	
	//if total count of "M","U","I" is the same as the size of array return true
	//else false
	if (correct == size) {
		
		return true;
		
	}
	else {
	
		return false;
	
	}

}

//function which return true if Rule 1 can be applied to Sequence, else false
bool canApplyRule1(char* sequence, int size) {

	//if last character in sequence is "I" return true, else false
	if (sequence[size-1] == 'I') {
		
		return true;
		
	}
	else {
	
		return false;
		
	}

}

//function which return true if Rule 2 can be applied to Sequence, else false
bool canApplyRule2(char* sequence, int size) {

	//if 1st char = 'M', subsequence then can be denoted by R
	//thus, if 1st char = 'M' return true, else false
	if (sequence[0] == 'M') {
	
		return true;
		
	}
	else {
	
		return false;
		
	}

}

//function that return a pointer to a new dynamic array after Rule 1 applied
//size of new dynamic array will be 1 more than the size passed in
char* applyRule1(char* sequence, int size) {
    
    if (canApplyRule1(sequence,size)) {
    
        char* newSequence = new char[size+1];
    
        //store existing array to new array
        for (int i=0;i<size;i++) {
        
            newSequence[i] = sequence[i];
        
        }
    
        //store 'U' to extra memory declared in new array
        newSequence[size] = 'U';
    
        return newSequence;
    }
    else {
        
        return NULL;
    }

}

//function that return a pointer to a new dynamic arrary after Rule 2 applied
//size of new dynamic array will be [size + (size -1)] = removed 1st char
char* applyRule2(char* sequence, int size) {
    
    if (canApplyRule2(sequence,size)) {
        
        int repeat = 1;
        
        char* newSequence = new char[size+(size-1)];
        
        //store existing array to new array
        for (int i=0;i<size;i++) {
            
            newSequence[i] = sequence[i];
            
        }
        
        //store 2nd character onwards in the extra memory declared
        for(int n=size;n<(size+(Size-1));n++) {
            
            newSequence[n] = sequence[repeat++];
        }
    
        return newSequence;
    }
    else {
    
        return NULL;
    }

}*/