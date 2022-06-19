/*
CH-230-A
a13_p7.cpp
Mahiem Agrawal
m.agrawal@jacobs-university.de
*/
#include <iostream>
#include <vector>
using namespace std; 


int main()
{
    vector<int> vect(20, 8); 
    try
    {
       cout<<vect.at(21)<<endl;
    }
    catch(out_of_range& temp)
    {
        cerr << "Out of Range error taking place in " << temp.what() << endl;
    }
    return 0; 
}