//Write a C++ Program display Student Mark sheet using Multiple inheritance

#include<iostream>
#include<string>
using namespace std;
//class create parent class
class Student{
	public:
		string name;
		int roll_no;
//		get data
		void getStudent()
		{
			cout<<"Enter name: ";
			cin>>name;
			cout<<"Enetr Roll_NO: ";
			cin>>roll_no;
		}
//		set data
		string setname()
		{
			return name;
		}
//		set data
		int setRollNo()
		{
			return roll_no;
		}
};
//class cerate derived Student
class marks :public Student{
	public:
		int marks;
//		get data
		void getmarks()
		{
			cout<<"Enter Marks: ";
			cin>>marks;
		}
//		set data
		int setmarks()
		{
			return marks;
		}
};
//class create derived marks
class grade : public marks{
	public:
		int grade;
//		function create
		void gradecal()
		{
			if(marks >= 90)
			{
				cout<<"A";
			}
			else if(marks < 90 && marks >= 60)
			{
				cout<<"B";
			}
			else
			{
				cout<<"C";
			}
		}
		
};

int main()
{
//	object create
	grade obj;
	
	obj.getStudent();
	obj.getmarks();
	
	
	cout<<"****Student Mark sheet****"<<endl;
	cout<<"Name: "<<obj.setname()<<endl;
	cout<<"Roll Number: "<<obj.setRollNo()<<endl;
	cout<<"Marks: "<<obj.setmarks()<<endl;
	cout<<"Grade: ";obj.gradecal();
	
	
	return 0;
}
