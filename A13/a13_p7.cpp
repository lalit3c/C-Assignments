//CH-230-B
//a13_p7.cpp
//Aarshika Singh
//aa.singh@jacobs-university.de
#include<iostream>
#include<vector>
#include<stdexcept>
//Adding libraries
int main()
{
    std::vector <int> v;
    //Creating a vector
    for(int i=0;i<=20;i++)
    {
        v.push_back(8);
    }
    //Pushing the value 8 20 times
    std::cout<<"The vector is: ";
    for(unsigned int i=0;i<v.size();i++)
    {
        std::cout<<v[i]<<" ";
    }
    //Printing the vector
    std::cout<<std::endl;
    try 
    {
        v.at(21)=8;

    }
    //Using try to get the value at position 21
    catch(const std::out_of_range& o)
    {
        std::cerr<<"Out of Range: "<<o.what()<<std::endl;
    }
    //Catching the error and printing it 
    return 0;
}