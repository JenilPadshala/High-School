//============================================================================
// Name        : Q1.cpp
// Author      : Jenil Padshala
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	float sec, min, hr, day;
	cout << "Enter the number of seconds:";
	cin>>sec;

	if(sec>=60 && sec<3600)
	{
		min=sec/60;
		cout<<sec <<" seconds are equal to "<<min<<"minutes.";
	}
	else if (sec>=3600 && sec<86400)
	{
		hr=sec/3600;
		cout<<sec <<" seconds are equal to "<<hr<<"hours.";
	}
	else if (sec>=86400)
	{
		day=sec/86400;
		cout<<sec <<" seconds are equal to "<<day<<"days.";
	}
	else
		cout<<"Sorry. Please enter mor than 60 or 60 seconds.";
	return 0;
}
