#pragma once
#pragma once
#include <string>
#include "booktype.h"
#include "book.h"
class FictionBook : public Book //A FictionBook is a particular type of Book, so it inherits from Book class
{
	//NO INSTANCE FIELDS - ALL ARE INHERITED FROM Book
public:
	//CONSTRUCTORS WILL CALL SUPERCONSTRUCTOR FROM Book
	FictionBook();
	FictionBook(
		string BookID,
		string title,
		string author,
		double* prices,
		BookType booktype
	);
	//The following virtual methods from Book are overridden in this class; we CAN create a FictionBook object!
	BookType getBookType();
	void setBookType(BookType b);
	void print();

	//DESTRUCTOR WILL CALL SUPERDESTRUCTOR FROM BOOK
	~FictionBook();
};
