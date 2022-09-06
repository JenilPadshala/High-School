//============================================================================
// Name        : ch3.cpp
// Author      : Jenil K. Padshala
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
	double angle,x,y,z;
	cout <<"Enter Any angle:";
	cin>>angle;

	x=sin(angle);
	y=cos(angle);
	z=tan(angle);

	cout<<"sin of the angle:"<<setprecision(4)<<fixed<<x<<endl;
	cout<<"cos of the angle:"<<setprecision(4)<<fixed<<y<<endl;
	cout<<"tan of the angle:"<<setprecision(4)<<fixed<<z<<endl;

	return 0;
}
