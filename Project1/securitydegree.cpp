#include <iostream>
#include "securitystudent.h"
using std::cout;

SecurityStudent::SecurityStudent()
{
	setDegreeProgram(SECURITY);
}

SecurityStudent::SecurityStudent(string degreeID, string firstName, string lastName, string emailAddress, int * prices, DegreeType degreeType)
{
	setDegreeProgram(SECURITY);
}

DegreeType SecurityStudent::getDegreeProgram()
{
	return SECURITY;
}

void SecurityStudent::setDegreeProgram(DegreeType b)
{
	this->type = SECURITY;
}

void SecurityStudent::print()
{
	this->Degree::print();
	cout << "SECURITY" << "\n";
}

SecurityStudent::~SecurityStudent()
{
	Degree::~Degree();
	delete this;
}
