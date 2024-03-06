//Find Area of Square formula : a = a2

#include<stdio.h>

 
int main()
{
	int length,area;
	//Input : Enter the lenght of square
	printf("Enter the length of a Square:");
	scanf("%d",&length);
	
	//formula to find area of square
	area = length*length;
	printf("Area of the square: %d\n",area);

	return 0;
}
