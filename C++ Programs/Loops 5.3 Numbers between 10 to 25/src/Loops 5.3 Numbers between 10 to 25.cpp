//============================================================================
// Name        : 3.cpp
// Author      : Jenil Padshala
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int x;
	cout<<"Please enter a number in the range of 10 through 25 :";
	cin>>x;

	while(x>=25 || x<=10)
	{
		cout<<"Please enter a number in the range of 10 through 25 :";
			cin>>x;
	}
	cout<<"Thank you";
	return 0;
}
