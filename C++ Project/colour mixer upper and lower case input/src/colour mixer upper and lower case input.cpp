//============================================================================
// Name        : colour.cpp
// Author      : Jenil K Padshala
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<string>
using namespace std;

int main()
{
	string c1,c2,r="red",b="blue",y="yellow";
	cout << "Enter the name of any two primary colours:";
	cin>>c1>>c2;
	if(c1!=c2)
	{
		if((c1==r && c2==b) ||(c2==r && c1==b))
			cout<<"When you mix red and blue, you get purple.";
		else if((c1==r && c2==y) ||(c2==r && c1==y))
		cout<<"When you mix red and yellow, you get orange.";
		else if((c1==b && c2==y) ||(c2==b && c1==y))
					cout<<"When you mix yellow and blue, you get green.";
		else
			cout<<"Sorry, please enter some valid colour names.";
	}
	else
		cout<<"Both colours are same.";
	return 0;
}
