  //Find Area of Cube formula : a = 6a2

#include<stdio.h>
 
int main()
{
	int lenght,area;
	
	//Input : Enter the lenght of cube
	printf("Enter the length of cube:");
	scanf("%d", &lenght);
	
	//formula to find area of cube
	area = 6 * lenght * lenght;
	printf("The area of the cube: %d\n",area);

	return 0;
}
