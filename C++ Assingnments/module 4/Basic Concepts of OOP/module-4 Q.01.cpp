//WAP to create simple calculator using class
#include<iostream>
using namespace std;

//class create
class calculator{
//	Access Sepcifier
	public:
		
	int num1,num2;
};
int main()
{
//	object create
	calculator obj;
	
//	user input
	cout<<"Enter num1:";
//	read input
	cin>>obj.num1;
//	user input
	cout<<"Enter num2:";
//	read input
	cin>>obj.num2;
	
//	dispaly calculation
	cout<<"ADD:"<<" "<<obj.num1<<" "<<"+"<<" "<<obj.num2<<" "<<"="<<" "<<obj.num1+obj.num2<<endl;
	cout<<"SUB:"<<" "<<obj.num1<<" "<<"-"<<" "<<obj.num2<<" "<<"="<<" "<<obj.num1-obj.num2<<endl;
	cout<<"MUL:"<<" "<<obj.num1<<" "<<"*"<<" "<<obj.num2<<" "<<"="<<" "<<obj.num1*obj.num2<<endl;
	cout<<"DIV:"<<" "<<obj.num1<<" "<<"/"<<" "<<obj.num2<<" "<<"="<<" "<<obj.num1/obj.num2<<endl;
	return 0;
}
