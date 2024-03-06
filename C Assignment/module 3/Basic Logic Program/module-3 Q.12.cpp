//Accept number of students from user. I need to give 5 apples to each student. How many apples are required?

#include<stdio.h>

int apple,student;
int main()
{
	//Input: number of student 
	printf("Enter the number of student:");
	// Read the input from the user
	scanf("%d",&apple);
	
	//multiply allple to student
	student = 5 * apple;
	printf("You need %d apples to give 5 apples to each student\n", student);

	return 0;
}
