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
	int x=1, n;
	cout<<"Enter any natural number:";
	cin>>n;
	do
	{
		cout<<x<<"\t";
		x++;
	}while(x<=n &&x>0);
	return 0;
}
