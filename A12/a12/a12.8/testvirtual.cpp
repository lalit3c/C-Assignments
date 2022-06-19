/*
CH-230-A
a12_p8.cpp
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/


#include <iostream>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"
 
const int num_obj = 8;
int main() {
	Area *list[num_obj];						
				// list is an array of 6 Area objects
	int index = 0;								
				// index is intialised to 0
	double sum_area = 0.0;						
				// sum of area is initialised to 0
	double sum_perimeter = 0.0;
	cout << "Creating Ring: ";
	Ring blue_ring("BLUE", 5, 2);// creates an object blue_ring of class Ring 
				//whose color is "BLUE", outer radius is 5 and inner radus is 2
	cout << "Creating Circle: ";
	Circle yellow_circle("YELLOW", 7);
	cout << "Creating Rectangle: ";
	Rectangle green_rectangle("GREEN",5,6);
	cout << "Creating Circle: ";
	Circle red_circle("RED", 8);
	cout << "Creating Rectangle: ";
	Rectangle black_rectangle("BLACK", 10, 20);
	cout << "Creating Ring: ";
	Ring violet_ring("VIOLET", 100, 5);
	cout << "Creating Square: ";
	Square white_square("WHITE", 25);
	cout << "Creating Square: ";
	Square orange_square("ORANGE", 5);
	// initiliases the elemets of array by objects from inherited class
	list[0] = &blue_ring;						
	list[1] = &yellow_circle;
	list[2] = &green_rectangle;
	list[3] = &red_circle;
	list[4] = &black_rectangle;
	list[5] = &violet_ring;
	list[6] = &white_square;
	list[7] = &orange_square;

	while (index < num_obj) // loop through each element of array list
	{	
		(list[index])->getColor();				
		double area = list[index]->calcArea();
								// calculates area of each object of array.
		double perimeter = list[index]->calcPerimeter();				 
		sum_area += area;
		sum_perimeter += perimeter;
		index++;
	}

	cout << "\nThe total area is "
			<< sum_area << " units " << endl;	
			// prints the sum of the area of all objects on screen

	cout << "\nThe total perimeter is "
			<< sum_perimeter << " units " << endl;	


	return 0;
}

/*
	Scheme of Inheritence:

			Area				//Base Class
			||
	------------------
	||				||
	Circle		 Rectangle	//Circle and Rectangle are derived from Area
	||				||
	Ring	  		   Square	//Ring is derived from Circle and Sqaure from Rectangle

*/