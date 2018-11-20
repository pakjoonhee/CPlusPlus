#include <iostream>
#include "securitystudent.h"
using std::cout;

SecurityStudent::SecurityStudent()
{
	setDegreeProgram(SECURITY);
}

SecurityStudent::SecurityStudent(string degreeID, string firstName, string lastName, string emailAddress, int * prices, DegreeProgram degreeProgram)
{
	setDegreeProgram(SECURITY);
}

DegreeProgram SecurityStudent::getDegreeProgram()
{
	return SECURITY;
}

void SecurityStudent::setDegreeProgram(DegreeProgram b)
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
