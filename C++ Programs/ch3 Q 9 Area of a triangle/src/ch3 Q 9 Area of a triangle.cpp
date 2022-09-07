//============================================================================
// Name        : ch3.cpp
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
	double area,s,a,b,c;

	cout << "Enter side1 of the triangle:";
	cin>>a;
	cout << "Enter side2 of the triangle:";
	cin>>b;
	cout << "Enter side3 of the triangle:";
	cin>>c;
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	cout<<"Area of the triangle:"<<area;
	return 0;
}
