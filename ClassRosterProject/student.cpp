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
Student::~Student(){};

void Student::GetID() {
    cout << studentID;
}
void Student::GetFirstName() {
    cout << "\t First Name: " << firstName;
}
void Student::GetLastName() {
    cout << "\t Last Name: " << lastName;
}
string Student::GetEmail() {
    return emailAddress;
}
void Student::GetAge() {
    cout << "\t Age: " << age;
}
void Student::GetDays() {
    cout << "\t daysInCourse: {" << daysToComplete[0] << ", " << daysToComplete[1] << ", " << daysToComplete[2] << "}";
}
void Student::GetDegree() {
    if (degreeProgram == 0) {
        cout << " Degree Program: SECURITY" << endl;
    } else if (degreeProgram == 1) {
        cout << " Degree Program: NETWORK" << endl;
    } else {
        cout << " Degree Program: SOFTWARE" << endl;
    };
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
    this->daysToComplete[0] = days1;
    this->daysToComplete[1] = days2;
    this->daysToComplete[2] = days3;
    return;
}

void Student::SetDegree(DegreeProgram degProg) {
    this->degreeProgram = degProg;
    return;
}

void Student::Print() {
    
    GetID();
    GetFirstName();
    GetLastName();
    GetAge();
    GetDays();
    GetDegree();

}
