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
	float customers=16500;
	float EnergyDrinks=0.15;
	float EnergyDrinkers=customers*EnergyDrinks;
	float OrangeDrink=0.58;
	float OrangeDrinkers=customers*OrangeDrink;
	cout << "Customers who purchase one or more energy drinks per week :" <<EnergyDrinkers<< endl; // prints number of energy drinkers
	cout << "Customers who prefer orange-flavoured energy drinks:" <<OrangeDrinkers<< endl; // prints number of orange energy drinkers
	return 0;
}
