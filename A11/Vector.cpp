/*
CH-230-A
a11_p7.cpp
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include <iostream>
#include "Vector.h"
#include <cmath>

using namespace std;

Vector::Vector()		//default constructor
{
	size = 4;
	components = new double[4]; 
	int i;
	for(i = 0; i < 4; i++)
	{
		components[i] = 1;	//creates a vector (1, 1, 1, 1)
	}
} 

Vector::Vector(int n, double* p) //parametric constructor
{
	size = n;
	p = new double [n];
	components = p;
}

Vector::Vector (const Vector& v) //copy constructor
{
	double *p = new double[v.size];
	p = v.components;
	size = v.size;
	components = p;
}

Vector::~Vector()	//destructor
{
	//cout << "Destructing vector..." << endl;
}

void Vector::print() const //prints the components of a vector
{
	int i;
	for (i = 0; i < size; i++)
	{
		cout << components[i] << " ";
	}
	cout << endl;
}

void Vector::setSize(int n) //sets the size of a vector
{
	delete components;
	size = n;
	components = new double[n];
}
void Vector::setPointer( double* p) //sets the components pointer
{
	components = p;
}

int Vector::getSize() const //gets the size of vector
{
	return size;
}
double* Vector::getPointer() const //return the componemts pointer
{
	return components;
}

double Vector::norm() const //calculates the norm of vector
{
	double sum = 0;
	int i;
	for ( i = 0; i < size; i++)
	{
		sum+= components[i] * components[i];
	}
	double norm = pow(sum, 0.5);
	return norm;
}

Vector Vector::add(const Vector b) const //adds vector b to the caller vector
{
	if (size != b.size)
	{
		cout << "Invalid operation!" << endl;
		exit (1);
	}
	Vector s;
	int i;
	for (i = 0; i < size; i++)
	{
		s.components[i] = components[i] + b.components[i];
	}
	return s;
}
Vector Vector::subtract(const Vector b) const //subtract vector b from vector
{
	if (size != b.size)
	{
		cout << "Invalid operation!" << endl;
		exit (1);
	}
	Vector s;
	int i;
	for (i = 0; i < size; i++)
	{
		s.components[i] = components[i] - b.components[i];
	}

	return s;
}

double Vector::product(const Vector b) const //calculate scalar product
{
	if (size != b.size)
	{
		cout << "Invalid operation!" << endl;
		exit (1);
	}
	int i;
	double sum = 0;
	for (i = 0; i < size; i++)
	{
		sum+= components[i] * b.components[i];
	}
	
		return sum;
}
