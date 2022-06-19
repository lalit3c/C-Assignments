/*
CH-230-A
a10_p9.h
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include <iostream>

class complex
{
	private:
		float real;
		float img;

	public:
		//constructors
		complex();
		complex(float, float = 0);

		//setter methods
		void setReal (float);
		void setImg (float);
		
		float getReal() const;
		float getImg() const;

		//copy constructor
		complex(const complex&);

		//methods for computation
		complex conjugate ();
		//overloaded operators
		complex operator+ (const complex&) const;
		complex operator- (const complex&)const;
		complex operator* (const complex&) const;
		complex& operator= (const complex& );
		//overloaded >> and <<
		friend std::ostream& operator<<(std::ostream& out, const complex &f);
		friend std::istream& operator>>(std::istream& in,  complex &f);


		



		//destructor
		~complex();

		void print ();

};