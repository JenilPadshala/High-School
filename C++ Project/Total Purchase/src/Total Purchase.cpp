//============================================================================
// Name        : Total.cpp
// Author      : Jenil Padshala
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	float price1=150.50, price2=240.50,price3=60.40, price4=120.25, price5=399.20;
	float subtotal=price1+price2+price3+price4+price5;
	float gst=0.07;
	float amountOfGST=subtotal*gst;
	float totalCost=subtotal+amountOfGST;

	cout << "price of item 1= " <<price1<< endl; // prints price of item 1
	cout << "price of item 2= " <<price2<< endl; // prints price of item 2
	cout << "price of item 3= " <<price3<< endl; // prints price of item 3
	cout << "price of item 4= " <<price4<< endl; // prints price of item 4
	cout << "price of item 5= " <<price5<< endl; // prints price of item 5
	cout << "Subtotal of the sale= " <<subtotal<< endl; // prints subtotal
	cout << "Amount od GST= " <<amountOfGST<< endl; // prints amount of GST
	cout << "Total cost= " <<totalCost<< endl; // prints total cost
	return 0;
}
