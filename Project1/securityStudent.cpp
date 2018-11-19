#include <iostream>
#include "securitystudent.h"
using std::cout;

SecurityStudent::SecurityStudent()
{
	setStudentProgram(SECURITY);
}

SecurityStudent::SecurityStudent(string degreeID, string firstName, string lastName, string emailAddress, int * prices, DegreeProgram degreeProgram)
{
	setStudentProgram(SECURITY);
}

DegreeProgram SecurityStudent::getStudentProgram()
{
	return SECURITY;
}

void SecurityStudent::setStudentProgram(DegreeProgram b)
{
	this->type = SECURITY;
}

void SecurityStudent::print()
{
	this->Student::print();
	cout << "SECURITY" << "\n";
}

SecurityStudent::~SecurityStudent()
{
	Student::~Student();
	delete this;
}
