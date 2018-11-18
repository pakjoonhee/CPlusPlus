#pragma once
#include <string>
#include "degreetype.h"
#include "degree.h"

class Networking : public Degree
{
public:
	Networking();
	Networking(
		string degreeID,
		string title,
		string author,
		double* prices,
		DegreeType degreeType
	);
	DegreeType getDegreeType();
	void setDegreeType(DegreeType b);
	void print();

	~Networking();
};

