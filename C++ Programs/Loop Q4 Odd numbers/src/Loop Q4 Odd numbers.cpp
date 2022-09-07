//============================================================================
// Name        : Loop.cpp
// Author      : Jenil Padshala
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n, i=1;
	cout<<"Enter any natural number:";
	cin>>n;

	while(i<=n)
	{
	cout<<i<<"\t";
	i+=2;
	}
	return 0;
}
