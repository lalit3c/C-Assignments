/*
CH-230-A
a11_p4.cpp
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include <iostream>
using namespace std;
#include "Creature.h"

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