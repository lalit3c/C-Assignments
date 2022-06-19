/*
CH-230-A
a10_p9.cpp
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include<iostream>
#include "Complex.h"

using namespace std;

complex::complex() //empty constructor default to 0
{
	real = 0;
	img = 0;
}

complex::complex(float r, float i) //constructor by passing parameters
{
	real = r;
	img = i;
}


complex::complex(const complex& a) //create a copy of existing object
{
	float * c = new float (a.real);
	float * d = new float (a.img);
	real = *c;
	img = *d;	
}


complex complex::conjugate () //calculate conjugate of complex no.
{
	complex s;
	s.real = real;
	s.img = (img)*(-1);

	return s;
}

complex complex::add (complex a) //add complex a to the complex number
{
	complex s(a);
	s.real += real;
	s.img += img;

	return s;
}
complex complex::subtract (complex a) //subtract 'a' from complex number
{
	complex s;
	s.real = real - a.real;
	s.img = img - a.img;

	return s;
}

complex complex::multiply (complex a) //multiply complex a to complex number
{
	complex s;
	s.real = (real * a.real) - (img * a.img);
	s.img = (img * a.real) + (real * a.img);

	return s;
}


void complex::setReal(float r) //set real part of complex number
{
	real = r;
}

void complex::setImg(float i) //set imaginary paet of complex number
{
	img = i;
}

void complex::print() //prints the complex number 
{
	if (img) 
	{
		cout << noshowpos << real << showpos << img << "i" << endl;
	} 
	else
	{
		cout << noshowpos << real << showpos << endl;
	}

}

complex::~complex() 
{
}