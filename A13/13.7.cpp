/*
CH-230-A
a13_p7.cpp
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include <iostream>
#include <vector>
#include <exception>

int main ()
{
	
	std::vector<int> v(20, 8); //create a vector with 20 elements

	try
	{
		v.at(21); //access 21st element
	}
	catch(const std::exception& e)
	{
		std::cerr <<"Out of Range: " << e.what() << '\n';
	}
	return 0;
}