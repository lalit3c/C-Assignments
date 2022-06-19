/*
CH-230-A
a9_p6.cpp
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std; 
int main() 
{
	int number;
	int guess;
	int count = 0;
	int randomNumber;					// init random number generator 
	string name;
	srand(static_cast <unsigned int> (time(0)));
	
	randomNumber = rand();
	number = (randomNumber % 100) + 1; 	// limit the randomnumber to 100
	cout << "Enter your name: ";
	cin >> name;
	cout << "Pick a number between 1 and 100: ";

	bool a = true;
	while (a) 		//loops until the number is guessed
	{
		cin >> guess;
		if (guess == number)
		{
			count++;
			cout << "Congratulations "<< name; 
			cout << "! You guessed the number in "<< count <<" tries!" << endl;
			a = false;		//breaks out of loop
		}

		else if (guess < number)
		{
			count++;
			cout << "Too low! Enter a larger number: ";
		}

		else
		{
			count++;
			cout << "Too high! Enter a smaller number: ";
		}
	}


	
	return 0;
}