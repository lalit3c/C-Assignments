/*
CH-230-A
a10_p3.cpp
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include <iostream>
#include "City.h"

using namespace std;

int main()
{
	string citynames[3] = {"Bremen", "London", "Paris"};
							//array of names of cities/objects
	int i;

	for (i = 0; i < 3; i++) // repeat for each city
	{	

		City c;
		string name, Mayor;
		double Area;
		int Inhabitants;
	
		//ask user's input and call corresponding methods
		cout << endl << "Please enter data for " << citynames[i] << endl;
		
		c.setName(citynames[i]);

		cout << "Area (in km^2): ";
		cin >> Area;
		getchar();
		c.setArea(Area);

		cout << "Mayor: ";
		getline(cin, Mayor);
		c.setMayor(Mayor);
		
		cout << "Number of Inhabitants: ";
		cin >> Inhabitants;
		c.setInhabitants(Inhabitants);

		cout << "You have created:" << endl;
		c.print(); 
		
	}
		return 0;
}

