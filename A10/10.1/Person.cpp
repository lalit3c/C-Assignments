/*
CH-230-A
a10_p3.cpp
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include <iostream>
#include "Person.h"

using namespace std;

//defining setter methods
void Person::setName(std::string& newName)
{
	name = newName;
}

void Person::setAge(int newAge)
{
	Age = newAge;
}

void Person::setNationality(std::string& newNationality)
{
	Nationality = newNationality;
}

void Person::setWeight(double newWeight)
{
	Weight = newWeight;
}

//defining getter methods
int Person::getAge()
{
	return Age;
}

std::string Person::getNationality()
{
	return Nationality;
}
double Person::getWeight ()
{
	return Weight;
}

//printing the data for each object
void Person::print() {
	cout << "The age of " << name << " is " << Age << " years, ";
	cout << " weight is" << Weight <<" kg and nationality is ";
	cout << Nationality << "." << endl;
}
