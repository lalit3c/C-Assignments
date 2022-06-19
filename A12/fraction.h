/*
CH-230-A
a12_p7.h
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

// simple class for fractions

#ifndef FRACTION_H_
#define FRACTION_H_

class Fraction {

private:						// internal implementation is hidden
	int num;					// numerator
	int den;					// denominator

	int gcd(int a, int b) const;		// calculates the gcd of a and b
	int lcm(int a, int b) const;

public:
	Fraction();					// empty constructor
	Fraction(int, int = 1); 	// constructor taking values for fractions and
								// integers. Denominator by default is 1
	

	//overloading operators * and /
	friend Fraction operator * (const Fraction&, const Fraction&);
	friend Fraction operator / (const Fraction&, const Fraction&);

	//overloading << and >>
	friend std::ostream& operator<<(std::ostream& out, const Fraction &);
	friend std::istream& operator >>(std::istream& in, Fraction &);

	Fraction& operator = (const Fraction&); //overloading assignment
	Fraction operator + (const Fraction&) const; //overloading + and -
	Fraction operator - (const Fraction&) const;

	//overloading comparison operAtors
	friend bool operator > (const Fraction&, const Fraction&); 
	friend bool operator < (const Fraction&, const Fraction&);
};


#endif /* FRACTION_H_ */