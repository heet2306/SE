//find the area of a rectangular prism formula : A=2(wl+hl+hw)

#include<stdio.h>

float area,width,lenght,height;

int main()
{
	//Input: lenght of a rectangular prism
	printf("Enter the lenght of a rectangular prism: ");
	// Read the input from the user
	scanf("%f",&lenght);
	
	//Input: height of a rectangular prism
	printf("Enter the height of a rectangular prism: ");
	// Read the input from the user
	scanf("%f",&height);
	
	//Input: width of a rectangular prism
	printf("Enter the width of a rectangular prism: ");
	// Read the input from the user
	scanf("%f",&width);
	
	//formula to find the area of a rectangular prism
	area= 2*(width*lenght + height*lenght + height+width);
	printf("the area of a rectangular prism %.2f",area);
	
	
	return 0;
}
