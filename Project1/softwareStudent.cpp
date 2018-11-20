#include <iostream>
#include "softwarestudent.h"
using std::cout;

SoftwareStudent::SoftwareStudent()
{
	setDegreeProgram(SOFTWARE);
}

SoftwareStudent::SoftwareStudent(string degreeID, string firstName, string lastName, string emailAddress, int * prices, DegreeProgram degreeProgram)
{
	setDegreeProgram(SOFTWARE);
}

DegreeProgram SoftwareStudent::getDegreeProgram()
{
	return SOFTWARE;
}

void SoftwareStudent::setDegreeProgram(DegreeProgram b)
{
	this->type = SOFTWARE;
}

void SoftwareStudent::print()
{
	this->Student::print();
	cout << "SOFTWARE" << "\n";
}

SoftwareStudent::~SoftwareStudent()
{
	Student::~Student();
	delete this;
}
