//
//  student.cpp
//  ClassRosterProject
//
//  Created by Landon Young on 8/7/24.
//
#include <iostream>
#include <string>
#include "student.h"
#include <stdio.h>
using namespace std;

Student::Student(){}
Student::Student(string studID, string fN, string lN, string email, int studAge, int days1, int days2, int days3, DegreeProgram prog) {
    SetID(studID);
    SetFirstName(fN);
    SetLastName(lN);
    SetEmail(email);
    SetAge(studAge);
    SetDays(days1, days2, days3);
    SetDegree(prog);
}
Student::~Student(){
};

string Student::GetID() {
    return studentID;
}
string Student::GetFirstName() {
    return firstName;
}
string Student::GetLastName() {
    return lastName;
}
string Student::GetEmail() {
    return emailAddress;
}
int Student::GetAge() {
    return age;
}
Student::DaysStruct Student::GetDays() {
    return daysToComplete;
}
DegreeProgram Student::GetDegree() {
    return degreeProgram;
}

//Setter Functions
void Student::SetID(string ID) {
    this->studentID = ID;
    return;
}

void Student::SetFirstName(string first) {
    this->firstName = first;
    return;
}

void Student::SetLastName(string last) {
    this->lastName = last;
    return;
}

void Student::SetEmail(string email) {
    this->emailAddress = email;
    return;
}

void Student::SetAge(int studentAge) {
    this->age = studentAge;
    return;
}

void Student::SetDays(int days1, int days2, int days3) {
    this->daysToComplete.day1 = days1;
    this->daysToComplete.day2 = days2;
    this->daysToComplete.day3 = days3;
    return;
}

void Student::SetDegree(DegreeProgram degProg) {
    this->degreeProgram = degProg;
    return;
}

void Student::Print() {
    
    cout << GetID();
    cout << "\t First Name: " << GetFirstName();
    cout << "\t Last Name: " << GetLastName();
    cout << "\t Age: " << GetAge();
    cout << "\t daysInCourse: {" << GetDays().day1 << ", " << GetDays().day2 << ", " << GetDays().day3 << "} ";
    if (GetDegree() == 0) {
        cout << " Degree Program: Security" << endl;
    } else if (GetDegree() == 1) {
        cout << " Degree Program: Network" << endl;
    } else {
        cout << " Degree Program: Software" << endl;
    };

}
