#include <iostream>
#include "roster.h"
#include "securitystudent.h"
#include "softwarestudent.h"
#include "networkstudent.h"
using std::cout;
using std::cerr;
using std::string;

Roster::Roster() {
	this->capacity = 0;
	this->index = -1;
	this->classRosterArray = nullptr;
}

Roster::Roster(int capacity) {
	this->capacity = capacity;
	this->index = -1;
	this->classRosterArray = new Student*[capacity];
}

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1,
	int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram)
{
	index++;
	int darray[Student::dayArraySize];

	if (degreeProgram == SOFTWARE)
	{
		this->classRosterArray[index] = new SoftwareStudent();
		classRosterArray[index]->setStudentProgram(SOFTWARE);
	}
	else if (degreeProgram == NETWORK)
	{
		this->classRosterArray[index] = new NetworkStudent();
		classRosterArray[index]->setStudentProgram(NETWORK);
	}
	else if (degreeProgram == SECURITY)
	{
		this->classRosterArray[index] = new SecurityStudent();
		classRosterArray[index]->setStudentProgram(SECURITY);
	}
	else
	{
		cerr << "INVALID DEGREE TYPE! WILL EXIT NOW!\n";
		exit(-1);
	}

	classRosterArray[index]->setStudentID(studentID);
	classRosterArray[index]->setFirstName(firstName);
	classRosterArray[index]->setLastName(lastName);
	classRosterArray[index]->setEmailAddress(emailAddress);
	classRosterArray[index]->setAge(age);
	darray[0] = daysInCourse1;
	darray[1] = daysInCourse2;
	darray[2] = daysInCourse3;
	classRosterArray[index]->setDays(darray);
}

void Roster::printInvalidEmails()
{
	cout << "Displaying invalid email entries:\n";
	for (int i = 0; i <= index; i++)
	{
		cout << "Student ID: " << classRosterArray[i]->getStudentID() << ": ";
		bool any = false;

		int found = classRosterArray[i]->getEmailAddress().find("@");

		if (classRosterArray[i]->getEmailAddress().find("@") == -1)
		{
			any = true;
			cout << "Error: No @ symbol found";
		}
		else if (classRosterArray[i]->getEmailAddress().find(".") == -1)
		{
			any = true;
			cout << "Error: No . symbol found";
		}
		else if (classRosterArray[i]->getEmailAddress().find(' ') != -1)
		{
			any = true;
			cout << "Error: Found a space";
		}

		if (!any) cout << "NONE";
		cout << "\n";
	}
}

void Roster::parseAdd(string row) {
	if (index < capacity) {
		index++;
		int darray[Student::dayArraySize];

		if (studentData[index].find("SOFTWARE") != string::npos)
		{
			this->classRosterArray[index] = new SoftwareStudent();
			classRosterArray[index]->setStudentProgram(SOFTWARE);
		}
		else if (studentData[index].find("NETWORK") != string::npos) 
		{
			this->classRosterArray[index] = new NetworkStudent();
			classRosterArray[index]->setStudentProgram(NETWORK);
		}
		else if (studentData[index].find("SECURITY") != string::npos) 
		{
			this->classRosterArray[index] = new SecurityStudent();
			classRosterArray[index]->setStudentProgram(SECURITY);
		}
		else
		{
			cerr << "INVALID DEGREE TYPE!  EXITING NOW!\n";
			exit(-1);
		}

		int rhs = studentData[index].find(",");
		classRosterArray[index]->setStudentID(studentData[index].substr(0, rhs));

		int lhs = rhs + 1;
		rhs = studentData[index].find(",", lhs);
		classRosterArray[index]->setFirstName(studentData[index].substr(lhs, rhs - lhs));

		lhs = rhs + 1;
		rhs = studentData[index].find(",", lhs);
		classRosterArray[index]->setLastName(studentData[index].substr(lhs, rhs - lhs));

		lhs = rhs + 1;
		rhs = studentData[index].find(",", lhs);
		classRosterArray[index]->setEmailAddress(studentData[index].substr(lhs, rhs - lhs));

		lhs = rhs + 1;
		rhs = studentData[index].find(",", lhs);
		classRosterArray[index]->setAge(stoi(studentData[index].substr(lhs, rhs - lhs)));

		lhs = rhs + 1;
		rhs = studentData[index].find(",", lhs);
		darray[0] = stod(studentData[index].substr(lhs, rhs - lhs));

		lhs = rhs + 1;
		rhs = studentData[index].find(",", lhs);
		darray[1] = stod(studentData[index].substr(lhs, rhs - lhs));

		lhs = rhs + 1;
		rhs = studentData[index].find(",", lhs);
		darray[2] = stod(studentData[index].substr(lhs, rhs - lhs));

		classRosterArray[index]->setDays(darray);
	}
	else
	{
		cerr << "ERROR! LIST HAS EXCEEDED MAXIMUM CAPACITY!\n EXITING NOW!";
		exit(-1);
	}
}

void Roster::printAll()
{
	for (int i = 0; i <= this->index; i++) {
		(this->classRosterArray)[i]->print();
	}
}

bool Roster::remove(string ID)
{
	bool found = false;
	for (int i = 0; i <= index; i++)
	{
		if (this->classRosterArray[i]->getStudentID() == ID) 
		{
			found = true;
			delete this->classRosterArray[i];
			this->classRosterArray[i] = this->classRosterArray[index];
			index--;
		}
	}
	return found;
}

void Roster::printAverageDaysInCourse(string studentID)
{
	bool found = false;
	for (int i = 0; i <= index; i++)
	{
		if (this->classRosterArray[i]->getStudentID() == studentID)
		{
			found = true;
			int* d = classRosterArray[i]->getDays();
			cout << "Average number of days for " << classRosterArray[i]->getFirstName() + " " + classRosterArray[i]->getLastName() << " is " << (d[0] + d[1] + d[2]) / 3 << "\n";
		}
	}
	if (!found) cout << "Student not found!\n";
}

void Roster::printByDegreeProgram(DegreeProgram d)
{
	cout << "Printing degree of type " << degreeProgramStrings[d] << "\n";
	for (int i = 0; i <= index; i++) {
		if (this->classRosterArray[i]->getStudentProgram() == d) this->classRosterArray[i]->print();
	}
}

int main() {
	Roster * rep = new Roster(numStudents);
	cout << "Displaying all Students:\n";

	for (int i = 0; i < numStudents; i++) {
		rep->parseAdd(studentData[i]);
	}
	//print_all
	rep->printAll();
	cout << "\n";

	//checking email validity
	rep->printInvalidEmails();
	cout << "\n";

	//average days
	rep->printAverageDaysInCourse("A1");
	cout << "\n";

	//print by degree program
	rep->printByDegreeProgram(SOFTWARE);
	cout << "\n";

	//remove student
	cout << "Removing A3:\n";
	if (rep->remove("A3")) rep->printAll();
	else cout << "Student not found!\n";
	cout << "\n";

	//remove student again
	cout << "Removing A3:\n";
	if (rep->remove("A3")) rep->printAll();
	else cout << "Student with this ID was not found!\n";
	cout << "\n";

	////add student
	//rep->add("A3", "Jack", "Napoli", "The_Lawyer99yahoo.com", 19, 20, 40, 33, SOFTWARE);

	////checking after adding
	//rep->printAll();
	//cout << "\n";


	system("pause");
	return 0;
}