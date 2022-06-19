/*
CH-230-A
a12 p2.[cpp]
Utkrist Uprety
uuprety@jacobs-university.de
*/

#include <iostream>
#include <string>
#include "TournamentMember.h"

using namespace std;

TournamentMember::TournamentMember(){
	cout<<"\n Default Constructor being called\n"<<endl;
	height=0;
	age=0; 
}

TournamentMember::TournamentMember(const char firstname[36], const char lastname[36],
const char DOB[11],float height,int age){

    cout<<"\n Parameterized Constructor  being called\n"<<endl;
    strcpy(this->firstname,firstname);
    strcpy(this->lastname,lastname);
    strcpy(this->DOB,DOB);
    this->height=height;
    this->age=age;

}


string TournamentMember::location = "Munich";

void TournamentMember::print(){
  
    cout<<"First Name   : "<<this->firstname<<endl;
    cout<<"Last  Name   : "<<this->lastname<<endl;
    cout<<"Date Of Birth: "<<this->DOB<<endl;
    cout<<"Height      : "<<this->height<<endl;
    cout<<"Age         : "<<this->age<<endl;
    cout<<"Location    : "<<location<<endl;

}
TournamentMember::~TournamentMember(){
    cout<<"\n Destructor being called \n"<<endl;
}

Player::Player() : TournamentMember()
{
	cout<<"\n Default Player Constructor being called\n"<<endl;
	number = 0;
	position = "Default";
	number_of_goals = 0;
	left_footed = false;
}

Player::Player (const char firstname[],const char lastname[], const char DOB[],
	float height,int age, int number, std::string position,int number_of_goals,
	 bool left_footed) : TournamentMember(firstname, lastname, DOB, height, age)
{
	cout<<"\n Parameterized Player Constructor  being called\n"<<endl;
	this->number = number;
	this->position = position;
	this->number_of_goals = number_of_goals;
	this->left_footed = left_footed;

}

Player::~Player()
{
	cout<<"\n Player's Destructor being called \n"<<endl;
}

void Player::increaseGoal()
{
	this->number_of_goals++;
}

void Player::Print()
{
	TournamentMember::print();
	cout<<"Number      : "<<this->number<<endl;
    cout<<"Position    : "<<this->position<<endl;
    cout<<"Goals Scored: "<<this->number_of_goals<<endl;

	if (left_footed)
	{
		cout<<"Left Footed"<<endl;
	}
	else
	{
		cout<<"Right Footed"<<endl;
	}
	cout << endl;

}






