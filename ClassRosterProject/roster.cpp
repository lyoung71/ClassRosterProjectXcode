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

Roster::Roster(){};
Roster::~Roster(){
    for (int i = 0; i < 5; i++) {
        if (classRosterArray[i]->GetID() != "") {
            delete classRosterArray[i];
        }
    }
}

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram) {
    classRosterArray[counter++] = new Student(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, degreeProgram);
};

void Roster::remove(string studentID) {
    int i;
    bool found = false;
    for (i = 0; i < 5; i++) {
        if (classRosterArray[i] != nullptr)
            if (classRosterArray[i]->GetID() == studentID) {
                classRosterArray[i] = nullptr;
                found = true;
                break;
            }
    }
    
    if (found == false) {
        cout << "Student with ID " << studentID << " not found!" << endl;
    };
};

void Roster::printAll() {
    int i;
    for (i = 0; i < 5; i++) {
        if (classRosterArray[i] != nullptr)
            if (classRosterArray[i]->GetID() != "") {
                classRosterArray[i]->Print();
        }
    }
}

void Roster::printAverageDaysInCourse(string studentID) {
    int i;
    double average = 0;
    for (i = 0; i < 5; i++) {
        if (classRosterArray[i]->GetID() == studentID) {
            average = average + classRosterArray[i]->GetDays().day1;
            average = average + classRosterArray[i]->GetDays().day2;
            average = average + classRosterArray[i]->GetDays().day3;
            average = average / 3;
            cout << "Student " << studentID << " Average Days in Course: " << average << endl;
        }
    }
}

void Roster::printInvalidEmails() {
    int i;
    string currEmail;
    
    for (i = 0; i < 5; i++) {
        currEmail = classRosterArray[i]->GetEmail();
        if ((currEmail.find("@") == std::string::npos) || (currEmail.find(".") == std::string::npos) || (currEmail.find(" ") != std::string::npos)) {
            cout << "Invalid email: " << currEmail << endl;
        }
    }
};

void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {
    int i;
    if (degreeProgram == 0) {
        cout << "Degree Program: Security" << endl;
    } else if (degreeProgram == 1) {
        cout << "Degree Program: Network" << endl;
    } else {
        cout << "Degree Program: Software" << endl;
    };
    for (i = 0; i < 5; i++) {
        if (classRosterArray[i]->GetDegree() == degreeProgram) {
            classRosterArray[i]->Print();
        }
    }
};


void Roster::parse(string input, int index) {
    string studentID, firstName, lastName, emailAddress, currSentence, programString;
    int age, daysInCourse1, daysInCourse2, daysInCourse3;
    size_t pos, nextPos, strLength;
    DegreeProgram degreeProgram;

    currSentence = input;
    pos = currSentence.find(",");
    studentID = currSentence.substr(0, pos);

    pos = pos + 1;
    nextPos = currSentence.find(",", pos);
    firstName = currSentence.substr(pos, (nextPos - pos));

    pos = nextPos + 1;
    nextPos = currSentence.find(",", pos);
    lastName = currSentence.substr(pos, (nextPos - pos));

    pos = nextPos + 1;
    nextPos = currSentence.find(",", pos);
    emailAddress = currSentence.substr(pos, (nextPos - pos));

    pos = nextPos + 1;
    nextPos = currSentence.find(",", pos);
    age = stoi(currSentence.substr(pos, (nextPos - pos)));

    pos = nextPos + 1;
    nextPos = currSentence.find(",", pos);
    daysInCourse1 = stoi(currSentence.substr(pos, (nextPos - pos)));

    pos = nextPos + 1;
    nextPos = currSentence.find(",", pos);
    daysInCourse2 = stoi(currSentence.substr(pos, (nextPos - pos)));

    pos = nextPos + 1;
    nextPos = currSentence.find(",", pos);
    daysInCourse3 = stoi(currSentence.substr(pos, (nextPos - pos)));

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

    this->Roster::add(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, degreeProgram);
};

