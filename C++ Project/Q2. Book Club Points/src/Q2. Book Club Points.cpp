//============================================================================
// Name        : .cpp
// Author      : Jenil K Padshala
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	int books;
	cout << "please enter the number of books you bought this month:";
	cin >> books;
	if(books==0)
	{
		cout<<"You get 0 points.\n";
	}
	else if(books==1)
		{
		cout<<"You get 5 points.\n";
		}
	else if(books==2)
	{
		cout<<"You get 15 points.\n";
	}
	else if(books==3)
		{
			cout<<"You get 30 points.\n";
		}
	else if(books==4)
		{
			cout<<"You get 60 points.\n";
		}
	return 0;
}
