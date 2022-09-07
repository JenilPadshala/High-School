//============================================================================
// Name        : Q3.cpp
// Author      : Jenil Padshala
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	double a,b,c,x1,x2;

	cout << "Enter the value of a:" << endl;
	cin>>a;
	cout << "Enter the value of b:" << endl;
	cin>>b;
	cout << "Enter the value of c:" << endl;
	cin>>c;

	if(a==0 && b==0)
		cout<<"The equation has no solution.";
	else if(a==0)
		cout<<"The root of the equation is"<< -c/b;
	else if((b*b)-4*a*c < 0)
		cout<<"The equation has no solution.";
	else
	{
		x1=(((-b+sqrt(pow(b,2)-4*a*c))/2*a));
		x2=(-b/2*a)-((sqrt(pow(b,2)-4*a*c))/2*a);
		cout<<"The roots of the equation are "<<x1<<" and "<<x2;
	}
	return 0;
}
