/*
CH-230-A
a12_p5.cpp
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//returns a random number between 0 and 3
int Choose()
{
	int randomNumber;
	randomNumber = rand(); //based on seed from srand
	srand(randomNumber);	//uses randomNumber as seed for next iteration
	return(randomNumber % 4); //limit output between 0 and 3
}

int main() 
{
	//array of coulours to be chosen from
	string arr[4] = { "RED", "BLACK" ,"VIOLET", "BLUE"};
	int i = 0;
	// init random number generator 
	srand(time(NULL));

	while(i < 15) //iterate 15 times
	{
		int index = Choose(); //random number genereated by Choose funcion
		cout << i + 1 << ". "<< arr[index]<< endl;	
		i++;
	}
	

	return 0; 
}