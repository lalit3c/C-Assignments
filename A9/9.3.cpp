/*
CH-230-A
a9_p3.cpp
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include<iostream>
using namespace std;

float absolute(float x) 					// returns absolute value of float x
{
	if(x < 0)
		return (0-x);

	else
		return x;
}

int main()
{
	float n;
	cout<<"Enter a float: ";
	cin >> n;

	cout<<"Absolute value is: " << absolute(n) << endl; 	
									//calls absolute function and prints the returned value

	return 0;
}