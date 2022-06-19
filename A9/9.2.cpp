/*
CH-230-A
a9_p2.cpp
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include<iostream>
using namespace std;
int main()
{
	int n;
	double x;
	string s;

	cin >> n;
	cin >> x;
	getchar();					 // removes endline character
	getline(cin, s);

	int count = 0;
	while(count < n) 			// loop executes n times
	{
		cout << s << " : " << x << endl;
		count++;
	}
	return 0;

}