#pragma once
#include <string>
#include "degreetype.h"
#include "degree.h"

class Software : public Degree
{
public:
	Software();
	Software(
		string degreeID,
		string title,
		string author,
		double* prices,
		DegreeType degreeType
	);
	DegreeType getDegreeType();
	void setDegreeType(DegreeType b);
	void print();

	~Software();
};

