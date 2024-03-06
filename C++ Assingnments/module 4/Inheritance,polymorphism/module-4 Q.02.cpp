//Write a C++ Program to find Area of Rectangle using inheritance

#include<iostream>
using namespace std;
//base class
class Rectangle{
//	Access Specifier
	public:
		int length;
		int breadth;
//		function create
		void input()
		{
			cout<<"Enter length: ";
			cin>>length;
			cout<<"Enter breadth: ";
			cin>>breadth;
		}
};
//derived class
class calculation : public Rectangle{
//	Access Specifier
	public:
//		function create
		float area()
		{
			return length * breadth;
		}
		
};
int main()
{
//	object create
	calculation obj;
	
//	function call
	obj.input();
	
//	function call
	cout<<"Area of Rectangle:"<<obj.area()<<endl;
}
