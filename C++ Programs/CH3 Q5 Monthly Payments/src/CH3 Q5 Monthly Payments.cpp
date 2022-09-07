//============================================================================
// Name        : CH3.cpp
// Author      : Jenil Padshala
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main() {
	double Payment, Rate, N,L, Interest,paid,Rate2;
	cout <<"Enter Loan Amount:";
	cin>>L;
	cout<<"Enter Monthly Interest Rate:";
	cin>>Rate;
	cout<<"Enter No. Of Payments:";
	cin>> N;
	Rate2=Rate/100;
	Payment=(Rate2*pow((1+Rate2),N))/(pow((1+Rate2),N)-1)*L;
	paid=Payment*N;
	cout<<"\n Monthly Payments Report\n";
	cout<<"----------------------------"<<endl;
	cout<<"Loan Amount:          "<<setprecision(2)<<fixed<<setw(8)<<L<<endl;//<<setw(8)<<setprecision(2)<<fixed<<L;
	cout<<"Monthly Interest Rate:"<<right<<setw(8)<<Rate<<"%"<<endl;//<<right<<setw(8)<<Rate<<"%";
	cout<<"No. Of Payments:      "<<left<<setw(8)<<N<<endl;//<<left<<setw(8)<<N;
	cout<<"Monthly Payment:      "<<right<<setprecision(2)<<fixed<<setw(8)<<Payment<<endl;//<<right<<setprecision(2)<<fixed<<setw(8)<<Payment;
	cout<<"Amount Paid Back:     "<<setprecision(2)<<fixed<<setw(8)<<paid<<endl;//<<setprecision(2)<<fixed<<setw(8)<<paid;
    Interest=paid-L;
    cout<<"Interest Paid:        "<<setprecision(2)<<fixed<<setw(8)<<Interest<<endl;
	return 0;
}
