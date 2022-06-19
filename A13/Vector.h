/*
CH-230-A
a13_p6.h
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

class Vector
{
	private:		
		//int size;
		//double *components;		//pointer to components of vector

	public:
	int size;
	double *components;	
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

		friend std::ostream& operator<< (std::ostream& out, const Vector& m);
		friend std::istream& operator>> (std::istream& in, const Vector& m);

};