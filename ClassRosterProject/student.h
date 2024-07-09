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
    string studentID;
    string firstName;
    string lastName;
    string emailAddress;
    int age;
    int daysToComplete[3];
    DegreeProgram degreeProgram;

    
    
    public:
        Student();
        Student(string studentID, string firstName, string lastName, string emailAddress, int age, int day1, int day2, int day3, DegreeProgram degreeProgram
                );
        string GetID();
        string GetFirstName();
        string GetLastName();
        string GetEmail();
        int GetAge();
        int GetDays();
        enum DegreeProgram GetDegree();

        void SetID(string ID);
        void SetFirstName(string first);
        void SetLastName(string last);
        void SetEmail(string email);
        void SetAge(int studentAge);
        void SetDays(int days1, int days2, int days3);
        void SetDegree(DegreeProgram degProg);

        void Print() const;
    
};

#endif /* student_h */
