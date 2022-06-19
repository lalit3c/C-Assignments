/*
CH-230-A
a9_p8.cpp
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include <iostream>
using namespace std;

//swapping integers
void swapping(int &a, int &b) 
{
	int intermediate = a;
	a = b;
	b = intermediate;
}

//swapping floats
void swapping(float &a, float &b) 
{
	float intermediate = a;
	a = b;
	b = intermediate;
} 

//swapping pointers to chars
void swapping (const char* &a, const char* &b) 
{
	const char* intermediate = a;
	a = b;
	b = intermediate;

}



int main(void) 
{
	//initialising variable
	int a = 7, b = 15;
	float x = 3.5, y = 9.2;
	const char *str1 = "One";
	const char *str2 = "Two";
	
	cout << "a = " << a << ", b = " << b << endl;
	cout << "x = " << x << ", y = " << y << endl;
	cout << "str1 = "<< str1 << ", str2 = " << str2 << endl;
	
	//swapping the variables
	swapping(a, b);
	swapping(x, y);
	swapping(str1, str2);
	cout << "After Swapping:" << endl;
	cout << "a = " << a << ", b = " << b << endl;
	cout << "x = " << x << ", y = " << y << endl;
	cout << "str1 = " << str1 << ", str2 = " << str2 << endl; 
	
	return 0;
}