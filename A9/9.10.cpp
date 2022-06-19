/*
CH-230-A
a9_p10.cpp
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include<iostream>
#include<string>
using namespace std;

int main()
{
	string array[17] = {"computer", "television", "keyboard", "laptop",
						"mouse", "random", "test", "make", "seventeen",
						"programming", "string", "reach", "twelve", "elements", 
						"search", "done", "desktop"};

	char vowels[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};


	int number, i, j;
	string guess;
	
	int randomNumber;						// init random number generator 
	srand(static_cast <unsigned int> (time(0)));
	
	bool a = true, b = true;

	while (a) 							//loops until the string is guessed
	{
		int count = 0;
		randomNumber = rand();
		number = (randomNumber % 17) + 1; 	// limit the randomnumber to 17

		string copy = array [number];		// makes a copy of random string
		for (i = 0; i < (int)copy.length(); i++)
		{
			for (j = 0; j < 10; j++)
			{
				if (copy[i] == vowels [j])
				{
					copy[i] = '_';		//replace vowels with underscores
				}

			}
		}
		cout << copy <<endl;		//prints the word to guess
		
		while (b)
		{
			
			cin >> guess;
			if(guess == "quit")
			{
				exit(1);
			}
			count++;

			if ( array[number] == guess)
			{
				cout << "Congrats! You guessed the word";
				cout << " in " << count << " attempts" << endl;

				b = false;						//ends one round of the game
				cout << "Play again?[Y/N]: ";	//asks for continuing game
				char x;
				cin >> x;

				if (x == 'y' || x == 'Y')
				{
					b = true;			// resets 'b' for new game
					break;	// break out of smaller loop and starts new game
					
				}
				else
				{
					a = false;	//breaks out of main loop
					
				}
			}		
			
		}

	}
	return 0;
}

