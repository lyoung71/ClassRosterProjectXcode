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
    studentID = studID;
    firstName = fN;
    lastName = lN;
    emailAddress = email;
    age = studAge;
    daysToComplete[0] = days1;
    daysToComplete[1] = days2;
    daysToComplete[2] = days3;
    degreeProgram = prog;
}

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
    studentID = ID;
}

void Student::SetFirstName(string first) {
    firstName = first;
}

void Student::SetLastName(string last) {
    lastName = last;
}

void Student::SetEmail(string email) {
    emailAddress = email;
}

void Student::SetAge(int studentAge) {
    age = studentAge;
}

void Student::SetDays(int days1, int days2, int days3) {
    daysToComplete[0] = days1;
    daysToComplete[1] = days2;
    daysToComplete[2] = days3;

}

void Student::SetDegree(DegreeProgram degProg) {
    degreeProgram = degProg;
}

void Student::Print() const {
    cout << studentID <<
    "\t First Name: " << firstName <<
    "\t Last Name: " << lastName <<
    "\t Age: " << age <<
    "\t daysInCourse: " << daysToComplete <<
    "\t Degree Program: " << degreeProgram << "\n";

}
