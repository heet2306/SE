/*Write a C++ program to implement a class called Employee that has
private member variables for name, employee ID, and salary. Include
member functions to calculate and set salary based on employee
performance. Using of constructor*/

#include <iostream>
#include<string>

using namespace std;

class Employee{
	private:
		string name;
		int emp_id;
		int salary;
	public:
		Employee(string n,int id,int s)
		{
			name = n;
			emp_id = id;
			salary = s;
		}
		void displayDetails(){
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << emp_id << endl;
        cout << "Salary: " << salary << endl;
    }
		void setSalary(double performanceFactor) 
		{
       	 // Assume a base salary and adjust based on performance
        	double baseSalary = 50000.0;
        	salary = baseSalary * performanceFactor;
   		 }
	
		
};

int main()
{
	
	Employee obj("John Doe", 1001, 50000);
	
	obj.displayDetails();
	
	obj.setSalary(1.2);
	
	obj.displayDetails();
	return 0;
}
