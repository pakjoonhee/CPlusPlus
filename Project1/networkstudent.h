#pragma once
#include <string>
#include "degree.h"
#include "student.h"

class NetworkStudent : public Student
{
public:
	NetworkStudent();
	NetworkStudent(
		string degreeID,
		string firstName,
		string lastName,
		string emailAddress,
		int* days,
		DegreeProgram degreeProgram
	);
	DegreeProgram getStudentProgram();
	void setStudentProgram(DegreeProgram b);
	void print();

	~NetworkStudent();
};

