/*Write a C++ program to create a class called Rectangle that has private
member variables for length and width. Implement member functions to
calculate the rectangle's area and perimeter.*/

#include <iostream>
using namespace std;
//class create
class Rectangle{
//	Access specifier
	private:
		float length;
		float width;
//	Access specifier
	public:
//		constructor
		Rectangle(float len,float wid)
		{
			length=len;
			width=wid;
		}
//		function for area
		float area()
		{
			return length * width;
		}
//		function for perimeter
		float perimeter()
		{
			return 2 * (length + width);
		}
};

int main()
{
	int length;
	int width;
	
	cout<<"Enter the lenght of Rectangle:";
	cin>>length;
	cout<<"Enter the width of Rectangle:";
	cin>>width;
	
//	object create
	Rectangle obj(length,width);
	
//	function call
	cout<<"Area:"<<" "<<obj.area()<<endl;
//	function call
	cout<<"perimeter:"<<" "<<obj.perimeter()<<endl;	
	return 0;
}
