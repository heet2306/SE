/*Write a C++ program to create a class called Car that has private
member variables for company, model, and year. Implement member
functions to get and set these variables.*/

#include<iostream>
#include<string>
using namespace std;

//class create
class Car
{
//	Access Specifier
	private:
		string company;
		string model;
		int year;
//	Access Specifier
	public:
//		set function
		void SetCompany(string c)
		{
			company = c;
		}
//		set function
		void SetModel(string m)
		{
			model = m;
		}
//		set function
		void SetYear(int y)
		{
			year = y;
		}
//		get function
		string GetCompany()
		{
			return company;
		}
//		get function
		string GetModel()
		{
			return model;
		}
//		get function
		int GetYear()
		{
			return year;
		}
};
int main()
{
//	object create
	Car obj;
	
//	set function call
	obj.SetCompany("CAR");
	obj.SetModel("BMW");
	obj.SetYear(2012);
	
//	get function call
	cout<<obj.GetCompany()<<endl;
	cout<<obj.GetModel()<<endl;
	cout<<obj.GetYear()<<endl;
	
	return 0;
}
