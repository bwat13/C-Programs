#include<stdio.h>
#include<conio.h>
void main()
{
 int data[100],i,j,n,temp;
 clrscr();
 printf("Enter the number of elements: ");
 scanf("%d",&n);
  for(i=0;i<n;++i)
  {
   printf("%d Enter element: ",i+1);
   scanf("%d",&data[i]);
  }
  for(j=0;j<n-1;++j)
   for(i=0;i<n-j-1;++i)
   {
    if(data[i]>data[i+1])
    {
     temp=data[i];
     data[i]=data[i+1];
     data[i+1]=temp;
    }
   }
  printf("In sorting: ");
  for(i=0;i<n;++i)
   printf("%d",data[i]);
 }