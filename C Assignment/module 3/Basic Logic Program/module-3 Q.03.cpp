//WAP to Find Area And Circumference of Circle

#include<stdio.h>

int main()
{
  float radius, area, circumference;
//Input: Enter the radius of circle 
  printf("Enter the radius of a circle :");
// Read the input from the user
  scanf("%f", &radius);
  
// formula for area of circle
  	area = 3.14*radius*radius;
	circumference = 2 * 3.14 * radius;
	
	
//.2f is printing upto two decimal places
  printf("Area of the circle = %.2f\n", area);  
  printf("Circumference of the circle: %.2f\n", circumference);

  return 0;
}
