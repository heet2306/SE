/*Write a C++ program to create a class called Triangle that has private
member variables for the lengths of its three sides. Implement member
functions to determine if the triangle is equilateral, isosceles, or scalene.*/

#include<iostream>
using namespace std;
//class create
class Triangle
{
//	Access Specifier
	private:
		int side1;
		int side2;
		int side3;
//	Access Specifier
	public:
//		function create
		void UserInput()
		{
			cout<<"Enter First Side Of Triangle: ";
			cin>>side1;
			cout<<"Enter Second Side Of Triangle: ";
			cin>>side2;
			cout<<"Enter Third Side Of Triangle: ";
			cin>>side3;
		}
		
//		function create
		void TriangleCheck()
		{
//			condition to check which triangle is
			if(side1 == side2 && side2 == side3)
			{
				cout << "Equilateral Triangle";
			}
			else if(side1 == side2 || side2 == side3 || side3 == side1)
			{
				cout << "Isosceles Triangle";
			}
			else
			{
				cout << "Scalene Triangle";
			}
		}
};

int main()
{
//	object create
	Triangle obj;
	
//	function Call
	obj.UserInput();
	obj.TriangleCheck();
	
	return 0;
}
