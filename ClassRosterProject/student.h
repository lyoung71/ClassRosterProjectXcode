//
//  student.h
//  ClassRosterProject
//
//  Created by Landon Young on 8/7/24.
//
#include <iostream>
#include <string>
#include "degree.h"
#ifndef student_h
#define student_h
using namespace std;

class Student {
    

public:
    struct DaysStruct {int day1, day2, day3;};
    
    Student();
    Student(string studentID, string firstName, string lastName, string emailAddress, int age, int day1, int day2, int day3, DegreeProgram degreeProgram);
    ~Student();
    string GetID();
    string GetFirstName();
    string GetLastName();
    string GetEmail();
    int GetAge();
    DaysStruct GetDays();
    DegreeProgram GetDegree();

    void SetID(string ID);
    void SetFirstName(string first);
    void SetLastName(string last);
    void SetEmail(string email);
    void SetAge(int studentAge);
    void SetDays(int days1, int days2, int days3);
    void SetDegree(DegreeProgram degProg);
    void Print();
    
private:
    string studentID;
    string firstName;
    string lastName;
    string emailAddress;
    int age;
    DaysStruct daysToComplete;
    DegreeProgram degreeProgram;
    
};

#endif /* student_h */
