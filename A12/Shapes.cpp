/*
CH-230-A
a12_p1.cpp
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/
// please refer to shapes.h for methods documentation

#include <iostream>
#include "Shapes.h"
#include <cmath>

using namespace std; 

Shape::Shape(const string& n) : name(n) {
}

void Shape::printName() const {
	cout << name << endl;
}

Shape::Shape(const Shape& s)
{
	name = s.name;
}

CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
}

CenteredShape::CenteredShape(const CenteredShape& c)
{
	x = c.x;
	y = c.x; 
}


RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny) 
{
	EdgesNumber = nl;
}

RegularPolygon::RegularPolygon(const RegularPolygon& r)
{
	EdgesNumber = r.EdgesNumber;
}


Circle::Circle(const string& n, double nx, double ny, double r) : 
  CenteredShape(n,nx,ny) 
{
	Radius = r;
}

//sets length of Hexagon
void Hexagon::setSide(double length)
{
	side = length;
}

//sets volour of hexagon
void Hexagon::setColour(std::string c)
{
	colour = c;
}

//gets length of side of hexagon
double Hexagon::getSide() const
{
	return side;
}
//gets colour of hexagon
std::string Hexagon::getColour() const
{
	return colour;
}

//parametric constructo
Hexagon::Hexagon(const string& n, double nx, double ny, double l, std::string c) 
: RegularPolygon(n, nx, ny, 6)
{
	side = l;
	colour = c;
}

//copy constructor
Hexagon::Hexagon(const Hexagon& h)
{
	side = h.side;
	colour = h.colour;
}

//DEstructor
Hexagon::~Hexagon()
{
	cout << "Destructing a hexagon..." << endl;
}

//compute perimeter of hexagon
double Hexagon::Perimeter() const
{
	return (6 * side);
}

//compute aea of hexagon
double Hexagon::Area() const
{
	double a = (3.0/2.0) * side * side * pow(3, 0.5);
	return a;
}

//empty/default constructors
Shape::Shape() { name = "default_shape";}
CenteredShape::CenteredShape() {x = 0; y = 0;}
Circle::Circle() { Radius = 1;}
RegularPolygon::RegularPolygon() { EdgesNumber = 6;}
Hexagon::Hexagon() { colour = "default colour"; side = 1;}