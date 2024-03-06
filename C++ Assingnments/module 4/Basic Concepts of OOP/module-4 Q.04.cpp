/*Write a C++ program to implement a class called Circle that has private
member variables for radius. Include member functions to calculate the
circle's area and circumference.*/
#include<iostream>
using namespace std;
//class create
class Cirlce{
//	Access Specifier
	private:
	float radius;
//	Access Specifier	
	public:
//		constrctor
		Cirlce(float r)
		{
			radius = r;
		}
//		function to find area
		float area()
		{
			return 3.14*radius*radius;
		}
//		finction to find circumference
		float circumference()
		{
			return 2 * 3.14*radius;
		}
};
int main()
{
	
	float radius;

	
	cout<<"Enter radius of circle:";
	cin>>radius;
	
	//	object create
	Cirlce obj(radius);
	
	cout<<"the area of circle is:"<<obj.area()<<endl;
	cout<<"the circumference of circle is:"<<obj.circumference()<<endl;
	
	
	return 0;
}
