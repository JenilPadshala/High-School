//============================================================================
// Name        : 3.cpp
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
		cout<<"Please Enter\n (1)Yes\n\t or\n(2)NO :";
		cin>>x;
	}while(x>2 || x<1);
	return 0;
}
