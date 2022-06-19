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
		
		//copy constructor
		complex(const complex&);

		//methods for computation
		complex conjugate ();
		complex add (complex);
		complex subtract (complex);
		complex multiply (complex);

		//destructor
		~complex();

		void print ();

};