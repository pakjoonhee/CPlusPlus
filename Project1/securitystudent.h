#pragma once
#include <string>
#include "degreetype.h"
#include "degree.h"

class SecurityStudent : public Degree
{
public:
	SecurityStudent();
	SecurityStudent(
		string degreeID,
		string firstName,
		string lastName,
		string emailAddress,
		int* days,
		DegreeType degreeType
	);
	DegreeType getDegreeProgram();
	void setDegreeProgram(DegreeType b);
	void print();

	~SecurityStudent();
};

