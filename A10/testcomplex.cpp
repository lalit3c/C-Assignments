/*
CH-230-A
a10_p9.cpp
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
	float r , i, p, q;
	complex first; //create a complex using empty constructor

	cout << "Real part of first complex number : ";
	cin >> p;
	first.setReal(p);

	cout << "Imaginary part of first complex number : ";
	cin >> q;
	first.setImg(q);
	
	cout << "Real part of second complex number : ";
	cin >> r;

	cout << "Imaginary part of second complex number : ";
	cin >> i;

	complex second (r, i); //create a complex by passing parameters

	//calling the methods for respective computations
	complex first_con = first.conjugate();
	complex sum = second.add(first);
	complex difference = second.subtract(first);
	complex product = second.multiply(first);

	//printing the results
	cout << "Conjugate of first = "; first_con.print();
	cout << "Sum = "; sum.print();
	cout << "Difference = "; difference.print();
	cout << "Product = "; product.print();
	
	return 0;

}
