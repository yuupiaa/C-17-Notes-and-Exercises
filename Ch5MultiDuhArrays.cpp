// Using a do-while loop to manage input
#include <iostream>
#include <locale>                                    // For tolower() function

int main()
{
	int week {2}, day{3}, sample{2}, test{3} ;

	//2D array
	int muhteeduh[day][week] {{0,1},{2,1},{4,5}};
	for(int i=0; i<day; i++){
			for(int j=0; j<week; j++){
				std::cout<<muhteeduh[i][j]<<" ";
			}
			std::cout<<std::endl;
	}


	int threeMarray[3][2][2] {
											{{0,1}, {2,3}},
											{{4,5}, {6,7}},
											{{8,9}, {10,11}}
							};

	int three9array[2][3][3] {
		{0 },
		{1 }

	};
	for(int i=0; i<2; i++){
			for(int j=0; j<3; j++){
				for(int z=0; z<3; z++)
				std::cout<<three9array[i][j][z]<<" ";
			}
			std::cout<<std::endl;
	}

	int three9arrayB[2][3][3] {
			{{0,1,2}, {3,4,5 }, {6,7,8} },
			{1 }

		};
		for(int i=0; i<2; i++){
				for(int j=0; j<3; j++){
					for(int z=0; z<3; z++)
					std::cout<<three9arrayB[i][j][z]<<" ";
				}
				std::cout<<std::endl;
		}
		//always sumproduct week2*day3*sample2*test3, 36 elements
		//first separation is sum/week , 36/2 =18 elements
		//2nd separation is 1separation/day, 18/3 = 6 elements
		//3rd separation is 2separation/sample, 6/2 =3 elements
	int fourDarray[week][day][sample][test] {
		{
			{
				{0,1,2},{3,4,5}
			},

			{{6,7,8},{9,10,11}},
			{12,13,14,15,16,17}
		},

		{16,17,18,19,110,111, 24,25,26,27,28,29,30,31,32,33,34,35}
	};

	for(int i=0; i<week; i++){
		for(int j=0; j<day; j++){
			for(int z=0; z<sample; z++)
				for(int y=0; y<test; y++)
			std::cout<<fourDarray[i][j][z][y]<<" ";
		}
		std::cout<<std::endl;
	}




}
