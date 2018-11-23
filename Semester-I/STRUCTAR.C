#include<stdio.h>
#include<conio.h>
struct employee
 {
  char name[25];
  int age;
  float salary;
 };
int main()
{
 int i;
 struct employee e[5];
 //clrscr();
 //flushall();
 for(i=0;i<2;i++)
 {
 printf("\nDetail the students employee %d",i+1);
 printf("\nEnter the name of employee ");
 scanf("%s",e[i].name);
 printf("\nEnter the age of employee ");
 scanf("%d",&e[i].age);
 printf("\nEnter the salary of employee ");
 scanf("%f",&e[i].salary);
 }
 for(i=0;i<2;i++)
 {
 printf("\ndetails of employee %d",i+1);
 printf("\nName: %s",e[i].name);
 printf("\nAge: %d",e[i].age);
 printf("\nSalary: %f",e[i].salary);
 }
 getch();
}
