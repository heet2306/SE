//Convert school’s name in abbreviated form


#include<stdio.h>

int main()
{
	char schoolname[30];
	
	printf("Enter school name: ");
	scanf("%s  %s %s %s",&schoolname[0],&schoolname[10],&schoolname[20],&schoolname[30]);
	
	
	//the abbreviated school name
	printf("school name in abbreviated form: %c.%c.%c.%c",schoolname[0],schoolname[10],schoolname[20],schoolname[30]);
	return 0;
}
