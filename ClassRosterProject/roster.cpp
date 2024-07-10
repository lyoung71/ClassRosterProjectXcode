//
//  roster.cpp
//  ClassRosterProject
//
//  Created by Landon Young on 8/7/24.
//
#include <iostream>
#include "roster.h"
#include "student.h"
#include <stdio.h>

using namespace std;

Roster::Roster() {

};
Roster::~Roster(){};
void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram) {
    
    Student* studentPtr = new Student(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, degreeProgram);
    
};
void Roster::printAll() {
    int i;
    for (i = 0; i < 5; ++i) {
        classRosterArray[i]->Print();
    }
}
void Roster::parse(string input) {
    string studentID, firstName, lastName, emailAddress, currSentence, programString;
    int age, daysInCourse1, daysInCourse2, daysInCourse3;
    size_t pos, nextPos, strLength;
    DegreeProgram degreeProgram;

    currSentence = input;
    pos = currSentence.find(",");
    studentID = currSentence.substr(0, pos);
    cout << studentID << endl;
    cout << currSentence << endl;

    pos = pos + 1;
    nextPos = currSentence.find(",", pos);
    firstName = currSentence.substr(pos, (nextPos - pos));
    cout << firstName << endl;

    pos = nextPos + 1;
    nextPos = currSentence.find(",", pos);
    lastName = currSentence.substr(pos, (nextPos - pos));
    cout << lastName << endl;

    pos = nextPos + 1;
    nextPos = currSentence.find(",", pos);
    emailAddress = currSentence.substr(pos, (nextPos - pos));
    cout << emailAddress << endl;

    pos = nextPos + 1;
    nextPos = currSentence.find(",", pos);
    age = stoi(currSentence.substr(pos, (nextPos - pos)));
    cout << age << endl;

    pos = nextPos + 1;
    nextPos = currSentence.find(",", pos);
    daysInCourse1 = stoi(currSentence.substr(pos, (nextPos - pos)));
    cout << daysInCourse1 << endl;

    pos = nextPos + 1;
    nextPos = currSentence.find(",", pos);
    daysInCourse2 = stoi(currSentence.substr(pos, (nextPos - pos)));
    cout << daysInCourse2 << endl;

    pos = nextPos + 1;
    nextPos = currSentence.find(",", pos);
    daysInCourse3 = stoi(currSentence.substr(pos, (nextPos - pos)));
    cout << daysInCourse3 << endl;

    pos = nextPos + 1;
    strLength = currSentence.size();
    programString = currSentence.substr(pos, strLength);
    if (programString == "SOFTWARE") {
        degreeProgram = SOFTWARE;
    } else if (programString == "NETWORK") {
        degreeProgram = NETWORK;
    } else {
        degreeProgram = SECURITY;
    }

    cout << degreeProgram << endl;

    this->Roster::add(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, degreeProgram);
};
