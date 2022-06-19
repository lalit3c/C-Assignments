/*
CH-230-A
a11_p4.h
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include <iostream>
using namespace std;

//class declaration
class Creature {
	public:
		Creature();  
		void run() const;
		~Creature();

	protected:
		int distance;
};

//creating an inherited class 
class Wizard : public Creature {
	public:
		Wizard();
		void hover() const;
		~Wizard();
	private:
		int distFactor;
};

//another inherited class
class Demon : public Creature {
	public:
		Demon ();
		void fly () const;
		~Demon();
	private:
		int flyFactor;
};

//a public derivation of class
class Vampire : public Creature {
	public:
		Vampire ();
		void flit () const;
		~Vampire();
	private:
		int flitFactor;
};