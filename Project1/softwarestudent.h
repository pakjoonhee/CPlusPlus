#pragma once
#include <string>
#include "degree.h"
#include "student.h"

class SoftwareStudent : public Student
{
public:
	SoftwareStudent();
	SoftwareStudent(
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

	~SoftwareStudent();
};

