//============================================================================
// Name        : Q2.cpp
// Author      : Jenil Padshala
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	string c1, c2, r="red", b="blue", y="yellow";
	cout << "Enter the name of any one primary colours :";
	cin>>c1;
	cout << "Enter the name of any one primary colours :";
	cin >>c2;

	if(c1!=c2)
	{
		if((c1==r && c2==b) || (c1==b && c2==r))
			cout <<"when you mix red and blue, you get purple.";

		else if((c1==r && c2==y) || (c1==y && c2==r))
			cout <<"when you mix red and yellow, you get orange.";

		else if((c1==r && c2==y) || (c1==y && c2==r))
			cout <<"when you mix blue and yellow, you get green.";
		else
			cout<<"Sorry. Please enter some valid colour names.";

	}
	else
		cout<<"Both colours are same.";
	return 0;
}
