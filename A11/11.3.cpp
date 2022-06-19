/*
CH-230-A
a11_p3.cpp
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

//empty constructor for Creature with distance set to 10
Creature::Creature(): distance(10)
{}    

//Destructor
Creature::~Creature()
{
	cout << "Destructing creature" << endl;
} 
//a constant run method for Creature
void Creature::run() const
{ 
    cout << "running " << distance << " meters!\n";
}  

//creating an inherited class 
class Wizard : public Creature {
	public:
		Wizard();
		void hover() const;
		~Wizard();
	private:
		int distFactor;
};

//empty constructor with distFactor set to 3
Wizard::Wizard() : distFactor(3)
{}  

//Destructor
Wizard::~Wizard()
{
	cout << endl << "Destructing Wizard" << endl;
}
//a const hovering method for wizard
void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

//another inherited class
class Demon : public Creature {
	public:
		Demon ();
		void fly () const;
		~Demon();
	private:
		int flyFactor;
};

//empty constructor sets flyFactor to 5
Demon::Demon() : flyFactor(5)
{}

//Destructor
Demon::~Demon()
{
	cout << endl << "Destructing Demon" << endl;
}
//a const fky method for Demons
void Demon::fly () const
{
	cout << "Flying " << (flyFactor * distance) << " meters!" << endl;
}

//a public derivation of class
class Vampire : public Creature {
	public:
		Vampire ();
		void flit () const;
		~Vampire();
	private:
		int flitFactor;
};

//empty constructor with flitFactor set to 4
Vampire::Vampire() : flitFactor(4)
{}

//Destructor
Vampire::~Vampire()
{
	cout << endl << "Destructing Vampire" << endl;
}

//a const flitting method for Vampires
void Vampire::flit () const
{
	cout << "Flitting " << (flitFactor * distance) << " meters!" << endl;
}



int main()
{ 
	//creating different inherited creatures and calling respective methods
    cout << "Creating an Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

	cout << "\nCreating a Demon.\n";
    Demon d;
    d.run();
    d.fly();

	cout << "\nCreating a Vampire.\n";
    Vampire v;
    v.run();
    v.flit();

    return 0;
} 