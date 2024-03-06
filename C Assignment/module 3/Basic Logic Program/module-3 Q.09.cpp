//Find circumference of Triangle formula : triangle = a + b + c

#include<stdio.h>


 float triangle,a,b,c;
int main()
{
	//Input : Enter the lenght of Triangle a
	printf("Enter the length of a: ");
    scanf("%f", &a);

	//Input : Enter the lenght of Triangle b
    printf("Enter the length of b: ");
    scanf("%f", &b);
    
    
	//Input : Enter the lenght of Triangle c
    printf("Enter the length of c: ");
    scanf("%f", &c);
    
    //formula to Find circumference of Triangle
    triangle = a+b+c;
    printf("circumference of Triangle: %.2f",triangle);
    
    
	return 0;
}
