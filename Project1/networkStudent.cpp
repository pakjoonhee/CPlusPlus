#include <iostream>
#include "networkStudent.h"
using std::cout;

NetworkStudent::NetworkStudent()
{
	setDegreeProgram(NETWORK);
}

NetworkStudent::NetworkStudent(string degreeID, string firstName, string lastName, string emailAddress, int * prices, DegreeProgram degreeProgram)
{
	setDegreeProgram(NETWORK);
}

DegreeProgram NetworkStudent::getDegreeProgram()
{
	return NETWORK;
}

void NetworkStudent::setDegreeProgram(DegreeProgram b)
{
	this->type = NETWORK;
}

void NetworkStudent::print()
{
	this->Student::print();
	cout << "NETWORK" << "\n";
}

NetworkStudent::~NetworkStudent()
{
	Student::~Student();
	delete this;
}
