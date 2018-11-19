#pragma once
#include <string>
#include "degreetype.h"
#include "degree.h"

class NetworkingStudent : public Degree
{
public:
	NetworkingStudent();
	NetworkingStudent(
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

	~NetworkingStudent();
};

