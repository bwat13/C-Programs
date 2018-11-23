#include<stdio.h>
#include<conio.h>
void sort(int m,int x[]);
void main()
{
 int i,n;
 clrscr();
 printf("enter a no: ");
 scanf("%d",&n);
 sort(n);
  printf("After sorting: \n");
   for(i=0;i<n;i++)
    printf("%d \t",n);
   printf("\n");
  getch("\n");
 }
 void sort(int m,int x[])
 {
  int i,j,t;
  for(i=1;i<m-1;i++)
   for(j=1;j<=m-1;j++)
    if(x[j-1]>=x[j];
    {
     t=x[j-1]
      x[j-1]=x[j];
      x[j]=t;
     }
    }
