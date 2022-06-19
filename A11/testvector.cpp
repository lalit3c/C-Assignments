/*
CH-230-A
a11_p7.cpp
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/
#include <iostream>
#include "Vector.h"
#include <cstdlib>
using namespace std;

int main()
{
	Vector v1; //create a default vector
	cout << "The components of vector v1 are: ";
	v1.print();

	double p[4] = {4, 5.5, 2, -2.5};
	Vector v2(4, p); //initialise vector v2

	cout << "The components of vector v2 are: ";
	v2.print();

	Vector v3(v2); //creates v3 as a copy of v2
	cout << "The components of vector v3 are: ";
	v3.print();

	//print the norm of vectors
	cout << "The norm of vector v1 is: " << v1.norm() << endl;
	cout << "The norm of vector v2 is: " << v2.norm() << endl;
	cout << "The norm of vector v3 is: " << v3.norm() << endl;

	//print the scalar product of vectors
	cout << "The scalar product of v1 and v3 is :" << v1.product(v3) << endl;

	//the sum of twp vectors
	cout << "The components of vector sum of v1 and v3 are: ";
	v1.add(v3).print();

	// the difference of two vectors
	cout << "The components of difference of vector v1 and v3 are: ";
	v1.subtract(v3).print();
	
	return 0;
}