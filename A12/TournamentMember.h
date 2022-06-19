/*
CH-230-A
a12_p4.h
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include<iostream>
#include<cstring>

class TournamentMember
{
	private:
		//private data of tournament members
		char FirstName[36];
		char LastName[37];
		char DOB[11];
		float height;
		int Age;
		static std::string Location; //location is common to all members

	public:
		//contrsictors
		TournamentMember();
		TournamentMember(const char *, const char *, const char *, float, int);
		TournamentMember(const TournamentMember&);
		//Destructor
		~TournamentMember();

		//setter methods
		void setFirstName(const char[] ); 
		void setLastName(const char[] );
		void setDOB(const char[] ); 
		void setHeight (float );
		void setAge (int );

		//getter methods
		const char* getFirstName() const;
		const char* getLastName() const ;
		const char* getDOB() const ;
		float getHeight () const ;
		int getAge () const ;

		void Print();
		//statitc method
		static void ChangeLocation(std::string);

};


class Player : public TournamentMember
{
	private:
		//private data of Players
		int number;
		std::string position;
		int goals;
		bool right_footed;
	
	public:
		//constructors
		Player();
		Player(const char *, const char *, const char *, float, int,
									 int, std::string, bool, int = 0);
		Player(const Player&);
		~Player();

		//setter methods
		void setNumber( const int);
		void setPosition(const std::string);
		void setFooted(const bool);

		//getter methods
		int getNumber() const;
		std::string getPosition() const;
		bool getFooted() const;

		void print();
		void increaseGoal();

};

class Referee : public TournamentMember
{
	private:
		//private data of referees
		int yellowCardCount;
		Player* yellowCardList[40];
		int redCardCount;
		Player* redCardList[40];
	
	public:
		//methods to add players to list
		bool addToYellowCardList (Player *p);
		bool addToRedCardList (Player *p);

		//constructors
		Referee();
		Referee(const char *, const char *, const char *, float, int,
				int = 0, Player* = NULL, int = 0, Player* = NULL);
		Referee(const Referee&);
		~Referee();

		//print the details of referee
		void rPrint();

};


// inline setter methods
inline void TournamentMember::setFirstName(const char p[])
{
	strcpy(FirstName, p);
}

inline void TournamentMember::setLastName(const char p[]) 
{
	strcpy(LastName, p);
}
inline void TournamentMember::setDOB( const char p[]) 
{
	strcpy(DOB, p);
}		
inline void TournamentMember::setHeight (float p) 
{
	height = p;
}
inline void TournamentMember::setAge (int p) 
{
	Age = p;
}

//inline getter methods
inline const char* TournamentMember::getFirstName() const
{ 
	return this->FirstName;
}
inline const char* TournamentMember::getLastName() const
{ 
	return this->LastName;
}
inline const char* TournamentMember::getDOB() const
{ 
	return this->DOB;
}
inline float TournamentMember::getHeight () const 
{ 
	return height;
}
inline int TournamentMember::getAge () const 
{ 
	return Age;
}

//inline setter methods for Players class
inline void Player::setNumber( const int n) 
{
	number = n;
}
inline void Player::setPosition(const std::string a)
{
	position = a;
}
inline void Player::setFooted(const bool p)
{
	right_footed = p;
}

//inline getter methods for Players class
inline int Player::getNumber() const
{
	return number;
}
inline std::string Player::getPosition() const
{
	return position;
}
inline bool Player::getFooted() const
{
	return right_footed;
}
