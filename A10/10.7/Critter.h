/*
CH-230-A
a10_p6.h
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include <string> // defines standard C++ string class

class Critter
{
private:  // data members and conversion methods are private
	std::string name;
	double hunger;
	int boredom;
	double height;
	double thirst;
	
	//methods to conver int (hunger) to double and vice verca
	int conversion (double);
	double conversion(int);
	

public: // business logic methods are public
	
	// service method */
	void print();

	//contructor methods
	Critter ();
	Critter (std::string);
	Critter(std::string, int, int, double = 10 ); //sets default height to 10
	Critter(std::string, int, int, double, double ); 
								
	
};