//============================================================================
// Name        : Q1.cpp
// Author      : Jenil K. Padshala
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	char c;
	cout<<"This program will tell whether the character entered is an uppercase";
	cout<<" or a lowercase or a digit or any other character.\n";
	cout<<"Please enter any one character:";
	cin>> c;
	if(c<=122)
	{
		if(c>=48 && c<=57)
			cout<<"You have entered a digit.";
		else if (c>=65 && c<=90)
			cout <<"You have entered an uppercase letter.";
		else if (c>=97 && c<=122)
			cout <<"You have entered a lowercase letter.";
		else
			cout<<"You have entered some other character";
	}
	else if(c>122 && c<=255)
		cout<<"You have entered some other character";
	return 0;
}
