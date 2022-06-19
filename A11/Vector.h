/*
CH-230-A
a11_p7.h
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

class Vector
{
	private:		
		int size;
		double *components;		//pointer to components of vector

	public:
		//setter methods
		void setSize(int);
		void setPointer( double*);

		//getter methods
		int getSize() const;
		double* getPointer() const;

		//service methods
		double norm() const;
		void print() const;
		Vector add(const Vector) const;
		Vector subtract(const Vector) const;
		double product(const Vector) const;

		//constructors
		Vector();
		Vector(int, double*);
		Vector (const Vector&);
		
		//destructor
		~Vector();

};