/*
CH-230-A
a9_p7.cpp
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include<iostream>
using namespace std;

int myfirst(int arr[], int n)	//returns the first positive and even value
{
	int i = 0;
	for(i = 0; i < n; i++)
	{
		if ( (arr[i] > 0) && (arr[i] % 2 == 0))
		{
			return arr[i];
		}
	}
	return -1;	// if no such element is found
}

double myfirst(double arr[], int n) //returns the first negative integer 
{
	int i = 0;
	for(i = 0; i < n; i++)
	{
		if ( (arr[i] < 0) && (arr[i] -(int) arr[i] == 0))
		{
			return arr[i];
		}
	}
		
	return -1.1; 		// if no such element is found
}

char myfirst(char arr[], int n)	//returns first consonant in the array
{
	char vowels[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
	int i = 0, j = 0;
	for(i = 0; i < n; i++)
	{
		int test = 0;
		for(j = 0; j < 10; j++)
		{
			if (arr[i] == vowels[j])
			{
				test = 1;
				break;
			}
		}
	
		if (test == 0)
		{
			return arr[i];	// if consonant is found
		}

	}	
	return '0';	// if no such element is found
	
	

}

int main()
{
	int i_arr[] = {1, -4, 3, 6, 5};
	double f_arr[] = {5, 6.7, 7.8, -4.5, -3};
	char c_arr[] = {'a', 'e', 'i', 'I', 'p'};

	cout << myfirst(i_arr, 5) << endl;
	cout << myfirst(f_arr, 5) << endl;
	cout << myfirst(c_arr, 5) << endl;

	return 0;
}