//============================================================================
// Name        : Q2.cpp
// Author      : Jenil Padshala
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<string>
using namespace std;

int main()
		{
	string c1="red", c2="blue", c3="yellow";
	string color1 ,color2;
	cout<<"Enter the name of any one primary color:";
	getline(cin,color1);
	cout<<"Enter the name of one more primary color:";
	getline(cin,color2);
	if((color1==c1 && color2==c2 )II (color1==c2 && color2==c1))
	{
		cout<<"When you mix "<<c1<<" and "<<c2<<", you get purple.";
	}
	else if((color1==c1 && color2==c3) II (color1==c3 && color2==c1))
	{
		cout<<"When you mix "<<c1<<" and "<<c2<<", you get orange.";
	}
	else if((color1==c2 && color2==c3) II (color1==c3 && color2==c2))
	{
		cout<<"When you mix "<<c1<<" and "<<c2<<", you get green.";
	}

	return 0;
}
