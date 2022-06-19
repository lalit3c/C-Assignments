/*
CH-230-A
a13_p6.h
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include <iostream>
#include <fstream>
#include "Matrix.h"
//#include "Vector.h"

int main()
{
	double **mat = NULL;
	double* vec = NULL;
	Matrix m(3, 3, mat); // 3*3 matrix
	Vector v(3, vec); //vector with 3 elements
	
	std::ifstream inf;
	std::ofstream outf;
	
	inf.open("m1.txt", std::ifstream::in);
	
	if(!inf)
	{
		std::cout << "Error 1!" << std::endl;
	}
	inf >> m; //read matrix
	
	inf.close();
	inf.open("v1.txt", std::ifstream::in);
	if(!inf)
	{
		std::cout << "Error 2!" << std::endl;
	}

	inf >> v; //read vector
	
	
	inf.close();

	outf.open("mv.txt", std::ofstream::out);
	if(!outf)
	{
		std::cout << "Error 3!" << std::endl;
	}

	//write product to file
	outf << "Result of m*v: \n" << m*v << std::endl;
	outf << "Result of v*m: \n" << v*m << std::endl;
	

	outf.close();
	return 0;
}