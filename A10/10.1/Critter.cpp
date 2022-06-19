/*
CH-230-A
a10_p1.cpp
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include <iostream>
#include "Critter.h"

using namespace std;

//setters methods
void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}

void Critter::setWeight(float newweight)
{
	weight = newweight;
}

void Critter::setColour(std::string & newcolour)
{
	colour = newcolour;
}

//for printing the set data
void Critter::print() {
	cout << "I am " << name << ". My hunger level is " << hunger << ".";
	cout << " My weight is " << weight <<" kg and my colour is ";
	cout << colour << "." << endl;
}

//getter methods
int Critter::getHunger() {
	return hunger;
}

float Critter::getWeight() {
	return weight;
}

std::string Critter::getColour() {
	return colour;
}
