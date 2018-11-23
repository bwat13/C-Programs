#include<stdio.h>
#include<conio.h>

void main()
{
	int q=93,r,i=0,newbase=8;
	int newrep[32];
	clrscr();
	printf("The Decimal Number Is %d",q);
	printf("\n\tndigit\t|
	do
	{
		r=q%newbase;
		i=i+1;
		newrep[i]=r;
		q=q/newbase;
	}
	while(q>0);
	
	while(i>0)
	{
		printf("%d",newrep[i]);
		i=i-1;
	}
	getch();
}