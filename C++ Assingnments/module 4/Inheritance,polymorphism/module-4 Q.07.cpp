//Write a C++ Program to illustrates the use of Constructors in multilevel
//inheritance
#include<iostream> 
using namespace std; 
  
// Base class 
class A 
{ 
    public: 
//    constructor
        A() 
        { 
            cout << "class A constructor \n"; 
        } 
}; 
  
// Derived class B 
class B: public A 
{ 
    public: 
    //    constructor
        B() 
        { 
            cout << "Class B constructor \n"; 
        } 
}; 
  
// Derived class C 
class C: public B 
{ 
    public: 
    //    constructor
        C() 
        { 
            cout << "Class C constructor \n"; 
              
        } 
}; 
  

int main() 
{ 
//	object create (constructor call when object create)
    C obj; 
    return 0; 
}
