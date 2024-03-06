//Write a program to find the multiplication values and the cubic values using
//inline function

#include<iostream>
using namespace std;

inline int multiplication(int a,int b)
{
	return a*b;
}
inline int cubic(int a,int b,int c)
{
	return a*b*c;
}

int main()
{
	cout<<"multiplication Values: "<<multiplication(10,10)<<endl;
	cout<<"Cubic values: "<<cubic(10,10,10);
	return 0;
}
