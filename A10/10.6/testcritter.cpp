/*
CH-230-A
a10_p6.cpp
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
	//calling the constructor methods and printing the outcomes
	Critter c1;
	c1.print();

	Critter c2 ("Penguin");
	c2.print();

	Critter c3 ("Kiwi", 2, 6);
	c3.print();

	Critter c4 ("Ostrich", 2, 7, 8.5);
	c4.print();

	return 0;
}