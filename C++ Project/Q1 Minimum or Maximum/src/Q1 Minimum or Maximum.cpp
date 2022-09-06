//============================================================================
// Name        : Q1.cpp
// Author      : Jenil K Padshala
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	double num1, num2;
	cout << "Please enter a number:";
	cin>> num1;
	cout<< "Please enter one more number:";
	cin>> num2;
	if(num1/num2>1.0)
	{
		cout<<num1<<"is greater than"<<num2<<endl;
	}
	if(num1==num2)
	{
		cout <<num1<<" is equal to "<<num2<<endl;
	}
	else
	{
		cout<<num2<<" is greater than "<<num1<<endl;
	}
	return 0;
}
