#pragma once
#include <string>
#include "degree.h"
#include "student.h"

class SecurityStudent : public Student
{
public:
	SecurityStudent();
	SecurityStudent(
		string degreeID,
		string firstName,
		string lastName,
		string emailAddress,
		int* days,
		DegreeProgram degreeProgram
	);
	DegreeProgram getDegreeProgram();
	void setDegreeProgram(DegreeProgram b);
	void print();

	~SecurityStudent();
};

