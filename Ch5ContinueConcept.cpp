#include <iostream>
#include <iomanip>
#include <cctype>
#include <limits>

int main()
{
  int cd{1}, sumOdd{0}, sumEven{0}, countEven {0}, count{15};

  do
  {

    if (!(cd%2)){
    	sumEven+=cd;
    	countEven ++;
    	continue; // If it's not printable...
    }
    sumOdd += cd;
  } while (++cd < count );
  std::cout<<"sum of odd is " <<sumOdd<<std::endl;
  std::cout<<"sum of even numbers is "<<sumEven<<std::endl;
  std::cout<<"Odd sum using squares is " << (count/2)*(count/2)<<std::endl;
  std::cout<<"Even sum using formula is " << (countEven +1) * countEven;
}
