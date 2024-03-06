/*Write a program of structure employee that provides the following
a. information -print and display empno, empname, address
andage*/

#include<stdio.h>
int main()
{
	char empname[200],address[200];
	int empno,age;
	
		//user input
		printf("Enter your number:");
		//read  user input
		scanf("%d",&empno);
		
		//user input
		printf("Enter your Age:");
		//read  user input
		scanf("%d",&age);
		
		//user input	
		printf("Enter your name:");
		//read  user input
		scanf("%s",empname);
		
		//user input
		printf("Enter your address:");
		//read  user input
		scanf("%s",address);
		
		//display user information
		printf("==========Employee information===========\n");
		printf("your number: %d \n",empno);
		printf("your age: %d \n",age);
		printf("your name: %s \n",empname);
		printf("your address: %s \n",address);

	return 0;
}
