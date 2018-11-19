#include<iostream>
#include<iomanip>
#include "student.h"
using namespace std;

Student::Student()
{
	this->studentID = "";
	this->firstName = "";
	this->lastName = "";
	this->emailAddress = "";
	this->age = 0;
	this->days = new int[dayArraySize];
	for (int i = 0; i < dayArraySize; i++) this->days[i] = 0;
}

Student::Student(string ID, string firstName, string lastName, string emailAddress, int age, int days[], DegreeProgram type)
{
	this->studentID = ID;
	this->firstName = firstName;
	this->lastName = lastName;
	this->emailAddress = emailAddress;
	this->age = age;
	this->days = new int[dayArraySize];
	for (int i = 0; i < 3; i++) this->days[i] = days[i];
}

string Student::getStudentID()
{
	return studentID;
}

string Student::getFirstName()
{
	return firstName;
}

string Student::getLastName()
{
	return lastName;
}

string Student::getEmailAddress()
{
	return emailAddress;
}

int Student::getAge()
{
	return age;
}

int * Student::getDays()
{
	return days;
}

void Student::setStudentID(string ID)
{
	studentID = ID;
}

void Student::setFirstName(string firstName)
{
	this->firstName = firstName;
}

void Student::setLastName(string lastName)
{
	this->lastName = lastName;
}

void Student::setEmailAddress(string emailAddress)
{
	this->emailAddress = emailAddress;
}

void Student::setAge(int age)
{
	this->age = age;
}

void Student::setDays(int days[])
{
	if (this->days != nullptr) {
		delete[] this->days;
		this->days = nullptr;
	}
	this->days = new int[dayArraySize];
	for (int i = 0; i < 3; i++)
		this->days[i] = days[i];
}

void Student::print()
{
	cout << left << setw(5) << studentID;
	cout << left << setw(10) << firstName;
	cout << left << setw(10) << lastName;
	cout << left << setw(30) << emailAddress;
	cout << left << setw(10) << age;
	cout << left << setw(10) << days[0];
	cout << left << setw(10) << days[1];
	cout << left << setw(10) << days[2];
}

Student::~Student()
{
	if (days != nullptr) {
		delete[] days;
		days = nullptr;
	}
}


