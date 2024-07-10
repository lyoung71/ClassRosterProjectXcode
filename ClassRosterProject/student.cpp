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
int Student::GetDays() {
    return daysToComplete[2];
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
    cout << studentID <<
    "\t First Name: " << firstName <<
    "\t Last Name: " << lastName <<
    "\t Age: " << age <<
    "\t daysInCourse: " << daysToComplete <<
    "\t Degree Program: " << degreeProgram << "\n";

}
