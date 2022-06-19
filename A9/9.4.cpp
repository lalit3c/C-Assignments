/*
CH-230-A
a9_p4.cpp
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include<iostream>
#include<string>
using namespace std;

int mycount (int a, int b) 	// returns the difference of b and a
{
	return (b-a);
}

int mycount(char a, string s) 	//return the no. of occurance of a in s
{
	int i = 0;
	int count = 0;
	for(i = 0; i < (int)s.length(); i++) //loop until end of the string
	{
		if (s[i] == a)
		{
			count++;
		}
	}
	return count;
}

int main()
{
	//initialising the variables
	int x = 7, y = -3;
	char c = 'i';
	string s = "This is a string";

	cout<< "Calling function with integers returns " << mycount (x,y) << endl;
	cout<< "Calling function with string returns " << mycount (c,s) << endl;

	return 0;
}