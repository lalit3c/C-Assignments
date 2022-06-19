/*
CH-230-A
a13_p4.cpp
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/
#include<iostream>
using namespace std;
 
class A
{
  int x;
public:
  void setX(int i) {x = i;}
  void print() { cout << x; }
};
 
class B:  public A
{
public:
  B()  { setX(10); }
};
 
class C:  public A  
{
public:
  C()  { setX(20); }
};
 
class D: public B, public C {
};
 
int main()
{
    D d;
    d.B::print();
    return 0;
}

/*Type of Error: Ambiguous 'print' method as well as value of x for object d
as d is derived from classes B and C, each with conflicting values of x */

/* In line 36, we explicitly force the complier to follow a path through class 
B for construction of object d. Hence, resolving the conflicting value and
ambiguity */