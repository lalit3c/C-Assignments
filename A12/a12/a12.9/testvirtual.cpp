/*
CH-230-A
a12_p8.cpp
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"
 
const int num_obj = 25;

//picks a random number between 0 and 3
int Choose4()
{
	int randomNumber;
	// init random number generator 
	randomNumber = rand(); //based on seed from srand
	srand(randomNumber);	//uses randomNumber as seed for next iteration
	return(randomNumber % 4); //limit output between 0 and 3
}

//returns a random number between 5 and 100
int ChooseSize()
{
	int randomNumber;
	// init random number generator 
	randomNumber = rand(); //based on seed from srand
	srand(randomNumber);	//uses randomNumber as seed for next iteration
	return(randomNumber % 96)+5; //limit output between 5 and 100
}


int main() {
	const char* arr[4] = { "RED", "BLACK" ,"VIOLET", "BLUE"};
	string shape[4] = {"Ring", "Rectangle", "Cirlce", "Square"};

	srand(time(NULL));

	Area *list[num_obj];						
				// list is an array of Area objects
	int index = 0;								
				// index is intialised to 0
	double sum_area = 0.0;						
				// sum of area is initialised to 0
	double sum_perimeter = 0.0;
	
	int i = 0;
	while (i < num_obj)
	{
		switch (Choose4()) //switch between shapes based on random number
		{
			case 0:
			{
				int a = ChooseSize();
				int b = ChooseSize();

				//to ensure outer radius > inner radius in ring
				if ( a > b) 
				{
					Ring ri (arr[Choose4()], a, b );
					list[i] = &ri;
				}
				else 
				{
					Ring ri (arr[Choose4()], b, a );
					list[i] = &ri;
				}
				
				break;
			}

			case 1:
			{
				Rectangle re (arr[Choose4()], ChooseSize(), ChooseSize() );
				list[i] = &re;
				break;
			}

			case 2:
			{
				Circle ci (arr[Choose4()], ChooseSize());
				list[i] = &ci;
				break;
			}

			case 3:
			{
				Square sq (arr[Choose4()], ChooseSize());
				list[i] = &sq;
				break;
			}

		}
		i++;
		
	}

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