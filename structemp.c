#include <stdio.h>
#include <conio.h>
#include <string.h>
struct org
{
	char name[30];
	int emp_id,depno,salary;
};
void main()
{
	struct org employee[20];
	int n,i;
	printf("\nEnter the number of employeed in your organization(<=20):");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter person%d\n Name: ",i+1);
		scanf("%s", &employee[i].name);
		printf("\nEmployee id: ");
		scanf("%d", &employee[i].emp_id);
		printf("\nEmployee department: ");
		scanf("%d", &employee[i].depno);
		printf("\nEmployee salary");
		scanf("%d", &employee[i].salary);
	}
	for(i=0;i<n;i++)
	{
		printf("\nPerson %d\n Name: %s", i+1,employee[i].name);
		printf("\nEmployee id: %d", employee[i].emp_id);
		printf("\nEmployee department: %d", employee[i].depno);
		printf("\nEmployee salary: %d", employee[i].salary);
	}
	getch();
}

	
