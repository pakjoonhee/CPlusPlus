#include <iostream>
#include "networkStudent.h"
using std::cout;

NetworkStudent::NetworkStudent()
{
	setStudentProgram(NETWORK);
}

NetworkStudent::NetworkStudent(string degreeID, string firstName, string lastName, string emailAddress, int * prices, DegreeProgram degreeProgram)
{
	setStudentProgram(NETWORK);
}

DegreeProgram NetworkStudent::getStudentProgram()
{
	return NETWORK;
}

void NetworkStudent::setStudentProgram(DegreeProgram b)
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
