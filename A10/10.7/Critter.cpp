/*
CH-230-A
a10_p6.cpp
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include <iostream>
#include "Critter.h"

using namespace std;

//for printing the set data
void Critter::print() {
	cout << "I am " << name << ". My hunger level is ";
	cout<< Critter::conversion(hunger) << ".";  //print the hunger level as int
	cout << " My boredom is " << boredom <<", my height is ";
	cout << height << " and thirst level is " << thirst << endl <<endl;
}

//converts double hunger to int hunger for printing
int Critter::conversion (double x)
{	
	int y = x*10;
	return (y);
}

//converts int hunger to double for storing
double Critter::conversion (int x)
{
	double y = (double)x/10;
	return (y);
}

//Constructor Methods
Critter::Critter ()		//an empty constructor
{
	name = "default_critter";
	height = 5;
	hunger = 0;
	boredom = 0;
	thirst = 0;
	cout << "Calling an empty constructor: " << endl;
}

Critter::Critter (std::string newname) //contructor by passing only name
{
	name = newname;
	height = 5;
	hunger = 0;
	boredom = 0;
	thirst = 0;
	cout << "Calling a constructor by supplying only name: " << endl;
}

Critter::Critter(std::string Name, int Hunger, int Boredom,  double Height)
										// constructor by passing all the data
{
	name = Name;
	height = Height;
	hunger = Critter::conversion(Hunger); //change int hunger to double
	boredom = Boredom;
	thirst = hunger;
	cout << "Calling a constructor by supplying name, hunger, ";
	cout<< "boredom and height: " << endl;

}

Critter::Critter(std::string Name, int Hunger, int Boredom,  double Height, double Thirst)
										// constructor by passing all the data
{
	name = Name;
	height = Height;
	hunger = Critter::conversion(Hunger); //change int hunger to double
	boredom = Boredom;
	thirst = Thirst;
	cout << "Calling a constructor by supplying name, hunger, ";
	cout<< "boredom, height and thirst: " << endl;

}
