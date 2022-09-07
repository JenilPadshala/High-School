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
	double A,P,r,n,t;
	cout << "Enter the principal amount:";
	cin>>P;
	cout << "Enter the annual interest in decimal:";
	cin>>r;
	cout << "Enter the time compounded per year:";
	cin>>n;
	cout << "Enter the no. of years the money is invested for:";
	cin>>t;
	A=P*pow((1+(r/n)),n*t);
	cout<<"The compound interest of the amount:"<<A;
	return 0;
}
