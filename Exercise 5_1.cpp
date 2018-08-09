// Using a do-while loop to manage input
#include <iostream>
#include <vector>
#include <array>
//Exercise 5-1. Write a program that outputs the squares of the odd integers from 1 up to
//a limit that is entered by the user.

int main()
{
	std::cout<<"hello enter limit thanks" << std::endl;
	int limit {};
	std::cin>>limit;
	std::cout<<"The squares of the odd integers ";
	for (int i{1}; i<=limit; i+=2){
		std::cout << i * i << " ";
	}

	/*********************************
	********THIS IF ELSE is not needed   
	
	if(limit%2){
		std::cout<<"The squares of the odd integers ";
		for(int i{1}, temp {limit}; i<=temp; i+=2){
			std::cout << i * i << " ";

		}
	}
	else{
		std::cout<<"The squares of the odd integers ";
		for(int i{1}, temp {limit-1}; i<=temp; i+=2){
					std::cout << i * i << " ";
		}
	}
	*/
}
