/*
CH-230-A
a11_p4.cpp
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/
// please refer to shapes.h for methods documentation

#include <iostream>
#include "Shapes.h"
#include<cmath>

using namespace std; 

//Parametric constructors of different shapes
Shape::Shape(const string& n) : name(n) {
}

void Shape::printName() const {
	cout << name << endl;
}

CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
}

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny) 
{
	EdgesNumber = nl;
}

Circle::Circle(const string& n, double nx, double ny, double r) : 
  CenteredShape(n,nx,ny) 
{
	Radius = r;
}

Rectangle::Rectangle(const string& n, double nx, double ny, double nwidth, double nheight) 
: RegularPolygon(n, nx, ny, 4)
{
	length = nheight;
	width = nwidth;
}

Square::Square(const string& n, double nx, double ny, double nside) :
Rectangle(n, nx, ny, nside, nside)
{
	length = nside;
}

//prints perimeter and area of circle
void Circle::printInfo() const
{
	cout << "Perimeter of " << name << " = " << Perimeter() << endl;
	cout << "Area of " << name << " = " << Area() << endl;
}

//prints perimeter and area of rectangle
void Rectangle::printInfo() const
{
	cout << "Perimeter of " << name << " = " << Perimeter() << endl;
	cout << "Area of " << name << " = " << Area() << endl;
}

//to calculate perimeter of a circle
double Circle::Perimeter() const
{
	double p = 2*M_PI*Radius;
	return p;
}

//to calculate area of a circle
double Circle::Area() const
{
	double a = M_PI*Radius*Radius;
	return a;
}

//to calculate perimeter of a rectangle
double Rectangle::Perimeter() const
{
	double p = 2 * ( length + width)  ;
	return p;
}

//to calculate area of a rectangle
double Rectangle::Area() const
{
	double a = length * width;
	return a;
}

//setter and getter methods for different shapes
void Shape::setName(std::string& n) {name = n;}
std::string Shape::getName() const { return name;}

void  CenteredShape::setCenter(double nx, double ny) {x=nx; y=ny;}
double CenteredShape::getCenter_x() const { return x; }
double CenteredShape::getCenter_y() const { return y; }

void RegularPolygon::setEdgen(int n) { EdgesNumber = n; }
int RegularPolygon::getEdgen() const { return EdgesNumber; }

void Circle::setRadius(double r) { Radius = r; }
double Circle::getRadius() const { return Radius; }

void Rectangle::setLength(double l) { length = l; }
void Rectangle::setWidth(double w) { width = w;} 
double Rectangle::getLength() const { return length;}
double Rectangle::getWidth() const { return width;}

void Square::setLength(double l) { length = l; }
double Square::getLength() const { return length;}


//empty/default constructors
Shape::Shape() { name = "default_shape";}
CenteredShape::CenteredShape() {x = 0; y = 0;}
Circle::Circle() { Radius = 1;}
RegularPolygon::RegularPolygon() { EdgesNumber = 4;}
Rectangle::Rectangle() { length = 1; width = 1;}
Square::Square() { length = 1;}

//copy constructors
Shape::Shape(const Shape& s) { name = s.name;}
CenteredShape::CenteredShape(const CenteredShape& cs) {x = cs.x; y = cs.y;}
Circle::Circle(const Circle& c) { Radius = c.Radius; }
RegularPolygon::RegularPolygon(const RegularPolygon& rp) { EdgesNumber = rp.EdgesNumber; }
Rectangle::Rectangle(const Rectangle& r ) { length = r.length; width = r.width;}
Square::Square(const Square& s) { length = s.length;}

//Destructors
Shape::~Shape() {}
CenteredShape::~CenteredShape() {}
Circle::~Circle() {}
RegularPolygon::~RegularPolygon() {}
Rectangle::~Rectangle() {}
Square::~Square() {}