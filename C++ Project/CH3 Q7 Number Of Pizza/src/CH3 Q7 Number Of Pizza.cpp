//============================================================================
// Name        : CH3.cpp
// Author      : Jenil K. Padshala
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	const double PI=3.14159;
	double A, D, radius;

	cout<<"Enter the diameter of pizza in inches:";
	cin>>D;
	radius=D/2;
	A=PI*pow(radius,2);

	double SliceArea=14.125;
	int NoOfSlice;
	NoOfSlice=A/SliceArea;
	double people,avgSlice=4,noOfPizzas,SlicesRequired;

	cout<<"Enter no. of people in the party:";
	cin>>people;

	SlicesRequired=people*avgSlice;
	noOfPizzas=SlicesRequired/NoOfSlice;

	cout<<"Number of pizzas to be purchased:"<<noOfPizzas<<endl;
	return 0;
}
