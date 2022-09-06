//============================================================================
// Name        : Q3.cpp
// Author      : Jenil Padshala
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	float m, w;
	cout <<"Please enter an object's mass in kilograms:";
	cin>>m;
	w=m*9.8;
	if(w>1000)
		cout<<"The weight of the object is "<<w<<" N. It's too heavy!";
	else if(w<10)
		cout<<"The weight of the object is "<<w<<" N. It's too light!";
	else if(w>10 && w< 1000)
		cout<< "The weight of the object is "<<w<<" N.";
	return 0;
}
