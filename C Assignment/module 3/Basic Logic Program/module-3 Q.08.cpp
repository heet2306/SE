//Find circumference of Rectangle formula : C = 4 * a

#include <stdio.h>

int main() 
{
    int area, base;
    double circumference;
    //user input
    printf("Enter the length of side a: ");
    //read input
    scanf("%d", &area);

    //user input
    printf("Enter the length of side b: ");
    //read input
    scanf("%d", &base);

    //claculation
    circumference = 4 * area + 4 * base;

    //display  circumference
    printf("The circumference of the rectangle is %.2f\n", circumference);

    return 0;
}
