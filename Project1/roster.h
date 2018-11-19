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
	"A5,Joonhee,Pak,pakjoonhee90@gmail.com,28,10,12,4,SOFTWARE"
};

class Repository {
public:
	int lastIndex;
	int capacity;
	Student** degrees;
	Repository();
	Repository(int capacity);
	void parseAdd(string datarow);
	void print_All();
	bool remove(string bookID);
	void printAverageDays(string studentID);
	void printInvalidDayEntries();
	void printByDegreeProgram(DegreeProgram b);
	~Repository();
};
