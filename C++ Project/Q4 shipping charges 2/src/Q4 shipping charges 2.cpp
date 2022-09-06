//============================================================================
// Name        : Q4.cpp
// Author      : Jenil Padshala
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	float w, d, charge;
		cout<<"Enter the weight of the package in kilograms:";
		cin>>w;
		cout<<"Enter the distance it is to be shipped in kilometer:";
		cin>>d;
		if(w<=20 && w>0)
		{
			if(d>=10 && d<=3000)
			{
				if(w<=2)
				{
					charge=110*d/300;
							cout<<"The total charge is of Rs. "<<charge;
				}
				else if(w>2 && w<=6)
				{
					charge=220*d/300;
					cout<<"The total charge is of Rs. "<<charge;
				}
				else if (w>6 && w<=10)
				{
					charge=370*d/300;
					cout<<"The total charge is of Rs. "<<charge;

				}
				else if(w>10 && w<= 20)
				{
					charge=480*d/300;
					cout<<"The total charge is of Rs. "<<charge;
				}
				else
						cout<<"Please enter a distance between 10km to 3000km.";
			}
			else
				cout<<"Sorry. The weight of the package must be between 0 to 20kg.Please enter valid information.";
		}
	return 0;
}
