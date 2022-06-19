/*
CH-230-A
a9_p5.cpp
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include<iostream>
using namespace std;

int main()
{
	string result;
	bool a = true;
	while(a)
	{
		string s;
		cin >> s;
		if ( s == "quit")
		{
			cout << result << endl;
			a = false;
		}

		else
		result = result + s; //concatenate string


	}
	return 0;
}