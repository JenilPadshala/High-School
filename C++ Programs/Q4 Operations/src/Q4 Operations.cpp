//============================================================================
// Name        : Q4.cpp
// Author      : Jenil Padshala
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	double a,b,ans;
	char c;
	cout<<"Enter the operation you want to perform(+,-,*,/):";
	cin>>c;
	cout<<"Enter the two numbers:";
	cin>>a;
	cin>>b;

	if(c=='+')
	{
		ans=a+b;
		cout<<a<<"+"<<b<< " = "<<ans;
	}
	else if (c=='-')
	{
		ans=a-b;
		cout<<a<<"-"<<b<< " = "<<ans;
	}
	else if (c=='*')
	{
		ans=a*b;
		cout<<a<<"*"<<b<< " = "<<ans;
	}
	else if (c=='/')
	{
		ans=a/b;
		cout<<a<<"/"<<b<< " = "<<ans;
	}
	return 0;
}
