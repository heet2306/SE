/*Write a C++ program to create a class called Person that has private
member variables for name, age and country. Implement member
functions to set and get the values of these variables.
*/
#include <iostream>
#include<string>

using namespace std;
//class create

class Person
{
//	Access Specifier
	private:
		string name;
		string country;
		int age;
//	Access Specifier
	public:
//		set function create
		void SetName(string n)
		{
			name = n;
		}
//		set function create
		void SetCountry(string c)
		{
			country = c;
		}
//		set function create
		void SetAge(int a)
		{
			age = a;
		}
//		get function create
		string GetName()
		{
			return name;
		}
//		get function create
		string GetCountry()
		{
			return country;
		}
//		get function create
		int GetAge()
		{
			return age;
		}
};
int main()
{
//	object create 
	Person obj;
//	set function call
	obj.SetName("Abc Xyz");
	obj.SetCountry("India");
	obj.SetAge(25);
	
//	get function call
	cout<<obj.GetName()<<endl;
	cout<<obj.GetCountry()<<endl;
	cout<<obj.GetAge()<<endl;
	
	return 0;
}
