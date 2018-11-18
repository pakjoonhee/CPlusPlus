#pragma once
#include <string>
#include "degreetype.h"
using std::string;

class Degree
{
protected:
	string studentID;
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	int* days;
	DegreeType type;

public:
	const static int priceArraySize = 3;
	Degree();
	Degree(string studentID, string firstName, string lastName, string emailAddress, int age, 
		int days[], DegreeType type);

	string getStudentID();
	string getFirstName();
	string getLastName();
	string getEmailAddresses();
	int getAge();
	int* getDays();
	virtual DegreeType getDegreeType() = 0;

	void setStudentID(string studentID);
	void setFirstName(string firstName);
	void setLastName(string lastName);
	void setEmailAddresses(string emailAddress);
	void getAge(int age);
	void setDays(int days[]);
	virtual void setDegreeType(DegreeType b) = 0;
	virtual void print() = 0;

	~Degree();
};
