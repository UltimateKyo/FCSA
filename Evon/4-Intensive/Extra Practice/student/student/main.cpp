//  main.cpp
//  student
//  Created by Evon on 18/7/14.
//  Copyright (c) 2014 Kyovon Production. All rights reserved.
/*
 Question :
 
 Create a Student database, using structs, with the following informations:

 Student
 -> Name
 -> Class
 -> Scores (total)
 -> Best subject
 -> Best Subject score
 
 Part 1
 -> getStudentDetails
 -> setStudentDetails
 -> print to txt file 1
 -> print only scholar of each class to txt file 2
 
 Part 2 (Advance)
 -> Read student details from txt file
 -> Modify student details & update to txt file
 -> Create text file for each subject to show the best scholar in that respective subject
*/

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

//creating new datatype, student_t, to store all information of a student
struct student_t
{
    
    string name,classNo;
    double totalScore;
    string bestSubject;
    double bestSubjectScore;
    
};
//Size of Class
const int CLASSSIZE = 2;

//creating a vector to store all information of all student(s)
vector<student_t> student_DB;

//declaring of functions required
    // set student details
    void setStudentDetails(vector<student_t> &);
    //print out student details
    void getStudentDetails();



int main()
{

    ofstream myfileout;
    myfileout.open("Student_Records.txt");
    
    setStudentDetails(student_DB);
    getStudentDetails();
    
    for (int i=0; i<student_DB.size(); i++)
    {
        myfileout <<"Student "<< (i+1) <<endl;
        myfileout << "Name  : "<< student_DB[i].name <<endl;
        myfileout << "Class : "<< student_DB[i].classNo <<endl;
        myfileout << "Total Score for all 3 Subjects : "<< student_DB[i].totalScore <<endl;
        myfileout << "Best Subject scored : "<< student_DB[i].bestSubject << " ";
        myfileout << "(Score: "<< student_DB[i].bestSubjectScore << " )" <<endl;
        
        myfileout <<"\n----------------------------\n";
    }
    
    myfileout.close();

}

void setStudentDetails(vector<student_t> & sDB)
{
    student_t temp;
    for (int i=0; i< CLASSSIZE; i ++)
    {
        cout << "Student "<< (i+1) <<endl;
        cout << "Name  : ";
        cin >> temp.name;
        cout << "Class : ";
        cin >> temp.classNo;
        cout << "Total Score for all 3 Subjects : ";
        cin >> temp.totalScore;
        cout << "Best Subject scored : ";
        cin >> temp.bestSubject;
        cout << "Best Subject's Score: ";
        cin >> temp.bestSubjectScore;
        
        sDB.push_back(temp);
        
        cout <<"\n----------------------------\n";
    }
}

void getStudentDetails()
{
    for (int i=0; i< student_DB.size(); i++)
    {
        
        cout << "Student "<< (i+1) <<endl;
        cout << "Name  : "<< student_DB[i].name <<endl;
        cout << "Class : "<< student_DB[i].classNo <<endl;
        cout << "Total Score for all 3 Subjects : "<< student_DB[i].totalScore <<endl;
        cout << "Best Subject scored : "<< student_DB[i].bestSubject << " ";
        cout << "(Score: "<< student_DB[i].bestSubjectScore << " )" <<endl;
        
        cout <<"\n----------------------------\n";
        
    }
    
    
}

