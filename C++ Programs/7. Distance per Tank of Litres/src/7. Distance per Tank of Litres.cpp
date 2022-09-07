//============================================================================
// Name        : .cpp
// Author      : Jenil Padshala
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	float litresOfPetrol=30;
	float average1=23.5;
	float average2=28.9;
	float DistanceInTown= litresOfPetrol*average1;
	float DistanceOnHighway=litresOfPetrol*average2;
	cout << "Distance in town:" <<DistanceInTown<< endl; // prints distance in town
	cout << "Distance on highway:" <<DistanceOnHighway<< endl; // prints distance on highway
	return 0;
}
