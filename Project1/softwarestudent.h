#pragma once
#include <string>
#include "degreetype.h"
#include "degree.h"

class SoftwareStudent : public Degree
{
public:
	SoftwareStudent();
	SoftwareStudent(
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

	~SoftwareStudent();
};

