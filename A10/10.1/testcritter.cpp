/*
CH-230-A
a10_p1.cpp
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
	Critter c;

	string name, colour;
	int hunger;
	float weight;
 
	//ask user's input and call corresponding methods
	cout << endl << "Please enter data: " << endl;
	cout << "Name: ";
	getline(cin, name);
	c.setName(name);
	cout << "Hunger: ";
	cin >> hunger;
	c.setHunger(hunger);

	cout << "Weight(in Kg): ";
	cin >> weight;
	c.setWeight(weight);

	cout << "Colour: ";
	cin >> colour;
	c.setColour(colour);

	cout << "You have created:" << endl;
	c.print(); 
        return 0;
}