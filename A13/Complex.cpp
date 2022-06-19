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
float complex::getReal() const
{
	return real;
}

float complex::getImg() const
{
	return img;
}

complex::complex(const complex& a) //create a copy of existing object
{
	real = a.real;
	img = a.img;	
}


complex complex::conjugate () //calculate conjugate of complex no.
{
	complex s;
	s.real = real;
	s.img = (img)*(-1);

	return s;
}

//add complex a to the complex number
complex complex::operator+ (const complex& a) const 
{
	return complex(real + a.real, img + a.img);
}

//subtract 'a' from complex number
complex complex::operator- (const complex& a) const 
{
	return complex(real - a.real, img - a.img);
}

//multiply complex a to complex number
complex complex::operator* (const complex& a) const 
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
		cout << noshowpos << real << showpos << img << "i" << std::endl;
	} 
	else
	{
		cout << noshowpos << real << showpos << std::endl;
	}

}

//destructor
complex::~complex() 
{
}

//assignment operator
complex& complex::operator= (const complex& f)
{
	this->real = f.real;
	this->img = f.img;
	return *this;
}

//writing complex numbers to the output stream
std::ostream& operator<<(std::ostream& out, const complex &f)
{
	if (f.img) 
	{
		out << noshowpos << f.real << showpos << f.img << "i" << std::endl;
	} 
	else
	{
		out << noshowpos << f.real << showpos << std::endl;
	}
	return out;
}
//reading complexs from input using >>
std::istream& operator >>(std::istream& in, complex &f)
{
	char real[5], img[5];
	in.getline(real, 5, '+');
	sscanf(real, "%f", &f.real);
	in.getline(img, 5, 'i');
	sscanf(img, "%f", &f.img);

	
	return in;

}