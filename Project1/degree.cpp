#include<iostream>
#include<iomanip>
#include "degree.h"
using namespace std;

Degree::Degree()
{
	this->studentID = "";
	this->firstName = "";
	this->lastName = "";
	this->emailAddress = "";
	this->age = 0;
	this->days = new int[dayArraySize];
	for (int i = 0; i < dayArraySize; i++) this->days[i] = 0;
}

Degree::Degree(string ID, string firstName, string lastName, string emailAddress, int age, int days[], DegreeType type)
{
	this->studentID = ID;
	this->firstName = firstName;
	this->lastName = lastName;
	this->emailAddress = emailAddress;
	this->age = age;
	this->days = new int[dayArraySize];
	for (int i = 0; i < 3; i++) this->days[i] = days[i];
}

string Degree::getStudentID()
{
	return studentID;
}

string Degree::getFirstName()
{
	return firstName;
}

string Degree::getLastName()
{
	return lastName;
}

string Degree::getEmailAddress()
{
	return emailAddress;
}

int Degree::getAge()
{
	return age;
}

int * Degree::getDays()
{
	return days;
}

void Degree::setStudentID(string ID)
{
	studentID = ID;
}

void Degree::setFirstName(string firstName)
{
	this->firstName = firstName;
}

void Degree::setLastName(string lastName)
{
	this->lastName = lastName;
}

void Degree::setEmailAddress(string emailAddress)
{
	this->emailAddress = emailAddress;
}

void Degree::setDays(int days[])
{
	if (this->days != nullptr) {
		delete[] this->days;
		this->days = nullptr;
	}
	this->days = new int[dayArraySize];
	for (int i = 0; i < 3; i++)
		this->days[i] = days[i];
}

void Degree::print()
{
	cout << left << setw(5) << studentID;
	cout << left << setw(45) << firstName;
	cout << left << setw(20) << lastName;
	cout << left << setw(20) << emailAddress;
	cout << left << setw(10) << days[0];
	cout << left << setw(10) << days[1];
	cout << left << setw(10) << days[2];
}

Degree::~Degree()
{
	if (days != nullptr) {
		delete[] days;
		days = nullptr;
	}
}


