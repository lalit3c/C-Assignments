/*
CH-230-A
a13_p8.cpp
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/


#include <iostream>
#include <exception>

//OwnException as derivation of exception class
class OwnException : public std::exception
{
	private:
		std::string detail;

	public:
	
		const char* what() const throw()
		{
			return "OwnException\n";
		}
		OwnException()
		{
			detail = "Default case exception";
		}
		
		//~OwnException() { } 
};

void func (int a)
{
	OwnException e;
	bool b = true;
	//throw exception based on input
	if (a == 1)
		throw 'a';
	
	else if (a == 2)
		throw 12;

	else if (a == 3)
		throw b;

	else
	throw e;
}

int main()
{
	int i;
	for (i = 0; i < 4; i++)
	{
		try
		{
			func(i+1); //calling func with different integers
	
		}
		catch(int a)
		{
			std::cerr << "Caught in main: " << a << std::endl;
		}
		catch(char a)
		{
			std::cerr << "Caught in main: " << a << std::endl;
		}
		catch(bool a)
		{
			std::cerr << "Caught in main: " << a << "(True)"<< std::endl;
		}

		catch(const OwnException& e)
		{
			std::cerr <<  "Caught in main: " << e.what() << std::endl;
		}
	}

	return 0;
}