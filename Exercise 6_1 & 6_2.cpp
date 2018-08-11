#include <iostream>
#include <iomanip>
//Exercise 6.1 & Exercise 6.2
//accessing the array values using the loop counter,
//this time you should employ pointer increments
//(using the++ operator) to traverse the array when outputting it for the first time.
//pointer decrements (using --) to traverse the array again in the reverse direction.

int main()
{
	const size_t max {50}; //number of odds required
	int odds[max] {1L};   //array of odds
	int *pOdds = odds;		//pointer to start of array
	int *pEnd = &odds[max-1]; //pointer to end of array
	size_t count {1};
	for(size_t i {0}; i<max ; i++,count+=2){
		odds[i] = count;
	}

	//Output array ten to a line using pointer
	const size_t tenToALine{10};
	for(size_t i {0}; i<max ; i++){
		std::cout<<std::setw(3)<<*pOdds++;
		if(! ((i+1) % tenToALine)){	//remove the equality check
			std::cout<<std::endl;
		}
	}

	//output array backwards
		for(size_t i {0}; i<max ; i++){
			std::cout<<std::setw(3)<<*pEnd--;
			if((i+1) % tenToALine==0){
				std::cout<<std::endl;
			}
		}

}
