//Write a C++ Program to show access to Private Public and Protected using
//Inheritance
#include<iostream>
using namespace std;

//class create
class A
{
//	Access Specifier
//	private cannot be accessed from outside the class
	private:
		int a = 10;
//	public can accessible from outside the class
	public:
		int b = 20;
//	protected cannot be accessed from outside the class, however, they can be accessed in inherited classes
	protected:
		int c = 30;
	public:
//	function create
	void xyz()
	{
		cout<<"private: a "<<a<<endl;
		cout<<"public: b "<<b<<endl;
		cout<<"protected: c "<<c<<endl;
	}	
};
//Inheritance for protected specifier
class B:public A
{
//	Access sepcifier
	public:
//	function create
	void abc()
	{
		cout<<"Pubic: b "<<b<<endl;
		cout<<"Protected: c "<<c<<endl;
	}
};

int main()
{
//	object create
	B obj;
//	function call
	obj.xyz();
//	function call
	obj.abc();
}
