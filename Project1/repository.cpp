#include <iostream>
#include "repository.h"
using std::cout;
using std::cerr;

Repository::Repository() {
	this->capacity = 0;
	this->lastIndex = -1;
	this->degrees = nullptr;
}

Repository::Repository(int capacity) {
	this->capacity = capacity;
	this->lastIndex = -1;
	this->degrees = new Degree*[capacity];
}

void Repository::parseAdd(string row) {
	if (lastIndex < capacity) {
		lastIndex++;
		double parray[Degree::priceArraySize];
		if (row[0] == 'F')
		{
			this->degrees[lastIndex] = new FictionBook();
			degrees[lastIndex]->setBookType(FICTION);
		}
		else if (row[0] == 'N') {
			this->degrees[lastIndex] = new NonfictionBook();
			degrees[lastIndex]->setBookType(NONFICTION);
		}
		else if (row[0] == 'N') {
			this->degrees[lastIndex] = new NonfictionBook();
			degrees[lastIndex]->setBookType(NONFICTION);
		}
		else
		{
			cerr << "INVALID BOOK TYPE!  EXITING NOW!\n";
			exit(-1);
		}

		int rhs = studentData[lastIndex].find(",");
		degrees[lastIndex]->setID(studentData[lastIndex].substr(0, rhs));

		int lhs = rhs + 1;
		rhs = studentData[lastIndex].find(",", lhs);
		degrees[lastIndex]->setTitle(studentData[lastIndex].substr(lhs, rhs - lhs));

		lhs = rhs + 1;
		rhs = studentData[lastIndex].find(",", lhs);
		degrees[lastIndex]->setAuthor(studentData[lastIndex].substr(lhs, rhs - lhs));

		
		lhs = rhs + 1;
		rhs = studentData[lastIndex].find(",", lhs);
		parray[0] = stod(studentData[lastIndex].substr(lhs, rhs - lhs));

		lhs = rhs + 1;
		rhs = studentData[lastIndex].find(",", lhs);
		parray[1] = stod(studentData[lastIndex].substr(lhs, rhs - lhs));

		lhs = rhs + 1;
		rhs = studentData[lastIndex].find(",", lhs);
		parray[2] = stod(studentData[lastIndex].substr(lhs, rhs - lhs));

		degrees[lastIndex]->setPrices(parray);
	}
	else
	{
		cerr << "ERROR! LIST HAS EXCEEDED MAXIMUM CAPACITY!\n EXITING NOW!";
		exit(-1);
	}
}

int main() {
	cout << numBooks;
	cout << "\n";

	for (int i = 0; i < numBooks; i++) {
		cout << studentData[i];
		cout << "\n";
	}
	system("pause");
	return 0;
}