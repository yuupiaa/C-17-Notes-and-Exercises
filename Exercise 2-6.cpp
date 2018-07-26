//============================================================================
// Name        : Exercise2.6.cpp
// Author      : Sophia
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout<< " Please enter 2 positive non-zero integers (delimited by enter) \n";
	int x{}, y{};
	cin>>x;
	cin>>y;
	cout<<"part 1 " << x*(x/y) <<" if x < y , term truncates to 0." <<endl;
	cout<<"+ part 2" << y*(y/x) << " if y < x, term truncates to 0." <<endl;
	cout<<"original number, you need to divide by the multiple created in part 1 or 2" <<endl;
	cout<<"part 3" << (x/y) << "if x<y, truncates to 0, it add other term aka the multiple" <<y/x<<endl;
	int larger =  ( x*(x/y) + y*(y/x) ) / ((x/y)+(y/x) );
	cout<<larger<<endl;

	cout<<"part 1 "<< y*(x/y) << "if x<y, term truncates to 0."<<endl;
	cout<<"+ part 2 "<< x*(y/x) << "if y<x, term truncates to 0." <<endl;
	cout<<"get original number, you need to divide by the multiple "<<endl;
	int smaller = ( y*(x/y) + x*(y/x) ) / ( (x/y)+(y/x) ) ;
	cout<<smaller<<endl;
}
