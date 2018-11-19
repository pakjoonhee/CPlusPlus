#include <iostream>
#include "roster.h"
#include "securitystudent.h"
#include "softwarestudent.h"
#include "networkstudent.h"
using std::cout;
using std::cerr;
using std::string;

Repository::Repository() {
	this->capacity = 0;
	this->lastIndex = -1;
	this->degrees = nullptr;
}

Repository::Repository(int capacity) {
	this->capacity = capacity;
	this->lastIndex = -1;
	this->degrees = new Student*[capacity];
}

void Repository::parseAdd(string row) {
	if (lastIndex < capacity) {
		lastIndex++;
		int darray[Student::dayArraySize];

		/*cout << studentData[lastIndex];
		cout << "\n";*/
		if (studentData[lastIndex].find("SOFTWARE") != string::npos)
		{
			this->degrees[lastIndex] = new SoftwareStudent();
			degrees[lastIndex]->setStudentProgram(SOFTWARE);
		}
		else if (studentData[lastIndex].find("NETWORK") != string::npos) 
		{
			this->degrees[lastIndex] = new NetworkStudent();
			degrees[lastIndex]->setStudentProgram(NETWORKING);
		}
		else if (studentData[lastIndex].find("SECURITY") != string::npos) 
		{
			this->degrees[lastIndex] = new SecurityStudent();
			degrees[lastIndex]->setStudentProgram(SECURITY);
		}
		else
		{
			cerr << "INVALID BOOK TYPE!  EXITING NOW!\n";
			exit(-1);
		}

		int rhs = studentData[lastIndex].find(",");
		degrees[lastIndex]->setStudentID(studentData[lastIndex].substr(0, rhs));

		int lhs = rhs + 1;
		rhs = studentData[lastIndex].find(",", lhs);
		degrees[lastIndex]->setFirstName(studentData[lastIndex].substr(lhs, rhs - lhs));

		lhs = rhs + 1;
		rhs = studentData[lastIndex].find(",", lhs);
		degrees[lastIndex]->setLastName(studentData[lastIndex].substr(lhs, rhs - lhs));

		lhs = rhs + 1;
		rhs = studentData[lastIndex].find(",", lhs);
		degrees[lastIndex]->setEmailAddress(studentData[lastIndex].substr(lhs, rhs - lhs));

		lhs = rhs + 1;
		rhs = studentData[lastIndex].find(",", lhs);
		degrees[lastIndex]->setAge(stoi(studentData[lastIndex].substr(lhs, rhs - lhs)));

		lhs = rhs + 1;
		rhs = studentData[lastIndex].find(",", lhs);
		darray[0] = stod(studentData[lastIndex].substr(lhs, rhs - lhs));

		lhs = rhs + 1;
		rhs = studentData[lastIndex].find(",", lhs);
		darray[1] = stod(studentData[lastIndex].substr(lhs, rhs - lhs));

		lhs = rhs + 1;
		rhs = studentData[lastIndex].find(",", lhs);
		darray[2] = stod(studentData[lastIndex].substr(lhs, rhs - lhs));

		degrees[lastIndex]->setDays(darray);
	}
	else
	{
		cerr << "ERROR! LIST HAS EXCEEDED MAXIMUM CAPACITY!\n EXITING NOW!";
		exit(-1);
	}
}

void Repository::print_All()
{
	for (int i = 0; i <= this->lastIndex; i++) {
		(this->degrees)[i]->print();
	}
}

int main() {
	Repository * rep = new Repository(numStudents);
	cout << "Displaying all degrees:\n";

	for (int i = 0; i < numStudents; i++) {
		rep->parseAdd(studentData[i]);
	}

	rep->print_All();


	system("pause");
	return 0;
}