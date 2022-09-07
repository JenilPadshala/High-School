//============================================================================
// Name        : Ch3.cpp
// Author      : Jenil Padshala
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//==========================================================================
#include <iostream>
#include<iomanip>
using namespace std;

int main() {
	double USD, Euros, Rupees, rupeesPerDollar=64.00, eurosPerDollar=0.81;
	cout<<"Enter US Dollar:";
	cin>>USD;

	Rupees=rupeesPerDollar*USD;
	Euros=eurosPerDollar*USD;
	cout<<setprecision(2)<<fixed;

	cout<<"Dollars in Indian Rupees:"<<Rupees<<endl;
	cout<<"Dollars in Euros:"<<Euros;
	return 0;
}
