#include <iostream>
#include "softwarestudent.h"
using std::cout;

SoftwareStudent::SoftwareStudent()
{
	setStudentProgram(SOFTWARE);
}

SoftwareStudent::SoftwareStudent(string degreeID, string firstName, string lastName, string emailAddress, int * prices, DegreeProgram degreeProgram)
{
	setStudentProgram(SOFTWARE);
}

DegreeProgram SoftwareStudent::getStudentProgram()
{
	return SOFTWARE;
}

void SoftwareStudent::setStudentProgram(DegreeProgram b)
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
