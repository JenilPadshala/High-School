//============================================================================
// Name        : FA.cpp
// Author      : Jenil K Padshala
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	float l,b,h,SA,V;
	cout << "Please enter the length of the room:";
	cin>>l;
	cout << "Please enter the breadth of the room:";
	cin>>b;
	cout << "Please enter the height of the room:";
	cin>>h;

	SA=2*((l*b)+(b*h)+(l*h));
	V=l*b*h;
	cout<<"The surface area of the room is "<<SA<<"square meter.\n";
	cout<<"The volume of the room is "<<V<<"cubic meter.";
	return 0;
}
