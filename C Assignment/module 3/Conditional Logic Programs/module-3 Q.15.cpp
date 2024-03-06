//Write a C program to determine eligibility for admission to a professional
//course based on the following criteria
//Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks
//in Chem>=50 and Total in all three subject >=190 or Total in Maths and
//Physics >=140 --------------------------------------Input the marks obtained in
//Physics :65 Input the marks obtained in Chemistry :51 Input the marks
//obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry :
//188 Total marks of Maths and Physics : 137 The candidate is not eligible.


#include <stdio.h>

int main() {
    // Declare variables to store marks in Physics, Chemistry, Mathematics, and totals
    int phyMarks, chemMarks, mathMarks, totalMarks, mathPhysicsTotal;

    // Input marks from the user
    printf("Enter the marks obtained in Physics: ");
    scanf("%d", &phyMarks);

    printf("Enter the marks obtained in Chemistry: ");
    scanf("%d", &chemMarks);

    printf("Enter the marks obtained in Mathematics: ");
    scanf("%d", &mathMarks);

    printf("Total marks of Maths, Physics, and Chemistry: ");
    scanf("%d", &totalMarks);

    printf("Total marks of Maths and Physics: ");
    scanf("%d", &mathPhysicsTotal);

    //condition: Check eligibility based on the criteria
    if (phyMarks >= 55 && chemMarks >= 50 && mathMarks >= 65 && totalMarks >= 190) 
	{
        printf("The candidate is eligible.\n");
    } 
	else if (mathPhysicsTotal >= 140) 
	{
        printf("The candidate is eligible.\n");
    } 
	else 
	{
        printf("The candidate is not eligible.\n");
    }

    return 0;
}

