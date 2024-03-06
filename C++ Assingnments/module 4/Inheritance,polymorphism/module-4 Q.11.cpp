/*Write a program to calculate the area of circle, rectangle and triangle
using Function Overloading
Rectangle: Area * breadth
Triangle: ½ *Area* breadth
Circle: Pi * Area *Area*/

#include<iostream>

using namespace std;
class calculate
{
	public:
		
		
		double calculateArea(double radius)
		{
			return 3.14 * radius*radius;
		}
		
		double calculateArea(double lenght, double breadth)
		{
			return lenght * breadth;
		} 
		float calculateArea(float base, float height)
		{
			return 0.5 * base * height;
		} 
};
int main()
{
	double radius;
	double length;
	double breadth;
	float base;
	float height;
	
	cout<<"Enter the length of Rectangle: ";
	cin>>length;
	
	cout<<"Enter the breadth of Rectangle: ";
	cin>>breadth;
	
	cout<<"Enter the base of Triangle: ";
	cin>>base;
	cout<<"Enter the height of Triangle: ";
	cin>>height;
	
	cout<<"Enter the radius of circle: ";
	cin>>radius;
	
	
	
	
	calculate obj;
	cout<<"Area of Rectangle is: "<<obj.calculateArea(length,breadth)<<endl;
	cout<<"Area of Triangle is: "<<obj.calculateArea(base,height)<<endl;
	cout<<"Area of circle is: "<<obj.calculateArea(radius)<<endl;
	
	return 0;
}
