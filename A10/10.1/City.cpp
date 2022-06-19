/*
CH-230-A
a10_p3.cpp
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include <iostream>
#include "City.h"

using namespace std;

//defining setter methods
void City::setName(std::string& newName)
{
	name = newName;
}

void City::setInhabitants(int newInhabitants)
{
	Inhabitants = newInhabitants;
}

void City::setMayor(std::string& newMayor)
{
	Mayor = newMayor;
}

void City::setArea(double newArea)
{
	Area = newArea;
}

//defining getter methods
int City::getInhabitants()
{
	return Inhabitants;
}

std::string City::getMayor()
{
	return Mayor;
}
double City::getArea ()
{
	return Area;
}

//Print the data for each object
void City::print() {
	cout << "The city " << name << " has an area of " << Area << " km^2.";
	cout << " Its mayor is " << Mayor <<" and population is ";
	cout << Inhabitants << "." << endl;
}
