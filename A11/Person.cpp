/*
CH-230-A
a11_p2.cpp
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
int Person::getAge() const
{
	return Age;
}

std::string Person::getNationality() const
{
	return Nationality;
}
double Person::getWeight () const
{
	return Weight;
}

//printing the data for each object
void Person::print() const 
{
	cout << "The age of " << name << " is " << Age << " years, ";
	cout << " weight is " << Weight <<" kg and nationality is ";
	cout << Nationality << "." << endl;
}

//Empty Constructor
Person::Person()
{
	name = "default_name";
	Age = 0;
	Nationality = "default_country";
	Weight = 0;

}

//Parametric Constructor
Person::Person (std::string newName, int newAge, std::string newNationality, double newWeight)
{
	name = newName;
	Age = newAge;
	Nationality = newNationality;
	Weight = newWeight;
}

//Copy Constructor
Person::Person(const Person& p)
{
	cout << "Creating a copy of " << p.name << endl;
	name = p.name;
	Age = p.Age;
	Nationality = p.Nationality;
	Weight = p.Weight;
}

//Destructor
Person::~Person()
{
	cout << "Deleting data of " << name << endl;
}