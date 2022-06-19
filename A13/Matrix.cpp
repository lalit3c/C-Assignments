/*
CH-230-A
a13_p6.h
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include <iostream>
#include "Matrix.h"

Matrix::Matrix()
{
	row = 3;
	col = 3;
	int i=0, j = 0;
	elem = new double*[3];
	for (i = 0; i < 3; i++)
	{
		elem[i] = new double[3];
	}

	for ( i = 0 ; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (i==j)
			{
				elem[i][j] = 1;
			}
			else elem[i][j] = 0;
		}
	}
}

Matrix::Matrix(int r, int c, double** el)
{
	row = r;
	col = c;
	int i = 0, j = 0;
	el = new double* [row];
	for ( i = 0; i < row; i++)
	{
		el[i] = new double [col];
	}
	for ( i = 0 ; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			el[i][j] = i+j;
		}
	}
	elem = el;
}

Matrix::~Matrix()
{
	int i = 0;
	for (i = 0; i < row; i++)
	delete elem[i];
	delete elem;
}

//write matrix to output
std::ostream& operator<< (std::ostream& out, const Matrix& m)
{
	int i = 0, j = 0;
	for ( i = 0 ; i < m.row; i++)
	{
		for (j = 0; j < m.col; j++)
		{
			out << m.elem[i][j] << " ";
		}
		out << "\n";
	}
	return out;
}

//read matrix from input
std::istream& operator>> (std::istream& in, const Matrix& m)
{
	char arr[5];
	int i = 0, j = 0;
	for ( i = 0 ; i < m.row; i++)
	{
		for (j = 0; j < m.col; j++)
		{
			in.getline(arr, 5, ' ');
			sscanf(arr, "%lf", &m.elem[i][j]);

		}

	}
	return in;
}

//multiply matrix and vector
Vector operator* (const Matrix& m, const Vector& v)
{
	if (m.col != v.size)
	{
		std::cerr << "Cannot perform operation!";
		exit (1);

	}
	
	double *res = NULL;
	Vector result(m.row, res);
	int i = 0, j = 0; 
	for (i = 0; i < m.row; i++)
	{
		int sum = 0;
		for ( j = 0; j < m.col; j++)
		{
			sum+= m.elem[i][j] * v.components[j];
		}
		result.components[i] = sum;
	}
	return result;
	
}
//multiply vector and matrix
Vector operator* (const Vector& v, const Matrix& m)
{
	if (v.size != m.row)
	{
		std::cerr << "Cannot perform operation!";
		exit (2);
	}
	double *res = NULL;

	Vector result(m.row, res);
	int i = 0, j = 0; 
	for (i = 0; i < m.row; i++)
	{
		int sum = 0;
		for ( j = 0; j < m.col; j++)
		{
			sum+= m.elem[j][i] * v.components[i];
		}
		result.components[i] = sum;
	}
	return result;
}