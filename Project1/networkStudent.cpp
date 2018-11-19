#include <iostream>
#include "networkStudent.h"
using std::cout;

NetworkStudent::NetworkStudent()
{
	setStudentProgram(NETWORKING);
}

NetworkStudent::NetworkStudent(string degreeID, string firstName, string lastName, string emailAddress, int * prices, DegreeProgram degreeProgram)
{
	setStudentProgram(NETWORKING);
}

DegreeProgram NetworkStudent::getStudentProgram()
{
	return NETWORKING;
}

void NetworkStudent::setStudentProgram(DegreeProgram b)
{
	this->type = NETWORKING;
}

void NetworkStudent::print()
{
	this->Student::print();
	cout << "NETWORKING" << "\n";
}

NetworkStudent::~NetworkStudent()
{
	Student::~Student();
	delete this;
}
