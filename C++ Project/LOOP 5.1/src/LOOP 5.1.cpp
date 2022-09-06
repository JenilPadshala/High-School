//============================================================================
// Name        : 1.cpp
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
		cout<<"Please enter a number in the range of 10 through25";
		cin>>x;
	}while(x>25 || x<10);
	return 0;
}
