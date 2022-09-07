//============================================================================
// Name        : LOOP.cpp
// Author      : Jenil K. Padshala
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int x=2, n;
	cout<<"Enter any natural number:";
	cin>>n;
	do
	{
		cout<<x<<"\t";
		x+=2;
	}while(x<=n &&x>0);
	return 0;
}
