/*
CH-230-A
a12 p2.[cpp]
Utkrist Uprety 
uuprety@jacobs-university.de
*/

#include<cstring>
#include<string>

class TournamentMember
{
private:
    char firstname[36];
    char lastname[36];
    char DOB[11];
    float height;
    int age;
    static std::string location;//static member

public:
	TournamentMember();
	//default constructor
	
    TournamentMember(const char firstname[],const char lastname[],const char DOB[],
                    float height,int age);//parametrized constructor
                    
                    
  
//Setter methods
    inline void setfirstname(char firstname[36])
    {
        strcpy(this->firstname,firstname);
    }
    inline void setlastname(char lastname[36])
    {
        strcpy(this->lastname,lastname);
    }
    inline void setDOB(char DOB[11])
    {
        strcpy(this->DOB,DOB);
    }
    inline void setheight(float height)
    {
        this->height=height;
    }
    inline void setage(int age)
    {
        this->age=age;
    }

    inline static void setLocation(std::string l)
    {
        location=l;
    }

//getter methods
    inline const char* getfirstname() const
    { 
        return firstname;
    }
    inline const char* getlastname() const
    {
        return lastname;
    }
    inline const char* getDOB() const
    {
        return DOB;
    }
   inline float  getheight() const
    {
        return height;
    }
    inline int getage() const
    {
        return age;
    }

    inline static std::string getLocation()
    {
        return location;
    }

    void print();
    ~TournamentMember();//destructor

};

class Player : public TournamentMember
{
	private:
		int number;
		std::string position;
		int number_of_goals;
		bool left_footed;
	
	public:
		Player ();
		Player (const char firstname[], const char lastname[], const char DOB[],
                float height,int age, int number, std::string position,
				 int number_of_goals, bool left_footed);
		Player (const Player& p);
		~Player ();
		void Print ();
		void increaseGoal();

		inline void setumber(int number)
    	{
        	this->number=number;
		}

		inline void setposition(std::string position)
		{
			this->position = position;
		}

		inline void setleft_footed(bool left_footed)
		{
			this->left_footed = left_footed;
		}


		inline int getumber() const
    	{
        	return number;
		}

		inline std::string getposition() const
		{
			return position;
		}

		inline bool getleft_footed() const
		{
			return left_footed;
		}

		inline int get_goals_scored () const
		{
			return number_of_goals;
		}
};
