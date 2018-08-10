#include <iostream>
#include <iomanip>

int main()
{
	const size_t max {50}; //number of odds required
	long odds[max] {1L};   //array of odds
	size_t count {1};
	for(size_t i {0}; i<max ; i++,count+=2){
		odds[i] = count;
	}

	//Output array ten to a line using pointer
	const size_t tenToALine{10};

	for(size_t i {}; i< max; i++){
		std::cout<<std::setw(3)<<*(odds+i);
		if( (i+1) % tenToALine==0){
			std::cout<<std::endl;
		}
	}

	//output them in reverse order, using pointer notation.

	for(int i {max-1}; i>=0; i--){
			std::cout<<std::setw(3)<<*(odds+i);
			if( i % tenToALine==0){
				std::cout<<std::endl;
			}
		}
}
