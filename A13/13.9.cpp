/*
CH-230-A
a13_p9.cpp
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include <iostream>
class Motor
{
	public:
	Motor()
	{
		std::cout << "Construct motor\n";
		std::string s = "This motor has problems";
		throw s;
	}
	~Motor() {}
};

class Car
{
	private:
		Motor motor;
	public:
	Car()
	{
		Motor m;
	}
	~Car() {}
	
	
};
class Garage
{
	private:
		Car car;
	public:
		Garage() 
		{
			std::cout << "Construct Garage\n";
			try
			{
				Car c;
			}
			catch(std::string e)
			{
				std::cout << e << std::endl;
			}
			std::string p = "The car in this garage has problems with the motor\n";
			throw p;
			
		}
		~Garage() {}

};
	

int main ()
{
	
	try
	{
		Garage g;
	}
	catch(std::string s)
	{
		std::cerr << s << '\n';
	}
	return 0;
	
}