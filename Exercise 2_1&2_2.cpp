//============================================================================
// Name        : C++ExerciseTests.cpp
// Author      : Sophia
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
//Exercise 2-1. Write a program that will compute the area of a circle. The program
//should prompt for the radius of the circle to be entered from the keyboard, calculate the
//area using the formula area = pi * radius * radius, and then display the result.

#include <iostream>
#include <iomanip>
using namespace std;
///std::setprecision
int main() {
	cout<<"Please enter radius of the circle."<<endl;
	double radius {};
	int precision {};
	cin>>radius;
	cout<<"Please enter number of precision." <<endl;
	cin>>precision;
	double pi = 3.141592653589793238;
	double area {pi * radius * radius};

	cout<<"The area of your circle with radius "<<radius<< " is "
			<< std::fixed<<std::setprecision(precision)<<area;
	return 0;
}
