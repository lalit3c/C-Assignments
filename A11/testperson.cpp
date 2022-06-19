/*
CH-230-A
a11_p2.cpp
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include <iostream>
#include "Person.h"

using namespace std;

int main()
{
	Person p1; //calling an empty constructor
	p1.print();
	Person p2("Ram", 25, "Nepali", 65.5); //calling a parametric constructor
	p2.print();
	Person p3 (p2);	//calling a copy constructor
	p3.print();

	string Personnames[3]={"Nathan", "Tim", "Tanya"};
	int i;
	for (i = 0; i < 3; i++)		//get data for each person object
	{	

		Person c;
		string name, Nationality;
		double Weight;
		int Age;
	
		//ask user's input and call corresponding methods
		cout << endl << "Please enter data for " << Personnames[i] << endl;
		c.setName(Personnames[i]);
		cout << "Age: ";
		cin >> Age;
		c.setAge(Age);

		cout << "Weight: ";
		cin >> Weight;
		getchar();
		c.setWeight(Weight);

		cout << "Nationality: ";
		getline(cin, Nationality);
		c.setNationality(Nationality);

		cout << "You have created:" << endl;
		c.print(); 
		
	}

	

	return 0;
}

