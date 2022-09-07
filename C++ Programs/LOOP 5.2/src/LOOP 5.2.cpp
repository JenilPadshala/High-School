//============================================================================
// Name        : 2.cpp
// Author      : Jenil K. Padshala
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	int x;

	do
	{
		cout<<"(1)Y\n(2)y\n(3)N\n(4)n\nEnter your choice:";
		cin>>x;
	}while(x>4  || x<1);
	return 0;
}
