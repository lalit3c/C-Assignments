/*
CH-230-A
a10_p3.h
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include<string>

class City
{
	
	private: //data members are private
		std::string name;
		int Inhabitants;
		std:: string Mayor;
		double Area;

	public: //data members are public
		//setter methods
		void setName(std::string& newName);
		void setInhabitants(int newInhabitants);
		void setMayor(std::string& newMayor);
		void setArea(double newArea);

		//getter methods
		int getInhabitants();
		std::string getMayor();
		double getArea ();
		
		void print();
};