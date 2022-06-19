/*
CH-230-A
a10_p8.cpp
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include <iostream>
#include <cstring>  // standard C string.h header file

using namespace std;

/*
	Naive string: the goal is to illustrate how copy constructors 
	should be handled. See also charbuffer.cpp
*/

class NaiveString {
private:
	char *str;
public:
	NaiveString(const char*);
	//NaiveString(const NaiveString&);
	void update(char, char);
	void print();
	~NaiveString();
};

NaiveString::NaiveString(const char* t) {
	str = new char[strlen(t) + 1];
	strcpy(str, t);
	cout << "Creting a naive string using constructor with const char*"<<endl;
}

/* 
	Copy constructor: creates a new instance of 
	naive string starting from an existing one 



NaiveString::NaiveString(const NaiveString& src) {
	str = new char[strlen(src.str) + 1];
	strcpy(str, src.str);
	cout << "Creating a copy of existing string";
	cout << " using constructor with const NaiveString&" << endl;
}

 replaces occurrences of oldchar by newchar */
void NaiveString::update(char oldchar, char newchar) {
	unsigned int i;
	cout<<"Replacing the occurances of a character using update method"<<endl;
	for (i = 0; i < strlen(str); i++) 
		if (str[i] == oldchar)
			str[i] = newchar;
}

//prints the string
void NaiveString::print() {
	cout << str << endl;
}

//destructor method
NaiveString::~NaiveString()
{
	cout << "Destructing '" << str << "'..." << endl;
}

//replaces the characters by passing by value
void funcByVal(NaiveString s) {
	cout << "funcbyval() being called" << endl;
	s.update('B', 'C');
	cout << "Printing string after update method call" << endl;
	s.print();
}

//replaces the characters by passing by reference
void funcByRef(NaiveString &s) {
	cout << "funcbyref() being called" << endl;
	s.update('B', 'C');
	cout << "Printing string after update method call" << endl;
	s.print();
}


int main(int argc, char** argv)
{
	NaiveString a("aBcBdB");
	a.print();

	cout << "About to call funcbyval() " << endl;
	funcByVal(a);

	cout << "Printing original string after funcbyval() call" << endl;
	a.print();

	cout << "About to call funcbyref() " << endl;
	funcByRef(a);

	cout << "Printing the original string after funcbyref() call" << endl;
	a.print();

	cout << endl << endl;

	NaiveString temp ("BccBabdBBc"); 
				//temp string to create another string using copy constructor
	NaiveString s (temp);
	s.print();

	cout << "About to call funcbyval() " << endl;
	funcByVal(s);	
	
	cout << "Printing the original string after funcbyval() call" << endl;
	s.print();
	
	cout << "About to call funcbyref() " << endl;
	funcByRef(s);
	
	cout << "Printing the original string after funcbyred() call" << endl;
	s.print();


	return 0;
}