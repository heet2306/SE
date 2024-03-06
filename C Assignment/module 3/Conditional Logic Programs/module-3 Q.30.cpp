//If bill exceeds Rs. 800 then a surcharge of 18% will be charged and the
//minimum bill should be of Rs. 256/-

#include <stdio.h>

int main() 
{
    int units;
    float bill, surcharge;

    printf("Enter the units consumed: ");
    scanf("%d", &units);

	//condition: surcharge of 18% will be charged
    if (units < 256) 
    {
        bill = 256;
    }
    else if (units <= 800) 
    {
        bill = units * 0.5;
    } 
    else 
    {
        bill = units * 0.5;
        surcharge = bill * 0.18;
        bill += surcharge;
    }

    printf("The total bill is Rs. %.2f\n", bill);

    return 0;
}


  
