// Find area of Rectangle Formula : A=wl

#include<stdio.h>

int width,length,area;
int main()
{
	//Input : Enter the width of Rectangle
	printf("Enter the width of Rectangle: ");
	scanf("%d",&width);
	
	//Input : Enter the lenght of Rectangle
	printf("Enter the length of Rectangle: ");
	scanf("%d",&length);
	
	//formula to Find area of Rectangle
	area = width*length;
	printf("The area of the Rectangle: %d\n",area);
	return 0;
}
