#include <iostream>
#include "networkstudent.h"
using std::cout;

NetworkingStudent::NetworkingStudent()
{
	setDegreeProgram(NETWORKING);
}

NetworkingStudent::NetworkingStudent(string degreeID, string firstName, string lastName, string emailAddress, int * prices, DegreeType degreeType)
{
	setDegreeProgram(NETWORKING);
}

DegreeType NetworkingStudent::getDegreeProgram()
{
	return NETWORKING;
}

void NetworkingStudent::setDegreeProgram(DegreeType b)
{
	this->type = NETWORKING;
}

void NetworkingStudent::print()
{
	this->Degree::print();
	cout << "NETWORKING" << "\n";
}

NetworkingStudent::~NetworkingStudent()
{
	Degree::~Degree();
	delete this;
}
