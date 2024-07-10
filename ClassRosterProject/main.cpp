//
//  main.cpp
//  ClassRosterProject
//
//  Created by Landon Young on 8/7/24.
//
#include "roster.h"
#include "student.h"
#include "degree.h"
#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int i;
    
    cout << "Scripting and Programming - Applications - C867" << endl;
    cout << "Programming Language: C++" << endl;
    cout << "Student ID: 012213586" << endl;
    cout << "Name: Landon Young" << endl;

    const string studentData[] =
        {
            "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
            "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
            "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
            "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
            "A5,Landon,Young,lyou529@wgu.edu,29,15,28,81,SOFTWARE"
        };
    
    Roster classRoster;
    
    for (i = 0; i < 5; ++i) {
        classRoster.parse(studentData[i]);
    };
    
    classRoster.printAll(); //memory error
    
    
    return 0;
}
