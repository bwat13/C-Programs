#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
	int i;
	struct employee
	{
		char name[25];
		int age;
		float salary;
	};

	struct employee e[5];
	for(i=0;i<5;i++)
	{
		printf("\nEnter the name of employee %dth ",i);
		scanf("%s",e[i].name);
		printf("\nEnter the  age of employee %dth ",i);
		scanf("%d",&e[i].age);
		printf("\nEnter the salary of employee %dth ",i);
		scanf("%f",&e[i].salary);
	}
/*	e1.age=18;
	e1.salary=25000.00;
	printf("\nEnter the name of employee 2");
	gets(e2.name);
	printf("\nEnter the  age of employee 2");
	scanf("%d",&e2.age);
	printf("\nEnter the salary of employee 2");
	scanf("%f",&e2.salary);*/

	///print the e1 e2 details
	printf("\nDetails of Employee 1");
	printf("\nName : %s",e[0].name);
	printf("\nAge : %d",e[0].age);
	printf("\nSalary : %.2f",e[0].salary);

/*	printf("\nDetails of Employee 2");
	printf("\nName : %s",e2.name);
	printf("\nAge : %d",e2.age);
	printf("\nSalary : %.2f",e2.salary);*/
	getch();

}
