//============================================================================
// Name        : Q2.cpp
// Author      : Jenil K. Padshala
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{

	int num;
	float A, r,l,b,h,b1,b2;
	cout<<"This program can display the area of the shapes listed below:-\n";
	cout<<" 1. Circle\n 2. Rectangle\n 3. Triangle\n 4. Trapezium\n";
	cout<<"Please choose a shape by entering the respective number:";
	cin>> num;
	if(num>=1 && num<5)
	{
		if(num==1)
		{
			cout<<"Enter the radius of the circle:";
			cin>> r;
			A=3.14*r*r;
			cout<<"Area of the circle ="<<A<<"sq. m.";
		}

		else if(num==2)
		{
			cout<<"Enter the length and breadth of the rectangle:";
			cin>>l>>b;
			A=l*b;
			cout<<"Area of the rectangle ="<<A<<"sq. m.";
		}
		else if(num==3)
		{
			cout<<"Enter the base and height of the triangle:";
			cin>>b;
			cin>>h;
			A=0.5*b*h;
			cout<<"Area of the triangle ="<<A<<"sq. m.";
		}
		else
		{
			cout<<"Enter the bases of the trapezium:";
			cin>>b1;
			cin>>b2;
			cout<<"Enter the height of the trapezium:";
			cin>>h;
			A=0.5*(b1+b2)*h;
			cout<<"Area of the trapezium ="<<A<<"sq. m.";
		}
	}
	else
		cout<<"Please enter a valid respective number.";

	return 0;
}
