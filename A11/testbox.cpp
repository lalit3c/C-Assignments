/*
CH-230-A
a11_p1.cpp
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include <iostream>
#include "Box.h"
using namespace std;

int main()
{
	cout << "Number of boxes: ";
	int n, i;
	cin >> n;

	Box* list;
	list = new Box[2*n]; 		//allocate memory for 2n boxes
	double height, depth, width;
	for (i = 0; i < n; i++)		//collect data for n boxes
	{
		cout << "Height of box #" << i+1 << ": ";
		cin >> height;
		cout << "Width of box #" << i+1 << ": ";
		cin >> width;
		cout << "Depth of box #" << i+1 << ": ";
		cin >> depth;

		list[i].setHeight (height);
		list[i].setWidth (width);
		list[i].setDepth (depth);
		cout << endl;
	}

	for ( i = n; i < 2 * n; i++) //copy the remainder boxes with existing boxes
	{
		list[i] = Box(list[i - n]);
	}

	for ( i = 0; i < 2*n; i++)	//print the volume of boxes
	{
		cout << "Volme of Box #" << i+1 << " = "; 
		cout << list[i].Volume() << endl << endl;
	}

	//delete [] list;
	return 0;
}