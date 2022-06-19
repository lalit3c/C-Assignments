/*
CH-230-A
a10_p1.h
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
	std::string name;
	int hunger;
	int boredom;
	double height;
	float weight;
	std::string colour;

public: // business logic methods are public
	// setter methods
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
	void setWeight(float newweight);
	void setColour(std::string & newcolour);
	// getter method
	int getHunger();
	float getWeight();
	std::string getColour();
	// service method
	void print();
};