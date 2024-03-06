/*Assume that the test results of a batch of students are stored in three different
classes. Class Students are storing the roll number. Class Test stores the
marks obtained in two subjects and class result contains the total marks
obtained in the test. The class result can inherit the details of the marks
obtained in the test and roll number of students. (Multilevel Inheritance)*/

#include<iostream>
using namespace std;
class Students {
    public:
        int roll_number;

};

class Test : public Students {
    public:
        int subject1_marks;
        int subject2_marks;
  
};

class Result : public Test {
    public:
        int total_marks;

};
int main()
{
	Result obj;
	
	obj.roll_number = 20;
	cout<<"Student Roll Number: "<<obj.roll_number<<endl;;
	
	cout<<"Student marks subject1_marks: ";
	cin>>obj.subject1_marks;
	cout<<"Student marks subject1_marks: ";
	cin>>obj.subject2_marks;
	
	obj.total_marks = obj.subject1_marks + obj.subject2_marks;
	cout<<"Total Marks: "<<obj.total_marks<<endl;
	return 0;
}
