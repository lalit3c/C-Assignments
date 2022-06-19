/*
CH-230-A
a11_p2.h
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include<string>

class Person
{
	private:
		std::string name;
		int Age;
		std:: string Nationality;
		double Weight;

	public:
			//setter methods
		void setName(std::string& newName);
		void setAge(int newAge);
		void setNationality(std::string& newNationality);
		void setWeight(double newWeight);

		//getter methods
		int getAge() const;
		std::string getNationality() const;
		double getWeight () const;
		
		void print() const;

		//constructors
		Person();
		Person (std::string, int, std::string, double);
		Person(const Person&);

		//Destructor
		~Person();
};