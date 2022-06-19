/*
CH-230-A
a12_p7.cpp
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "fraction.h"

Fraction::Fraction() //a default fraction is 1/1
{
	num = 1;
	den = 1;
}

Fraction::Fraction(int n, int d)
{
	int tmp_gcd = gcd(n, d);

	num = n / tmp_gcd;  //writes fraction in simplest form
	den = d / tmp_gcd;
}

int Fraction::gcd(int a, int b) const //calculates gcd of a and b
{	
	return b == 0 ? a : gcd(b, a % b);
}

int Fraction::lcm(int a, int b) const //calculates lcm of a and b
{
	return a * b / gcd(a, b);

}

//assigning fractions
Fraction& Fraction::operator= (const Fraction& f)
{
	this->num = f.num;
	this->den = f.den;
	return *this;
}

//Addition of two fractions using +
Fraction Fraction::operator + (const Fraction& b) const
{
	int n = (this->num * this->lcm(this->den, b.den)/this->den)+(b.num * this->lcm(this->den, b.den)/b.den);
	int d = this->lcm(this->den, b.den);
	return Fraction (n, d);
}


//Subtraction of two fractions using -
Fraction Fraction::operator - ( const Fraction& b) const
{
	int n = (this->num * this->lcm(this->den, b.den)/this->den)-(b.num * this->lcm(this->den, b.den)/b.den);
	int d = this->lcm(this->den, b.den);
	return Fraction (n, d);
}

//multiplication of two fractions using *
Fraction operator * (const Fraction& a, const Fraction& b)
{
	Fraction res(a.num * b.num, a.den * b.den);
	return res;
}

//division of two fractions using /
Fraction operator / (const Fraction& a, const Fraction& b)
{
	if(b.num == 0) //divisor cannot be 0
	{
		std::cout << "Error! Cannot divide by 0!"<< std::endl;;
		exit(1);
	} 
	Fraction res(a.num * b.den, a.den * b.num);
	return res;
}

//comparison of two fractions using > and <
bool operator > (const Fraction& a, const Fraction& b)
{
	return ((a - b).num > 0 && (a-b).den > 0);
	
}

bool operator < (const Fraction& a, const Fraction& b)
{
	return ((a - b).num < 0 || (a-b).den < 0);	
}

//printing fractions usning <<
std::ostream& operator<<(std::ostream& out, const Fraction &f)
{
	if (f.num == 0 || f.den == 1)
	{
		out << f.num << std::endl; //output fraction in simpler form
		return out;
	}
	else
	{
		out << f.num << "/" << f.den << std::endl;
		return out;
	}
	
}
//reading fractions from input using >>
std::istream& operator >>(std::istream& in, Fraction &f)
{
	in >> f.num;
	getchar();
	in >> f.den;
	getchar();
	if (f.den == 0) //denominator cannot be 0
	{
		std::cout << "Invalid Fraction!" << std::endl;
		exit(2);
	}
	return in;

}