//============================================================================
// Name        : Q2.cpp
// Author      : Jenil Padshala
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	    double num1;
		double num2;
		double num3;
		double num4;
		double num5;
		cout << "Enter 1st number:" ;
		cin>>num1;
		cout << "Enter 2nd number:" ;
		cin>>num2;
		cout << "Enter 3rd number:" ;
		cin>>num3;
		cout << "Enter 4th number:" ;
		cin>>num4;
		cout << "Enter 5th number:" ;
		cin>>num5;
		double sum=num1+num2+num3+num4+num5;
		double average=sum/5;
		cout<<"Average:"<<average<<endl;
		return 0;
	}
