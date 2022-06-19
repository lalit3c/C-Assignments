/*
CH-230-A
a12_p1.cpp
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include <iostream>
#include "Shapes.h"

using namespace std;

int main()
{
	//creating hexagon objects with consytructors
	Hexagon h1 ("One", 0, 0, 9, "Blue");
	Hexagon h2 ("Two", 0, 0, 15, "Green");
	Hexagon h3 (h2);

	//prints perimteres of each obect
	cout << "The perimeters of " << endl;
	cout << "h1 = " << h1.Perimeter() << endl;
	cout << "h2 = " << h2.Perimeter() << endl;
	cout << "h3 = " << h3.Perimeter() << endl;

	//prints areas of each obect
	cout << "The areas of " << endl;
	cout << "h1 = " << h1.Area() << endl;
	cout << "h2 = " << h2.Area() << endl;
	cout << "h3 = " << h3.Area() << endl;

	return 0;
	
}