/*Create a class person having members name and age. Derive a class student
having member percentage. Derive another class teacher having member
salary. Write necessary member function to initialize, read and write data.
Write also Main function (Multiple Inheritance)*/

#include<iostream>
#include<string>
using namespace std;

//class create
class person
{
	public:
		string name;
		int age;
//		read data
		void readperson()
		{
			cout<<"Enter name: ";
			cin>>name;
			cout<<"Enter Age: ";
			cin>>age;
		}
//		write data
		string writeperson()
		{
			return name;
		}
//		write data
		int writepersonAge()
		{
			return age;
		}
};

//Derive class person
class Student : public person{
	public:
		float percentage;
		
//		read data
		void readStudent()
		{
			cout<<"Enetr percentage: ";
			cin>>percentage;
		}
//		write data
		float writepercentage()
		{
			return percentage;
		}
};
//Derive class Student
class Teacher : public Student{
	public:
		int salary;
//		read data
		void readTeacher()
		{
			cout<<"Enter salary: ";
			cin>>salary;
		}
//		write data
		int writesalary()
		{
			return salary;
		}
};

int main()
{
//	object create
	Teacher obj;
	
	obj.readperson();
	obj.readStudent();
	obj.readTeacher();
	
	cout<<"Name: "<<obj.writeperson()<<endl;
	cout<<"Age: "<<obj.writepersonAge()<<endl;
	cout<<"Percentage: "<<obj.writepercentage()<<endl;
	cout<<"Salary: "<<obj.writesalary()<<endl;
	
	
	return 0;
}
