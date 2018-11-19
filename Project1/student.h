#pragma once
#include <string>
#include "degree.h"
using std::string;

class Student
{
protected:
	string studentID;
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	int* days;
	DegreeProgram type;

public:
	const static int dayArraySize = 3;
	Student();
	Student(string studentID, string firstName, string lastName, string emailAddress, int age, 
		int days[], DegreeProgram type);

	string getStudentID();
	string getFirstName();
	string getLastName();
	string getEmailAddress();
	int getAge();
	int* getDays();
	virtual DegreeProgram getStudentProgram() = 0;

	void setStudentID(string studentID);
	void setFirstName(string firstName);
	void setLastName(string lastName);
	void setEmailAddress(string emailAddress);
	void setAge(int age);
	void setDays(int days[]);
	virtual void setStudentProgram(DegreeProgram b) = 0;
	virtual void print() = 0;

	~Student();
};
