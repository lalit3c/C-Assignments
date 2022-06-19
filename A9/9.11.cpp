/*
CH-230-A
a9_p11.cpp
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include<iostream>
#include<string>
using namespace std;

bool isPalindrome( string s)
{
	int i = 0, test = 0;
	int n = (int) s.length(); 		// n = length of the word

	for ( i = 0; i < n/2; i++)		
	{
		if (s[i] == s[n-1-i])
		{
								// compare the first and last characters
		}
		else
		test++;				// remember if any letter didnt match
	}

	if (test == 0)
	{
		return true;
	}
	else
		return false;
}

int main()
{
	bool a = true;
	string word;
	while (a)
	{
		cout << "Enter a word: ";
		cin >> word;

		if (word == "exit")
		{
			exit(1);
		}

		if (isPalindrome(word))			//calls isPalindrome fucntion
		{
			cout << word << " is a Palindrome!" << endl;
		}
		else
		{
			cout << word << " is NOT a Plaindrome!" << endl;
		}

		cout << "Test another word? [Y/N]: ";
		char x;
		cin >> x;
		if (x == 'y' || x == 'Y')	
		{
						// do nothing, loop again
		}
		else
		{
			a = false;		//breaks out of loop;
		}
	}
	return 0;
}