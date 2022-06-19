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
	while (1)
	{
		string input;
		cin >> input;

		if (input == "wizard")
		{
			Wizard *w = new Wizard;
			cout << "Creating a Wizard.\n";
			w->run();
			w->hover();
			delete w;
			cout << endl;
		}

		else if (input == "object1")
		{
			Demon *d = new Demon;
			cout << "Creating a Demon.\n";
			d->run();
			d->fly();
			delete d;
			cout << endl;
		}

		else if (input == "object2")
		{
			Vampire *v = new Vampire;
			cout << "Creating a Vampire.\n";
			v->run();
			v->flit();
			delete v;
			cout << endl;
		}

		else if (input == "quit")
			exit(1);
	
	}
    return 0;
} 