#pragma once
#include <string>
#include "degreetype.h"
#include "degree.h"

class Security : public Degree
{
public:
	Security();
	Security(
		string degreeID,
		string firstName,
		string lastName,
		string emailAddress,
		int* days,
		DegreeType degreeType
	);
	DegreeType getDegreeType();
	void setDegreeType(DegreeType b);
	void print();

	~Security();
};

