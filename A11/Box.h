/*
CH-230-A
a11_p1.h
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include<iostream>
class Box
{
	private:
		double height;
		double width;
		double depth;

	public:
		//setter methods
		void setHeight(double);
		void setWidth(double);
		void setDepth(double);

		//getter methods
		double getHeight() const;
		double getWidth() const;
		double getDepth() const;

		//empty contructor
		Box();

		//constructore by passing parameters
		Box(double, double, double);

		//copy constructor
		Box(const Box&);
		
		//Methods for volume calculation
		double Volume();

		//Destructor
		~Box();
};
