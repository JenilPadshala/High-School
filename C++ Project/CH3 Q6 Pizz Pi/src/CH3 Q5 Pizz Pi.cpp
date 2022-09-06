//============================================================================
// Name        : CH3.cpp
// Author      : Jenil Padshala
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<cmath>
#include <iomanip>
using namespace std;

int main() {
	const double PI=3.14159;
	double A, D, radius;
	cout<<"Enter the diameter of pizza in inches:";
	cin>>D;
	radius=D/2;
	A=PI*pow(radius,2);

	double SliceArea=14.125, NoOfSlice;

	NoOfSlice=A/SliceArea;
	cout<<"----------------------------"<<endl;
	cout<<"Number of slices:"<<NoOfSlice<<endl;
	return 0;
}
