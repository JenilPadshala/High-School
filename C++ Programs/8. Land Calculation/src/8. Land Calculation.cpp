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
	float OneAcre=43560;
	float sqFeetOfLand=391876;
	float AcresOfLand=sqFeetOfLand/OneAcre;
	cout << "Acres of land:" <<AcresOfLand<< endl; // prints acres of land
	return 0;
}
