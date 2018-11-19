#pragma once
#include <string>
#include <iostream>
#include "student.h"

using std::string;
const int numStudents = 5;
string studentData[numStudents] =
{
	"A1,John,Smith,John1989@gmail.com,20,30,35,40,SECURITY",
	"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
	"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
	"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
	"A5,Joonhee,Pak,pakjoonhee90 @gmail.com,28,10,12,4,SOFTWARE"
};

class Roster {
public:
	int index;
	int capacity;
	Student** classRosterArray;
	Roster();
	Roster(int capacity);
	void parseAdd(string datarow);
	void printAll();
	bool remove(string studentID);
	void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);
	void printAverageDaysInCourse(string studentID);
	void printInvalidEmails();
	void printByDegreeProgram(DegreeProgram b);
	~Roster();
};
