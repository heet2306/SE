/*Write a C++ program to implement a class called Student that has private
member variables for name, class, roll number, and marks. Include
member functions to calculate the grade based on the marks and display
the student's information. Accept address from each student implement
using of aggregation*/

#include<iostream>
#include<string>
using namespace std;
//class create 
class Address{
//	Access Specifier
	public:
		string state;
		string city;
		int pin;
//		Constructor
	Address(string state,string city,int pin)
	{
		this->city = city;
		this->state = state;
		this->pin=pin;
	}
		
};
//class create
class Student{
//	Sccess Specifier
	private:
		string name;
		int std_class;
		int roll_number;
//		pointer aggregation
		Address *address;
//		Access Specifier
		public:
//		Constructor
		Student(string name,int std_class,int roll_number,Address *address)
		{
			this -> name = name;
			this -> std_class = std_class;
			this -> roll_number = roll_number;
			this -> address = address;
		}
//		function create
		void displaystd()
			{
				cout<<"student details ---------------\n";
				
				cout<<"student Name: "<<name<<endl;
				cout<<"Class: "<<std_class<<endl;
				cout<<"roll_number: "<<roll_number<<endl;
				cout<<"city: "<<address ->city<<endl;
				cout<<"state: "<<address->state<<endl;
				cout<<"pin: "<<address->pin<<endl; 
			}
//		Function create
		float grade()
		{
			float marks;
			cout<<"Enter Student marks: ";
			cin>>marks;
			if (marks >= 60)
			{
				cout << "Grade A" << endl;
			}
    		else if (marks > 35 && marks < 60)
			{
    			cout << "Grade B" << endl;
			}
    		else
    		{
    			cout << "Grade C" << endl;
			}
		}
};

int main()
{
//	object create with aggregation
	Address Add("Gujarat","Ahamdabad",23104);
	
//	student details
//	object create
	Student std("xyz",5,45,&Add);
//	function call with object
	std.displaystd();
//	function call with object
	std.grade();
	cout<<endl;
	cout<<"2nd ";
//	object create	
	Student std1("Abc",5,56,&Add);
//	function call with object
	std1.displaystd();
//	function call with object
	std1.grade();
	
	return 0;
}
