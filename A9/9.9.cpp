/*
CH-230-A
a9_p9.cpp
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include<iostream>
using namespace std;

void subtract_max (int* &a, int n) //subtracts max from each element
{
	int max = a[0];
	int i = 0;
	while (i < n)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
		i++;
	}

	for ( i = 0; i < n; i++)
	{
		a[i] = a[i] - max;
	}

}

void deallocate (int* &ptr)	//deallocate memory
{
	delete [] ptr;
}

int main()
{
	int n, i = 0;
	cin >> n;
	int *ptr = new int[n];

	for (i = 0; i < n; i++)
	{
		cin >> ptr[i];	//store the elements in array
	}

	subtract_max (ptr, n);

	for (i = 0; i < n; i++)
	{
		cout << ptr[i] <<" ";
	} 
	cout << endl;
	deallocate (ptr);

	return 0;
}