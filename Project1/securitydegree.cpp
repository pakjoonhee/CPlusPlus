#include <iostream>
#include "security.h"
using std::cout;

Security::Security()
{
	setDegreeType(SECURITY);
}

Security::Security(string degreeID, string firstName, string lastName, string emailAddress, int * prices, DegreeType degreeType)
{
	setDegreeType(SECURITY);
}

DegreeType Security::getDegreeType()
{
	return SECURITY;
}

void Security::setDegreeType(DegreeType b)
{
	this->type = SECURITY;
}

void Security::print()
{
	this->Degree::print();
	cout << "SECURITY" << "\n";
}

Security::~Security()
{
	Degree::~Degree();
	delete this;
}
