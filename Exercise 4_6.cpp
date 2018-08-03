//============================================================================
// Name        : BeginningC++Book.cpp
// Author      : sophia
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
//Exercise 4-6. Write a program that determines, using only the conditional operator, if an
//integer that is entered has a value that is 20 or less, is greater than 20 but not greater
//than 30, is greater than 30 but not exceeding 100, or is greater than 100.

#include <iostream>

int main() {
	int a {};
	std::cout<<"Please enter an int";
	std::cin>>a;

	std::cout << (a<=20 ? "int value is 20 or lower":
			(a>20 && a<=30 ? "int value is between 20<= a <= 30":
			(a >30 && a <= 100 ? "int is between 30 and 100":
			(a<100 ? "int is greater than 100":"it is invalid int") )));

	//cleaner solution to make output a sentence
	/*
	std::cout << "The value is "
	    << (n <= 20 ? "not greater than 20"
		  : n <= 30 ? "greater than 20 and not greater than 30"
		  : n <= 100? "greater than 30 and not exceeding 100"
		  : "greater than 100")
	    << '.' << std::endl;
	*/
}
