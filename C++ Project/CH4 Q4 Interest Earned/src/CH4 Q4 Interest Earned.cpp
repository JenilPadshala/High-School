//============================================================================
// Name        : CH4.cpp
// Author      : Jenil Padshala
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main() {
	double principal, rate, T, Interest, Amount;
	cout<<"Enter Interest Rate:";
	cin>>rate;
	cout<<"Enter Times compunded:";
	cin>>T;
	cout<<"Enter Principal amount:";
	cin>>principal;

	rate=rate/100;
	Amount=principal*pow((1+(rate/T)),T);
	Interest=Amount-principal;

	cout<<"\n Interest Report\n";
	cout<<"---------------------"<<endl;

	cout<<"Interest Rate:   "<<right<<setw(10)<<rate<<"%"<<endl;
	cout<<"Times compounded:"<<setw(10)<<T<<endl;
	cout<<setprecision(2)<<fixed;
	cout<<"Principal:       "<<left<<setw(10)<<principal<<endl;
	cout<<"Interest:        "<<setw(10)<<Interest<<endl;
	cout<<"Amount in saving:"<<setw(10)<<Amount<<endl;


	return 0;
}
