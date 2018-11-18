#include <iostream>
#include "repository.h"
using std::cout;
using std::cerr;

Repository::Repository() {
	this->capacity = 0;
	this->lastIndex = -1;asdf
	this->degrees = nullptr;
}

Repository::Repository(int capacity) {
	this->capacity = capacity;
	this->lastIndex = -1;
	this->degrees = new Degree*[capacity];
}

void Repository::parseAdd(string row) {

}

int main() {
	cout << numBooks;
	cout << "\n";

	for (int i = 0; i < numBooks; i++) {
		cout << bookData[i];
		cout << "\n";
	}
	system("pause");
	return 0;
}