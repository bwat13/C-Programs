#include<stdio.h>
#include<conio.h>
#include <string.h>
struct Office {
   int no;
   char name[60];
   float sal;
   };
void main()
{
	struct Office Employee,Employee2;

	Employee.no=1;
	strcpy(Employee.name,"Yogesssss");
	Employee.sal=18000.00;
	clrscr();
	printf("\nDetails:\nName %s\nID:%d\nSalary:%f",Employee.name,Employee.no,Employee.sal);
	printf("\nEnter 2nd detail");
	printf("\nEnter 2nd name");
	gets(Employee2.name);
	printf("\nenter 2nd id");
	scanf("%d",&Employee2.no);
	printf("\nenter Salary");
	scanf("%f",&Employee2.sal);
	printf("Details 2:\nname : %s\nID:%d\nSalary:%f",Employee2.name,Employee2.no,Employee2.sal);
	flushall();
	getch();
	}