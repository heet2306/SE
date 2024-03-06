#include <stdio.h>
//union create
union unionjob
{
	char name[50];
	float salary;
	int workno;
	
} ujob;
//structure create
struct structjob
{
	char name[50];
	float salary;
	int workno;
	
} sjob;

int main()
{
//	print union size
	printf("Size of union =%d bytes",sizeof(ujob));
//	print structure size
	printf("\n Size of structure =%d bytes",sizeof(sjob));
}
