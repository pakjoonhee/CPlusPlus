#include <iostream>
#include "softwarestudent.h"
using std::cout;

SoftwareStudent::SoftwareStudent()
{
	setDegreeProgram(SOFTWARE);
}

SoftwareStudent::SoftwareStudent(string degreeID, string firstName, string lastName, string emailAddress, int * prices, DegreeType degreeType)
{
	setDegreeProgram(SOFTWARE);
}

DegreeType SoftwareStudent::getDegreeProgram()
{
	return SOFTWARE;
}

void SoftwareStudent::setDegreeProgram(DegreeType b)
{
	this->type = SOFTWARE;
}

void SoftwareStudent::print()
{
	this->Degree::print();
	cout << "SOFTWARE" << "\n";
}

SoftwareStudent::~SoftwareStudent()
{
	Degree::~Degree();
	delete this;
}
