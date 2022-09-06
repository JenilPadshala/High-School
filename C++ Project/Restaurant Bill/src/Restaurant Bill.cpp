//============================================================================
// Name        : Restaurant.cpp
// Author      : Jenil Padshala
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
 {
	float foodBill = 10579;
	float gst      = 0.18;
	float taxAmount= foodBill*gst;
	float totalBill=foodBill+taxAmount;
	cout << "Food Bill:" <<foodBill <<endl; //amount of foodbill
	cout << "Tax Amount:"<<taxAmount <<endl;//amount of tax
	cout << "Total Bill:"<<totalBill <<endl;//amount of totalbill
	return 0;
}
