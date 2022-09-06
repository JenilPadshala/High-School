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
 double MIN, HOUR, DAY;
	int sec;

	cout<<"Enter any number of seconds.";
	cin>> sec ;

	if(sec>=60)
	{
		if(sec>=60 && sec<3600)
		{
			MIN=sec/60;
		    cout<<sec<<"seconds = "<<MIN<<" min.";
		}
		  else if(sec>=3600 && sec<86400)
		  {
			HOUR=sec/3600;
		    cout<<sec<<"seconds = "<<HOUR<<" hrs.";
		  }

		    else if(sec>=86400)
		    {
		    	DAY=sec/86400;
		        cout<<sec<<"seconds = "<<DAY<<" days.";
		    }
	}
	return 0;
}
