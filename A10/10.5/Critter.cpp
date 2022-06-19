/*
CH-230-A
a10_p5.cpp
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include <iostream>
#include "Critter.h"

using namespace std;

//for printing the set data
void Critter::print() {
	cout << "I am " << name << ". My hunger level is " << hunger << ".";
	cout << " My boredom is " << boredom <<" and my height is ";
	cout << height << "." << endl << endl;
}

//Constructor Methods
Critter::Critter ()		//an empty constructor
{
	name = "default_critter";
	height = 5;
	hunger = 0;
	boredom = 0;
	cout << "Calling an empty constructor: " << endl;
}

Critter::Critter (std::string newname) //contructor by passing only name
{
	name = newname;
	height = 5;
	hunger = 0;
	boredom = 0;
	cout << "Calling a constructor by supplying only name: " << endl;
}

Critter::Critter(std::string Name, int Hunger, int Boredom,  double Height)
										// constructor by passing all the data
{
	name = Name;
	height = Height;
	hunger = Hunger;
	boredom = Boredom;
	cout << "Calling a constructor by supplying name, hunger, ";
	cout<< "boredom and height: " << endl;

}