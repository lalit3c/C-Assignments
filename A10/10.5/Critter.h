/*
CH-230-A
a10_p5.h
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include <string> // defines standard C++ string class

class Critter
{
private:  // data members are private
	std::string name;
	int hunger;
	int boredom;
	double height;

public: // business logic methods are public
	
	// service method */
	void print();

	//contructor methods
	Critter ();
	Critter (std::string);
	Critter(std::string, int, int, double = 10); //sets default height to 10
};