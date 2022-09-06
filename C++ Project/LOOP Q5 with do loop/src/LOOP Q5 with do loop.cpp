//============================================================================
// Name        : LOOP.cpp
// Author      : Jenil K. Padshala
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	int i=1, n;

	cout<<"Please enter any number:";
	cin>>n;
	do
	{
		cout<<n<<"X"<<i<<"="<<n*i<<"\n";
		i++;
	}while(i<=10 && i>=1);
	return 0;
}
