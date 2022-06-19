/*
CH-230-A
a12_p4.cpp
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include <iostream>
#include <cstring>
#include "TournamentMember.h"

using namespace std;

//default location set to Bremen
string TournamentMember::Location = "Bremen"; 

//changes location of all tournament members
void TournamentMember::ChangeLocation(std::string a)
{
	Location = a;
	cout << "Changing location of all members..." << endl;
}

//defualt constructor
TournamentMember::TournamentMember()
{
	strcpy(FirstName, "Default_FirstName");
	strcpy(LastName, "Default_LastName");
	strcpy(DOB, "0000-00-00");
	height = 0;
	Age = 0;

	cout << "Defualt TournamentMember constructor called!" << endl;

}

TournamentMember::TournamentMember(const char* a, const char* b, 
								const char* c, float p, int q)
{
	strncpy(FirstName, a, 35); //copy first 35 bytes from a to firstname
	FirstName[35] = '\0';  // make first name null terminated
	strncpy(LastName, b, 36);
	LastName[36] = 0;
	strncpy(DOB, c, 10);
	DOB[10] = '\0';
	height = p;
	Age = q;

	cout << "Parametric TournamentMember constructor called!" << endl;
}
//copy constructor
TournamentMember::TournamentMember(const TournamentMember& p)
{
	strcpy(FirstName, p.FirstName);
	strcpy(LastName, p.LastName);
	strcpy (DOB, p.DOB);
	height = p.height;
	Age = p.Age;

	cout << "TournamentMember's Copy constructor called!" << endl;
}

TournamentMember::~TournamentMember()
{
	cout << "TournamentMember's Destructor called!" << endl;
}

//print info of a tournament member
void TournamentMember::Print()
{
	cout << ".........................." << endl;
	cout << "Name: " << FirstName << " " << LastName << endl;
	cout << "Date of Birth: " << DOB << endl;
	cout << "Height: " << height << " cm" << endl;
	cout << "Age: " <<  Age << " Years" << endl;
	cout << "Current Location: " << Location << endl;
	
}

//default Player constructor
Player::Player()
{
	TournamentMember();
	number = 00;
	position = "Default_position";
	right_footed = true;
	goals = 0;

	cout << "Default Player constructor called" << endl;
}

Player::Player(const char* a, const char* b, const char* c, float p, int q,
int n, std::string s, bool t, int g) : TournamentMember(a, b, c, p, q)
//create TournamemtMember first with general properties
{
	
	number = n;
	position = s;
	right_footed = t;
	goals = g;

	cout << "Paremetric Player constructor called" << endl;
}

Player::Player(const Player& c) : TournamentMember(c.getFirstName(), 
			c.getLastName(), c.getDOB(), c.getHeight(), c.getAge())
//copy general properties of TournamemtMember class first
{
	
	number = c.number;
	position = c.position;
	right_footed = c.right_footed;
	goals = c.goals;

	cout << "Player's Copy constructor called" << endl;
}

Player::~Player()
{
	cout << "Player's Destructor called" << endl;
}

void Player::increaseGoal()
{
	goals++;
}

void Player::print()
{
	this->Print(); //print the general properties of TournamentMember class
	cout << "Jersey Number: " << number << endl;
	cout << "Position: " << position << endl;
	if (right_footed)
	{
		cout << "Right Footed" << endl;
	}
	else
	{
		cout << "Left Footed" << endl;
	}
	cout << "Number of goals: " << goals << endl;
	cout << "..........................." << endl;
	
}

//default constructor of Referee
Referee::Referee() : TournamentMember()
{
	yellowCardCount = 0;
	*yellowCardList = NULL;
	redCardCount = 0;
	*redCardList = NULL;

	cout << "Default Referee constructor called!" << endl;
	
}

Referee::Referee(const char *a, const char *b, const char *c, float p, int q,
int y, Player* yl, int r, Player* rl) : TournamentMember(a, b, c, p, q)
{
	yellowCardCount = y;
	*yellowCardList = yl;
	redCardCount = r;
	*redCardList = rl;	
	cout << "Parametric Referee constructor called!" << endl;
}

Referee::Referee (const Referee& c) : TournamentMember(c.getFirstName(), 
			c.getLastName(), c.getDOB(), c.getHeight(), c.getAge())
{
	yellowCardCount = c.yellowCardCount;
	*yellowCardList = *c.yellowCardList;
	redCardCount = c.redCardCount;
	*redCardList = *c.redCardList;

	cout << "Referee's Copy constructor called!" << endl;
}

bool Referee::addToYellowCardList (Player *p)
{
	int i,j;
	for ( i = 0; i < this->yellowCardCount; i++)
	{
		if (yellowCardList[i] == p) //if the player is already in list
		{
			addToRedCardList(p); //move to redcard list

			//to remove from yellowcard list
			for (j = i; j < yellowCardCount; j++)
			{
				yellowCardList[j] = yellowCardList[j+1];
			}
			this->yellowCardCount--; //decrease the count
			return false; //couldnot add to yellow card list
		}

	}
	yellowCardList[this->yellowCardCount] = p; 
	this->yellowCardCount++;
	return true;

}
bool Referee::addToRedCardList (Player *p)
{
	int i;
	for ( i = 0; i < this->redCardCount; i++)
	{
		if (redCardList[i] == p) //if already in redcard list
		{
			return false; //do nothing, cannot add again
		}

	}
	redCardList[this->redCardCount] = p;
	this->redCardCount++;
	return true;
}

Referee::~Referee()
{
	cout << "Destructing a Referee" << endl;
}

void Referee::rPrint()
{
	TournamentMember::Print();
	cout << "Yellow Card Count: " << yellowCardCount << endl;
	cout << "Red Card Count: " << redCardCount << endl;
	cout << "Yellow Card List Players: " << endl;
	int i;
	for (i = 0; i < yellowCardCount; i++)
	{
		cout << yellowCardList[i]->getFirstName() << " " << 
					yellowCardList[i]->getLastName() << endl;
	}

	cout << "Red Card List Players: " << endl;
	for (i = 0; i < redCardCount; i++)
	{
		cout << redCardList[i]->getFirstName() << " " << 
					redCardList[i]->getLastName() << endl;
	}

	cout << "..........................." << endl;

}