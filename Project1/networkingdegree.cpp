#include <iostream>
#include "networking.h"
using std::cout;

Networking::Networking()
{
	setDegreeType(NETWORKING);
}

Networking::Networking(string degreeID, string firstName, string lastName, string emailAddress, int * prices, DegreeType degreeType)
{
	setDegreeType(NETWORKING);
}

DegreeType Networking::getDegreeType()
{
	return NETWORKING;
}

void Networking::setDegreeType(DegreeType b)
{
	this->type = NETWORKING;
}

void Networking::print()
{
	this->Degree::print();
	cout << "NETWORKING" << "\n";
}

Networking::~Networking()
{
	Degree::~Degree();
	delete this;
}
