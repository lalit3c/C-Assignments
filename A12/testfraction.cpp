/*
CH-230-A
a12_p7.cpp
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include <iostream>
#include "fraction.h"

using namespace std;

int main(void)
{
	Fraction a;
	cout << "Enter first fraction a: ";
	cin >> a;

	Fraction b;
	cout << "Enter second fraction b: ";
	cin >> b;

	if (!(a > b) && !(a < b)) 
	{
		cout << "Both fractions are equal" << endl;
	}
	else if (a > b)
	{
		cout << "Greater Fraction = "<< a << endl;
	}
	else
	{
		cout << "Greater Fraction = "<< b << endl;
	}
	
	Fraction sum = a + b; //overloaded = as well as +
	Fraction difference =  a -b;

	cout << "Sum = " << sum << endl;
	cout << "Difference = " << difference << endl;

	return 0;

}