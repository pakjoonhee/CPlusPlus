#include <iostream>
#include "software.h"
using std::cout;

Software::Software()
{
	setDegreeType(SOFTWARE);
}

Software::Software(string degreeID, string firstName, string lastName, string emailAddress, int * prices, DegreeType degreeType)
{
	setDegreeType(SOFTWARE);
}

DegreeType Software::getDegreeType()
{
	return SOFTWARE;
}

void Software::setDegreeType(DegreeType b)
{
	this->type = SOFTWARE;
}

void Software::print()
{
	this->Degree::print();
	cout << "SOFTWARE" << "\n";
}

Software::~Software()
{
	Degree::~Degree();
	delete this;
}
