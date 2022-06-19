/*
CH-230-A
a11_p4.cpp
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/
#include "Shapes.h"


int main(int argc, char** argv) 
{

	Circle c("first circle", 3, 4, 7);
	RegularPolygon r("TRIANGLE", 1, 1, 3);
	Rectangle rec("Rec1", 2, 2, 4, 5);
	Square s ("Square", 1, 5, 3);

	c.printInfo();
	rec.printInfo();
	s.printInfo();
	
}