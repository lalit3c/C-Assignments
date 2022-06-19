/*
CH-230-A
a12 p2.[cpp]
Utkrist Uprety
u.uperty@jacobs-university.de@jacobs-university.de
*/
#include<iostream>
#include "TournamentMember.h"

using namespace std;

int main ()
{

    char firstname [36]= "Tony";
    char lastname [36]= "Kross";
    char DOB [11]= "2000-07-12";
    TournamentMember T1 (firstname,lastname,DOB,5.8,19);
    T1.setLocation("Bremen");
    T1.print();

	Player P1("Naam", "naam", "1998-10-22", 6.0, 21, 45, "Mid-fielder", 3, true);
	Player P2("bla", "bla", "2000-04-12", 5.9, 19, 88, "Striker", 7, false);
	P1.Print();
	P2.Print();
	P2.increaseGoal();
	P2.Print();

    return 0;
}
