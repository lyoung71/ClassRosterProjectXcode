//
//  roster.h
//  ClassRosterProject
//
//  Created by Landon Young on 8/7/24.
//
#include <iostream>
#include <string>
#include "degree.h"
#ifndef roster_h
#define roster_h
using namespace std;

class Roster {
    public:
    Roster();
    ~Roster();
    void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);
    void printAll();
};


#endif /* roster_h */
