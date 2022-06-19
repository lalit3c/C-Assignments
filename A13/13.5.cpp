/*
CH-230-A
a13_p5.cpp
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include<iostream>
using namespace std;
 
class A
{
  int x;
public:
  A(int i) { x = i; }
  //A() { x = 10;}
  void print() { cout << x; }
};
 
class B: virtual public A
{
public:
  B():A(10) {  }
};
 
class C:  virtual public A 
{
public:
  C():A(10) {  }
};
 
class D: public B, public C {
	public:
	D() : A(10) {}
};
 
int main()
{
    D d;
    d.print();
    return 0;
}

/*Type of Error: for object d of class D, the default constructor requires the 
default constructor of class A which is missing */

/*Solution : Adding a default constructor of D, which calls a parametric 
constructor of A */
// Alternatively, adding a default constructor of A