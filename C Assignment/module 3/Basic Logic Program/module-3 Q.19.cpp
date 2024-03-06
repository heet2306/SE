//Calculate compound interest


#include <stdio.h>
#include <math.h>

int main() 
{
    float principle, rate, time, compoundInterest;

    // Input principle, time, and rate
    printf("Enter principle amount: ");
    scanf("%f", &principle);
    printf("Enter time: ");
    scanf("%f", &time);
    printf("Enter rate: ");
    scanf("%f", &rate);

    // Calculate compound interest
    compoundInterest = principle * pow((1 + rate / 100), time);

    // Print the resultant compound interest
    printf("Compound Interest = %.4f\n", compoundInterest);

    return 0;
}

