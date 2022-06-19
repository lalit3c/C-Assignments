//CH-230-B
//a13_p9.cpp
//Aarshika Singh
//aa.singh@jacobs-university.de
#include<iostream>
#include<exception>
using namespace std;

class OwnException : public exception
{
    public:
    virtual const char* what() const throw()
    {
        return "This motor has problems";
    }
}d;
//Making ownexception class

class Motor
{
    public:
    Motor()
    {
         throw d;

    }
};
//Class motor which will throw d, which is an object
//of OwnException class
class Garage
{
    public:
    Garage()
    { 
        try
        {
            Motor();
        }
        //Trying making a Motor using
        //deafukt constructor
        catch(...)
        {
            std::cerr <<d.what()<< '\n';
            throw 'b';
        }
        //Catching the error printing it and
        //throwing a character b
            
    }

};
//Class Garage

class Car
{
    public:
        Car()
        {
            try
            {
                Garage();
            }
            //Trying to make garage using default constructor
            catch(char)
            {
                throw "The car in this garage has problems with the motor";
            }
            //Catching the character and printing an error
            
        }
};
//Class Car
int main()
{
    try
    {
        Car();
    }
    //Trying to make a Car using deafult constructor
    catch(char const* s)
    {
        std::cerr <<s<< '\n';
    }
    //Catching the string and printing the error
    
return 0;

}
// Sequence-
// Motor throws exception
// Garage catches the exception and throws another exception
// Car catches he exception and throws yet another exception
// The exception is caught in the main