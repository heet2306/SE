//Find area of Triangle Formula : A = 1/2 × b × h

#include<stdio.h>

int base,height,area;


int main()
{
	//Input : Enter base of Triangle
	printf("Enter the base of Triangle: ");
	scanf("%d",&base);
	
	//Input : Enter height of Triangle
	printf("Enter the height of Triangle: ");
	scanf("%d",&height);
	
	//formula to find area of triangle
	area = 0.5 *base*height;	
	printf("Area of the triangle: %d", area);
	
	return 0;
}
