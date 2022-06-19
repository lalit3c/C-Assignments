/*
CH-230-A
a11_p4.cpp
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

/* 
	Classic shape examples: an inheritance tree in a geometric context
*/
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>

class Shape {			// base class
	protected:   				// private access modifier: could also be protected
		std::string name;   // every shape will have a name
	public:
		Shape(const std::string&);  // builds a shape with a name
		Shape();					// empty shape
		Shape(const Shape&);		// copy constructor
		void printName() const ;  	// prints the name  

		void setName(std::string&); //setter method
		std::string getName() const; // getter method
		~Shape(); //Destructor
};

class CenteredShape : public Shape {  // inherits from Shape
	private: 
		double x,y;  // the center of the shape
	public:
		CenteredShape(const std::string&, double, double);  // usual three constructors
		CenteredShape();
		CenteredShape(const CenteredShape&);
		void move(double, double);	// moves the shape, i.e. it modifies it center

		void setCenter(double, double); //setter method
		double getCenter_x() const;
		double getCenter_y() const;
		~CenteredShape();

};

class RegularPolygon : public CenteredShape { // a regular polygon is a centered_shape with a number of edges
	private: 
		int EdgesNumber;
	public:
		RegularPolygon(const std::string&, double, double, int);
		RegularPolygon();
		RegularPolygon(const RegularPolygon&);

		void setEdgen(int);
		int getEdgen() const;
		~RegularPolygon();
};

class Circle : public CenteredShape {  // a Circle is a shape with a center and a radius
	private:
		double Radius;
	public:
		Circle(const std::string&, double, double, double);
		Circle();
		Circle(const Circle&);

		double Perimeter() const;
		double Area() const;
		void printInfo() const;

		void setRadius(double);
		double getRadius() const;
		~Circle();
};
    

class Rectangle : public RegularPolygon //rectangle is a regular polygon
{
	private:
		double length;
		double width;
	public:
		Rectangle (const std::string&, double, double, double, double);
		Rectangle();
		Rectangle( const Rectangle&);

		double Perimeter() const;
		double Area() const;

		void printInfo() const;

		void setLength(double);
		void setWidth(double);
		double getLength() const;
		double getWidth() const;
		~Rectangle();


};

class Square : public Rectangle  //square is inherited from rectangle
{
	private:
		double length;
	public:
		Square (const std::string&, double, double, double);
		Square();
		Square( const Square&);
		void setLength(double);
		double getLength() const;
		~Square();
};


#endif