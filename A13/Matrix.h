/*
CH-230-A
a13_p6.h
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include "Vector.h"

class Matrix
{
	private:		
		int row;
		int col;
		double **elem;		//pointer to components of vector
		

	public:
		//setter methods
		void setrow(int);
		void setcol(int);
		void setPointer (double **);

		Matrix();
		Matrix(int, int, double**);
		~Matrix();

		//overloaded operators
		friend std::ostream& operator<< (std::ostream& out, const Matrix& m);
		friend std::istream& operator>> (std::istream& in, const Matrix& m); 

		friend Vector operator* (const Matrix& m, const Vector& v);
		friend Vector operator* (const Vector& v, const Matrix& m);

};