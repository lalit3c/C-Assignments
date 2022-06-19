/*
CH-230-A
a10_p9.cpp
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include <iostream>
#include <fstream>
#include "Complex.h"

using namespace std;

int main()
{
	complex a,b;
	std::ifstream inf;
	std::ofstream outf;
	
	inf.open("in1.txt", std::ifstream::in);
	
	if(!inf)
	{
		cout << "Error 1!" << endl;
	}
	inf >> a;
	
	inf.close();
	inf.open("in2.txt", std::ifstream::in);
	if(!inf)
	{
		cout << "Error 2!" << endl;
	}
	
	inf >> b;
	
	inf.close();

	outf.open("output.txt", std::ofstream::out);
	if(!outf)
	{
		cout << "Error 3!" << endl;
	}
	
	outf << "Sum = " << a + b << std::endl;
	outf << "Difference = " << a - b << std::endl;
	outf << "Product = " << a * b << std::endl;

	outf.close();

	return 0;

}
