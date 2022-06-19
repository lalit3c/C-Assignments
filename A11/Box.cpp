/*
CH-230-A
a11_p1.cpp
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include<iostream>
#include "Box.h"

//empty constructor with default values 0
Box::Box()
{
	height = 0;
	width = 0;
	depth = 0;
}

//construct a box with given parameters
Box::Box(double h, double w, double d)
{
	height = h;
	width = w;
	depth = d;
}

//create a copy of existing box object
Box::Box(const Box& b)
{
 
	height = b.height;
	width = b.width;
	depth = b.depth;

}
//destructor
Box:: ~Box()
{
	std::cout << "Execturting destruction.." << height << std::endl;
}

//setter methods
void Box::setHeight(double h)
{
	height = h;
}
void Box::setWidth(double w)
{
	width = w;
}
void Box::setDepth(double d)
{
	depth = d;
}

//getter methods
double Box::getHeight () const
{
	return height;
}
double Box::getWidth () const
{
	return width;
}
double Box::getDepth() const
{
	return depth;
}

//computation of volume of box
double Box::Volume ()
{
	
	double v = height * width * depth;
	return v;
}