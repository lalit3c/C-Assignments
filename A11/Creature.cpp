/*
CH-230-A
a11_p4.cpp
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include <iostream>
using namespace std;
#include "Creature.h"

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