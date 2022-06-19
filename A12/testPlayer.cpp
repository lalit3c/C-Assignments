/*
CH-230-A
a12_p3.cpp
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include <iostream>
#include "TournamentMember.h"

int main ()
{
	//create 3 instances of players	
	Player a("Tom", "Holland", "2000-01-15", 164.2, 19, 99, "Defender", true, 0);

	Player b("Maria", "Turner", "1997-08-28", 160.4, 22, 10, "Striker", false, 5);

	Player c("Abram", "Harley", "1994-05-04", 162, 25, 32, "Mid-fielder", false, 2);
	

	b.increaseGoal(); //increament of goal scored by b
	
	//creates a refree
	Refree r("Sophiet", "Williams", "1990-01-21", 170.6, 29);

	r.addToYellowCardList(&a); //add a to yellowcard list
	r.addToYellowCardList(&b); //add b to yellowcard list
	r.addToYellowCardList(&a); //add a to yellowcard list again
							// moves a to redcard list
	r.addToRedCardList(&c); // add c to redcard list
	r.rPrint();

	

	return 0;


}