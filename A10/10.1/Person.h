/*
CH-230-A
a10_p3.h
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
		int getAge();
		std::string getNationality();
		double getWeight ();
		
		void print();
};